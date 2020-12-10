#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <math.h>  

#include "util.h"

using namespace std;

vector<int> arr = readInInt("input");
map<int, long> foundIndeces;

long rec(int index) {
  if(index == arr.size()-1){
	return 1;
  }
  if(foundIndeces.find(index)!=foundIndeces.end()){
	return foundIndeces.at(index);
  }
  long x = 0;
  for(std::vector<int>::size_type i = index+1; i != index+4; i++) {
	if(arr[i]-arr[index]<=3 && i<=arr.size()){
	  x+= rec(i);
	}
  }
  foundIndeces[index] = x;
  return x; 
}

int main()
{
  sort(arr.begin(),arr.end());
  arr.insert(arr.begin(), 0);
  
  long tot = rec(0);
  cout << "p2: " << tot << endl;

  for(auto elem :  foundIndeces){   
	cout << elem.first << " " << elem.first << " " << elem.second << "\n";
  }
}













  // int jumps[3] = {0,0,0};
  // vector<int> possibilities;
  // sort(arr.begin(),arr.end());

  // for(std::vector<int>::size_type i = 0; i != arr.size(); i++) {
	
  // 	int pos = 0;
  // 	if(arr[i+1]-arr[i]<=3 && i+1<arr.size()){
  // 	  pos++;
  // 	}
	
  // 	if(arr[i+2]-arr[i]<=3 && i+2<arr.size()){
  // 	  pos++;
  // 	}
	
  // 	if(arr[i+3]-arr[i]<=3 && i+3<arr.size()){
  // 	  pos++;
  // 	}
  // 	possibilities.push_back(pos);
	
  // 	cout << arr[i] << " | " << pos << endl;
  // }
  // long tot = 3;

  // for(std::vector<int>::size_type i = 0; i !=  possibilities.size()-1; i++) {
  // 	tot*= possibilities[i];
	  

  // }
