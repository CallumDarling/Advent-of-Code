#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>

#include "util.h"

using namespace std;

int main()
{
  int jumps[3] = {1,0,1};
  vector<int> arr = readInInt("input");
  sort(arr.begin(),arr.end());

  for(std::vector<int>::size_type i = 0; i != arr.size()-1; i++) {
	jumps[arr[i+1]-arr[i]-1]++;
	cout << arr[i] << " | " << jumps[0]<<","<<jumps[1]<<","<<jumps[2] << endl;
  }
	cout << "p1: " << jumps[0]*jumps[2] << endl;
}
