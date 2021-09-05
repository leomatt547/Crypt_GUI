#pragma once
#include <string>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include "Backend.h"

using namespace std;

class HCip
{
private:
	string plain;
	string kunci;
	string cipher;
	string file;

public:
	HCip();
	vector<int> kaliMatEnkripsi(vector<vector<int>>, vector<int>);
	vector<vector<int>> generateKunci(string);
	string getPlain();
	string getKunci();
	string getCipher();
	string getFile();
	void setPlain(string);
	void setKunci(string);
	void setCipher(string);
	void setFile(string);
	void HCip_Enkripsi();
	void HCip_Enkripsi_File();
	void HCip_Dekripsi();
	void HCip_Dekripsi_File();
	vector<vector<int>> generateInvers(vector<vector<int>>);
};