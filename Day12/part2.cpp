#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <math.h>

#include "util.h"

using namespace std;



int main()
{
  vector<string> arr = readInStr("input");
  int x = 0;
  bool done = false;
  int posx=0, posy=0;
  int wayPosx=10,wayPosy=1;
  int rot = 90;

  
  for(auto const& value: arr) {
	char inst = value.at(0);
	int val = stoi(value.substr(1));
	switch(inst){
	case 'N':{
	  wayPosy+=val;
	  break;}
	case 'S':{
	  wayPosy-=val;
	  break;}
	case 'E':{
	 wayPosx+=val;
	  break;}
	case 'W':{
	  wayPosx-=val;
	  break;}
	case 'L':{
	  int oldRot = rot;
	  rot+=val;
	  int r = (rot%360) - oldRot%360;
	  // cout << "rotLeft: " << r << endl;
	  float angle = (r) * (M_PI/180); // Convert to radians
	  float rotatedX = cos(angle) * (wayPosx) - sin(angle) * (wayPosy);
	  float rotatedY = sin(angle) * (wayPosx) + cos(angle) * (wayPosy);
	  wayPosx = round(rotatedX);
	  wayPosy = round(rotatedY);
	  break;}// if i take away this break can i lead to less code duplication with fiddling?
	case 'R':{
	  int oldRot = rot;
	  rot+=val;
	  int r = (rot%360) - oldRot%360;
	  r*=-1; 
		//int r = (360+(rot%360) - oldRot%360)%360;
	  float angle = (r) * (M_PI/180); // Convert to radians
	  float rotatedX = cos(angle) * (wayPosx) - sin(angle) * (wayPosy);
	  float rotatedY = sin(angle) * (wayPosx) + cos(angle) * (wayPosy);
	  //cout << "x: " << rotatedX << " y: " << rotatedY << endl;
	  cout << "\tOld X: " << wayPosx << " Old y: " << wayPosy << endl;
	  cout << "\tRotation of " << r << endl;
	  cout << "\tx: " << rotatedX << " y: " << rotatedY << endl;
	  
	  wayPosx = round(rotatedX);
	  wayPosy = round(rotatedY);
	  
	  
	  break;}
	case 'F':{
	  posx+=val* wayPosx;
	  posy+=val* wayPosy;
	  break;
	}
	default:{
	   
	   break;}

	  
	}
   cout << inst << ":" << val << "  \t ("<<posx<<", "<<posy<<") R: " <<
	  rot%360 << " ("<<rot<<")"<< "\tx: " << wayPosx << " y: " << wayPosy << endl;

  }
  cout << "p1: " << abs(posx)+abs(posy) << endl;
}

