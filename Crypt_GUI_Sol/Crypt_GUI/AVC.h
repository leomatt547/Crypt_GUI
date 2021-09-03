#pragma once
#pragma once
#pragma once
#include <string>
#include "Backend.h"

using namespace std;

class AVC
{
private:
	string plain;
	string kunci;
	string cipher;
	string file;

public:
	AVC();
	string generateKunci(string, string);
	string getPlain();
	string getKunci();
	string getCipher();
	string getFile();
	void setPlain(string);
	void setKunci(string);
	void setCipher(string);
	void setFile(string);
	void AVC_Enkripsi();
	void AVC_Enkripsi_File();
	void AVC_Dekripsi();
	void AVC_Dekripsi_File();
};