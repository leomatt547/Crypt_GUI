#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <iterator>
#include <vector>

using namespace std;

string toBase(unsigned i, unsigned base);
string hexRead(string , char* _base);
string readHexFile(string);
void writeHexFile(string, string);
string hexToASCII(string);
