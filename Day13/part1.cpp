#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>

#include "util.h"

using namespace std;



int main()
{
  bool first = true;
  vector<string> arr = readInStr("input");
  vector<int> busTimes;
  vector<int> busIDs;
  int startTime = stoi(arr[0]);
  
  
  for(auto const& value: arr){
	if (value == "x" || first){
	  first = false;
	}else{
	  int id = stoi(value);
	  int val = id;
	  while(val < startTime){
		val+=id;
	  }
	  busTimes.push_back(val-startTime);
	  busIDs.push_back(id);
	}
  }
  printVecInt(busTimes);
  cout << endl;
  printVecInt(busIDs);
  auto it = min_element(busTimes.begin(),busTimes.end());
  cout << endl << busIDs[*find(busTimes.begin(),busTimes.end(), *it)+1] << " " << *it << endl;
  cout << "p1: " << busIDs[*find(busTimes.begin(),busTimes.end(), *it)+1] * *it << endl;
}

//100000331500000
