#pragma once
#include <iostream>
#include <string>

using namespace std;

int charToInt(char);
char intToChar(int);

template<class T>
string objToStr(T obj) {
	return to_string(obj);
}