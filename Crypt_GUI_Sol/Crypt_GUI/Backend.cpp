#include <iostream>
#include <string>
#include "Backend.h"

using namespace std;

int charToInt(char x, bool vcs)
{
    if (vcs) {
        //dikarenakan a = 0
        return static_cast<int>(tolower(x) - 97);
    }
    else {
        switch (x) {
        case 'A': case 'a': return 11;
        case 'B': case 'b': return 23;
        case 'C': case 'c': return 14;
        case 'D': case 'd': return 6;
        case 'E': case 'e': return 0;
        case 'F': case 'f': return 2;
        case 'G': case 'g': return 15;
        case 'H': case 'h': return 4;
        case 'I': case 'i': return 21;
        case 'J': case 'j': return 7;
        case 'K': case 'k': return 24;
        case 'L': case 'l': return 12;
        case 'M': case 'm': return 16;
        case 'N': case 'n': return 8;
        case 'O': case 'o': return 25;
        case 'P': case 'p': return 5;
        case 'Q': case 'q': return 22;
        case 'R': case 'r': return 17;
        case 'S': case 's': return 1;
        case 'T': case 't': return 20;
        case 'U': case 'u': return 9;
        case 'V': case 'v': return 18;
        case 'W': case 'w': return 13;
        case 'X': case 'x': return 19;
        case 'Y': case 'y': return 3;
        case 'Z': case 'z': return 10;
        default: return 0;
        }
    }
}

char intToChar(int y, bool vcs)
{
    if (vcs) {
        //dikarenakan 0 = a
        return static_cast<char>(y + 97);
    }
    else {
        switch (y) {
        case 0: return 'e';
        case 1: return 's';
        case 2: return 'f';
        case 3: return 'y';
        case 4: return 'h';
        case 5: return 'p';
        case 6: return 'd';
        case 7: return 'j';
        case 8: return 'n';
        case 9: return 'u';
        case 10: return 'z';
        case 11: return 'a';
        case 12: return 'l';
        case 13: return 'w';
        case 14: return 'c';
        case 15: return 'g';
        case 16: return 'm';
        case 17: return 'r';
        case 18: return 'v';
        case 19: return 'x';
        case 20: return 't';
        case 21: return 'i';
        case 22: return 'q';
        case 23: return 'b';
        case 24: return 'k';
        case 25: return 'o';
        default: return 'xxxx';
        }
    }
	
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

