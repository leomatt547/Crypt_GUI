#pragma once
#include <string>
#include "Backend.h"
#include <vector>

using namespace std;

class PFCip
{
private:
	string plain;
	string kunci;
	string cipher;
	string file;

public:
	PFCip();
	vector<vector<char>> generateKunci(string);
	string getPlain();
	string getKunci();
	string getCipher();
	string getFile();
	void setPlain(string);
	void setKunci(string);
	void setCipher(string);
	void setFile(string);
	void PFCip_Enkripsi();
	void PFCip_Enkripsi_File();
	void PFCip_Dekripsi();
	void PFCip_Dekripsi_File();
	vector<char> unique_elements(vector<char>&);
	vector<vector<char>> matriksKey(vector<char>);
	int getIndex(vector<char>, int);
	pair<int, int> letakHuruf(vector<vector<char>>, char);
};