#pragma once
#include <string>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include "Backend.h"

using namespace std;

class ECip
{
private:
	string plain;
	string kunci;
	string cipher;
	string file;

public:
	ECip();
	map<char, int> m1;
	map<int, int> m2;
	map<int, int> m3;
	map<int, int> m4;
	map<int, int> m5;
	map<int, int> m6;
	map<int, char> m7;
	char ptoc(char);
	char ctop(char);
	string getPlain();
	string getKunci();
	string getCipher();
	string getFile();
	void setPlain(string);
	void setKunci(string);
	void setCipher(string);
	void setFile(string);
	void ECip_Enkripsi();
	void ECip_Enkripsi_File();
	void ECip_Dekripsi();
	void ECip_Dekripsi_File();
};