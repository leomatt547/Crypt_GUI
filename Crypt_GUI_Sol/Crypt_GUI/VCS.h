#pragma once
#include <string>
#include "Backend.h"

using namespace std;

class VCS
{
private:
	string plain;
	string kunci;
	string cipher;
	string file;

public:
	VCS();
	string generateKunci(string, string);
	string getPlain();
	string getKunci();
	string getCipher();
	string getFile();
	void setPlain(string);
	void setKunci(string);
	void setCipher(string);
	void setFile(string);
	void VCS_Enkripsi();
	void VCS_Enkripsi_File();
	void VCS_Dekripsi();
	void VCS_Dekripsi_File();
};

