#pragma once
#include <string>
#include "Backend.h"

using namespace std;

class FVC
{
private:
	string plain;
	string kunci;
	string cipher;
	string file;

public:
	FVC();
	string generateKunci(string, string);
	string getPlain();
	string getKunci();
	string getCipher();
	string getFile();
	void setPlain(string);
	void setKunci(string);
	void setCipher(string);
	void setFile(string);
	void FVC_Enkripsi();
	void FVC_Enkripsi_File();
	void FVC_Dekripsi();
	void FVC_Dekripsi_File();
};