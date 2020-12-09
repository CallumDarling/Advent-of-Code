#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>

#include "util.h"


using namespace std;


int main()
{
  vector<long int> arr = readInLong("input");
  vector<int> visited;

  // brute force best force
  for(std::vector<int>::size_type i = 25; i != arr.size(); i++) {
	long int tot = 0;
	int cnt = i;
	while(tot<105950735){
	  //cout << "\tTEMPTOT: " << tot << endl;
	  tot+=arr[cnt];
	  cnt++;
	}
	if(tot==105950735){
	  vector<long int>::iterator minIt = min_element(arr.begin()+i,arr.begin()+cnt);
	  vector<long int>::iterator maxIt = max_element(arr.begin()+i,arr.begin()+cnt);

	  cout << "TOT: " << tot << " I: " << i << " COUNT: " << cnt << endl;
	  cout << "MinIT: " << *minIt << " MaxIT: " << *maxIt << " = " << *minIt+*maxIt << endl;
	}
  }

  long int toot = 0;
  for(std::vector<int>::size_type i = 448; i != 465; i++) {
	toot += arr[i];
	cout << arr[i] << " " << toot << endl;
  }
}
