#include <iostream>
#include <string>
#include "Backend.h"

using namespace std;

int charToInt(char x)
{
	return (int) tolower(x) - 96;
}

char intToChar(int y)
{
	return (char) tolower(y + 96);
}

