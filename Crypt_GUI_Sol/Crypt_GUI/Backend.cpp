#include <iostream>
#include <string>
#include "Backend.h"

using namespace std;

int charToInt(char x)
{
	//dikarenakan a = 0
    return static_cast<int>(tolower(x) - 97);
}

char intToChar(int y)
{
	//dikarenakan 0 = a
    return static_cast<char>(y + 97);
}

char* strToHexChar(string hex_chars) {

    istringstream hex_chars_stream(hex_chars);
    vector<unsigned char> bytes;

    unsigned int c;
    while (hex_chars_stream >> std::hex >> c)
    {
        bytes.push_back(c);
    }
    for (int i = 0; i < bytes.size(); i++) {
        cout << bytes.at(i) << endl;
    }
    return reinterpret_cast<char*>(bytes.data());
}

void saveFile(string filename, string _hex) {
    std::ofstream out(filename+".txt");
    out << _hex;
    out.close();
}

string readFile(string filename) {
    ifstream myReadFile;
    myReadFile.open(filename);
    string output, word;
    if (myReadFile.is_open()) {
        // extracting words from the file
        while (myReadFile >> output)
        {
            // displaying content
            word += output;
        }
        word += "";
    }
    myReadFile.close();
    return word;
}

string removeKarakterLain(string s)
{
    for (int i = 0; i < s.size(); i++) {
        if (s[i] < 'A' || s[i] > 'Z' &&
            s[i] < 'a' || s[i] > 'z')
        {
            s.erase(i, 1);
            i--;
        }
    }
    return s;
}

string filterOutput(string str, int _jarak)
{
    string s1 = "";
    int iterator = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (iterator < _jarak-1) {
            s1 = s1 + str[i];
            iterator++;
        }
        else {
            s1 = s1 + str[i] + " ";
            iterator = 0;
        }
    }
    return s1;
}

