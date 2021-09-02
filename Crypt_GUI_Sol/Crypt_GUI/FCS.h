#pragma once
#pragma once
#include <string>
#include "Backend.h"

using namespace std;

class FCS
{
private:
	string plain;
	string kunci;
	string cipher;
	string file;

public:
	FCS();
	string generateKunci(string, string);
	string getPlain();
	string getKunci();
	string getCipher();
	string getFile();
	void setPlain(string);
	void setKunci(string);
	void setCipher(string);
	void setFile(string);
	void FCS_Enkripsi();
	void FCS_Enkripsi_File();
	void FCS_Dekripsi();
	void FCS_Dekripsi_File();
};