#pragma once
#include <string>

using namespace std;

class VCS
{
private:
	string plain;
	string kunci;
	string cipher;
	//void generateKunci();
public:
	VCS();
	void generateKunci();
	string getPlain();
	string getKunci();
	string getCipher();
	void setPlain(string);
	void setKunci(string);
	void setCipher(string);
	string VCS_Enkripsi();

};

