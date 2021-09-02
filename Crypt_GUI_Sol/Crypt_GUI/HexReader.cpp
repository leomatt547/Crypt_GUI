#include "HexReader.h"
using namespace std;


string toBase(unsigned i, unsigned base)
{
    const string DIGITS = "0123456789ABCDEF";
    return i ? toBase(i / base, base) + DIGITS[i % base] : "";
}


string hexRead(string _file, char * _base) {
    stringstream ss;
    string filename = _file;
    unsigned base = atoi(_base);

    const int LINELENGTH = 10;

    int width = toBase(255, base).size();
    char c;
    int counter = 0;

    ifstream in(filename, ios::binary);
    while (in.get(c))
    {
        if (counter == 0) {
            ss << toBase((unsigned)c, base);
        }
        else {
            ss << setw(width + 1) << toBase((unsigned)c, base);
        }
        counter++;
        if (counter % LINELENGTH == 0) ss << '\n';
    }
    return ss.str();
}
