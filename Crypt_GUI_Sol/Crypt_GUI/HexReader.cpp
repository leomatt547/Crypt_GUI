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

string readHexFile(string filename) {
    /*std::ifstream inFile;
    inFile.open(filename); //open the input file

    unsigned char x;
    std::stringstream strStream;
    inFile >> std::noskipws;
    while (inFile >> x) {
        strStream << inFile.rdbuf(); //baca filenya
    }
    std::string str = strStream.str(); //tampung ke str nya
    
    return str;
    */
    /*
    unsigned char x;
    std::ostringstream oss;
    std::ifstream input(filename, std::ios::binary);
    input >> std::noskipws;
    while (input >> x) {
        oss << std::hex << std::setw(2) << std::setfill('0')
            << (int)x;
    }
    string hasil = hexToASCII(oss.str());
    return hasil;

    std::ifstream input(filename, std::ios::binary);

    std::vector<char> bytes(
        (std::istreambuf_iterator<char>(input)),
        (std::istreambuf_iterator<char>()));
    input.close();

    string s(bytes.begin(), bytes.end());
    */
    std::ifstream file(filename);
    std::string str;
    vector<string> file_contents;
    string s;
    while (std::getline(file, str))
    {
        file_contents.push_back(str);
        s += str;
        s += "\n";
        //   file_contents.push_back("\n");
    }
    //string s(file_contents.begin(), file_contents.end());
    return s;
}

void writeHexFile(string filename, string hex) {
    std::ofstream outFile;
    outFile.open(filename, ios::out | ios::binary); //open the output file
    outFile << hex;
    /*std::stringstream strStream;
    strStream >> outFile.rdbuf(); //baca filenya
    std::string str = strStream.str(); //tampung ke str nya
    */

}

string hexToASCII(string hex)
{
    // initialize the ASCII code string as empty.
    string ascii = "";
    for (size_t i = 0; i < hex.length(); i += 2)
    {
        // extract two characters from hex string
        string part = hex.substr(i, 2);

        // change it into base 16 and
        // typecast as the character
        char ch = stoul(part, nullptr, 16);

        // add this char to final ASCII string
        ascii += ch;
    }
    return ascii;
}
