#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>

#include "util.h"

using namespace std;

bool checkTime(long id, vector<string> vals){
  bool first = true;
  bool passes = true;

  //cout << "ID "<< id << ": ";

  if(id%100000==0){
	cout << "ID: " << id << endl;
  }
  for (std::vector<int>::size_type i = 0; i != vals.size(); i++) {
    if (vals[i] == "x" || first) {
      first = false;
    } else {
      if ((id + i-1) % stoi(vals[i]) != 0) {
		return false;
      }
    }
  }
  cout << endl;
  return true;
}


int main(){
  vector<string> arr = readInStr("input");
  bool win = false;
  long x=402251700000000;
 
  while(!win){
	win = checkTime(x, arr);
	x+=1;
  }

  cout << x-1 << " is the earliest time" << endl;

  
  
	

}
