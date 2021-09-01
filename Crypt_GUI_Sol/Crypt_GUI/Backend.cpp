#include <iostream>
#include <string>
#include "Backend.h"

using namespace std;

int charToInt(char x)
{
	//dikarenakan a = 0
	return (int) tolower(x) - 97;
}

char intToChar(int y)
{
	//dikarenakan 0 = a
	return (char) tolower(y + 97);
}

