#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>

#include "util.h"

using namespace std;



int main()
{
  vector<string> arr = readInStr("input");
  int x = 0;
  bool done = false;
  int posx=0, posy=0;
  int rot = 90;

  
  for(auto const& value: arr) {
	char inst = value.at(0);
	int val = stoi(value.substr(1));
	switch(inst){
	case 'N':{
	  posy+=val;
	  break;}
	case 'S':{
	  posy-=val;
	  break;}
	case 'E':{
	  posx+=val;
	  break;}
	case 'W':{
	  posx-=val;
	  break;}
	case 'L':{
	  rot+=360-val;
	  break;}
	case 'R':{
	  rot+=val;
	  break;}
	case 'F':{
	  int r = rot%360;
	  switch(r){
	  case 0:
		posy+=val;
		break;
	  case 90:
		posx+=val;
		break;
	  case 180:
		posy-=val;
		break;
	  case 270:
		posx-=val;
		break;
	  default:
		break;
	  }
	  break;}
      default:
          break;

	  
	}
	cout << inst << ":" << val << " ("<<posx<<", "<<posy<<") R: " <<
	  rot%360 << " ("<<rot<<")"<< endl;

  }
  cout << "p1: " << abs(posx)+abs(posy) << endl;
}
