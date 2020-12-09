#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>

#include "util.h"


using namespace std;

//int arr[] = {9,    9,        9,        9,        9,    9,    1721,
//           979,  3666,     299,      675,      1451, 2444, 2443,
//           2445, 45234234, 43324423, 43223443, 4324, 2442};


vector<long int> arr = readInLong("input");


int main()
{
  vector<int> visited;
  int preAmble = 25;
  for(const auto& num : arr){
	
  }
  
  for(std::vector<int>::size_type i = 25; i != arr.size(); i++) {
	bool passes = false;
	for(std::vector<int>::size_type j = i-25; j != i; j++) {
	  if (!passes) {
		vector<long int>::iterator it =
		  find(arr.begin() - 25 + i, arr.begin() + i, arr[i] - arr[j]);
		if (it != arr.begin() + i) {
		  passes = true;
          // cout << arr[j] << " + " << *it << " = " << arr[i] << endl;
		}
	  }
	}
	if(!passes){
	  cout << arr[i];
	}
  }
}
