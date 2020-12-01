#include <iostream>
#include <algorithm>

using namespace std;

//int arr[] = {9,    9,        9,        9,        9,    9,    1721,
//           979,  3666,     299,      675,      1451, 2444, 2443,
//           2445, 45234234, 43324423, 43223443, 4324, 2442};


int arr[] = {
  1735,
  1700,
  1358,
  1908,
  1634,
  2006,
  762,
  1492,
  1917,
  1591,
  1571,
  1283,
  1744,
  1815,
  1383,
  1787,
  1832,
  1032,
  1845,
  1406,
  1978,
  1263,
  1450,
  1364,
  1594,
  1877,
  1346,
  1695,
  1501,
  1266,
  1729,
  1476,
  1558,
  1684,
  1295,
  1267,
  1341,
  1415,
  1491,
  1640,
  1756,
  1330,
  1987,
  1969,
  1844,
  1706,
  1654,
  1580,
  1405,
  1419,
  1367,
  1277,
  1992,
  1953,
  1499,
  1470,
  2000,
  1739,
  1889,
  1670,
  1776,
  1798,
  1308,
  1890,
  1626,
  1284,
  1315,
  1869,
  1514,
  1214,
  1648,
  1418,
  1329,
  1795,
  1385,
  1477,
  1984,
  1796,
  1515,
  2001,
  1155,
  1800,
  1965,
  1971,
  1100,
  1650,
  1686,
  1911,
  1560,
  1912,
  1721,
  1658,
  1738,
  1885,
  1028,
  266,
  1989,
  1704,
  1388,
  1498,
  1769,
  1453,
  925,
  1588,
  1828,
  1024,
  1671,
  1998,
  1942,
  1636,
  1382,
  993,
  1703,
  1475,
  1391,
  1970,
  1841,
  1952,
  1446,
  1347,
  1395,
  1440,
  1980,
  1386,
  1922,
  1857,
  1291,
  1808,
  1335,
  1876,
  1576,
  1436,
  634,
  1557,
  1782,
  1881,
  1955,
  1765,
  1736,
  1585,
  1858,
  1862,
  989,
  1661,
  1757,
  1775,
  1693,
  1842,
  1660,
  1647,
  870,
  1928,
  1597,
  1420,
  1646,
  1821,
  2009,
  1866,
  1947,
  1593,
  1788,
  1369,
  1525,
  1256,
  1846,
  1445,
  1907,
  1750,
  1906,
  1849,
  765,
  1342,
  1811,
  1260,
  1466,
  1424,
  1823,
  1767,
  1290,
  1840,
  1825,
  1287,
  1384,
  1996,
  1627,
  1983,
  1328,
  1674,
  1676,
  1727,
  1810,
  1394,
  799,
  1723,
  1293,
  1273,
  1317,
  1749,
  1552,
  1645,
};


int furthestIndex;

//adapted from https://www.geeksforgeeks.org/binary-search/
int binaryEliminate(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2;
		if (arr[mid] >= x){
		  if(mid < furthestIndex){
			furthestIndex = mid;
		  }
		  return binaryEliminate(arr, l, mid - 1, x);
		}else{
		  return binaryEliminate(arr, mid + 1, r, x); 
		}
    }
    return -1;
}


//https://www.geeksforgeeks.org/binary-search/
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
}


void pArr(int arr[], int size) {
  for(int i=0;i<size;i++){
	cout<< "( " << i << " , " << arr[i] << "}" << endl;
  }
  cout << endl;
}  


int main()
{

  int n = sizeof(arr)/sizeof(arr[0]);
  cout << n << endl;
  sort(arr, arr + n);
  pArr(arr,n);
  furthestIndex = n-1;
  binaryEliminate(arr, 0, n-1, 2020);
  cout << furthestIndex << ": " << arr[furthestIndex] << endl;
  for(int x=0; x<furthestIndex; x++){
	int bin = binarySearch(arr,0,furthestIndex, 2020-arr[x]);
	if(bin!=-1){
	  int mult = arr[x] * arr[bin];
	  cout << arr[x] << " and " << arr[bin] << " Sum to 2020: They multiply to "
		   << mult <<endl;
	}
  }
}
