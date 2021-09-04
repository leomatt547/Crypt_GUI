#pragma once
#include <string>
#include "Backend.h"
#include "HexReader.h"

using namespace std;

class EVC
{
private:
	string plain;
	string kunci;
	string cipher;
	string file;

public:
	EVC();
	string generateKunci(string, string);
	string getPlain();
	string getKunci();
	string getCipher();
	string getFile();
	void setPlain(string);
	void setKunci(string);
	void setCipher(string);
	void setFile(string);
	void EVC_Enkripsi();
	void EVC_Enkripsi_File();
	void EVC_Dekripsi();
	void EVC_Dekripsi_File();
};