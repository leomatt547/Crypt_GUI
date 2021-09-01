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
public:
	VCS();
	void generateKunci();
	string getPlain();
	string getKunci();
	string getCipher();
	void setPlain(string);
	void setKunci(string);
	void setCipher(string);
	void VCS_Enkripsi();

};

