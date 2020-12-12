#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>
#include <algorithm>


template <typename Out>
void split(const std::string &s, char delim, Out result) {
  std::istringstream iss(s);
  std::string item;
    while (getline(iss, item, delim)) {
        *result++ = item;
    }
}

std::vector<std::string> split(const std::string &s, char delim) {
  std::vector<std::string> elems;
    split(s, delim, back_inserter(elems));
    return elems;
}

std::vector<std::string> readInStr(std::string filename){
  std::ifstream inFile;
  inFile.open(filename);
  if (inFile.fail()) {
	std::cerr << "Could not find file" << std::endl;
  }
  std::vector<std::string> vec;
  std::string S;
  while (inFile >> S) {
	vec.push_back(S);
  }
  return vec;
}

std::vector<int> readInInt(std::string filename){
  std::ifstream inFile;
  inFile.open(filename);
  if (inFile.fail()) {
	std::cerr << "Could not find file" << std::endl;
  }
  std::vector<int> vec;
  int i;
  while (inFile >> i) {
	vec.push_back(i);
  }
  return vec;
}

std::vector<long> readInLong(std::string filename){
  std::ifstream inFile;
  inFile.open(filename);
  if (inFile.fail()) {
	std::cerr << "Could not find file" << std::endl;
  }
  std::vector<long> vec;
  int i;
  while (inFile >> i) {
	vec.push_back(i);
  }
  return vec;
}

void printVecStr(std::vector<std::string> arr){
  for(auto const& value: arr) {
	std::cout << value << std::endl;
  }
}
