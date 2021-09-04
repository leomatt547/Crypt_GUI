#pragma once
#include <string>
#include "Backend.h"

using namespace std;

class AFC
{
private:
	string plain;
	string kunci_m;
	string kunci_b;
	string cipher;
	string file;

public:
	AFC();
	string getPlain();
	string getKunciM();
	string getKunciB();
	string getCipher();
	string getFile();
	void setPlain(string);
	void setKunciM(string);
	void setKunciB(string);
	void setCipher(string);
	void setFile(string);
	void AFC_Enkripsi();
	void AFC_Enkripsi_File();
	void AFC_Dekripsi();
	void AFC_Dekripsi_File();
};