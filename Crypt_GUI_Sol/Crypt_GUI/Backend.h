#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <vector>
#include <sstream>

using namespace std;

int charToInt(char, bool);
char intToChar(int, bool);
int charToIntEVC(char);
char intToCharEVC(int);
string removeKarakterLain(string);
string filterOutput(string, int);
void saveFile(string, string);
char* strToHexChar(string);
string readFile(string);

template<class T>
string objToStr(T obj) {
	return to_string(obj);
}