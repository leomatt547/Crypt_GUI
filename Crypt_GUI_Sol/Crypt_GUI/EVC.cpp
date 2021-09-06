#include "EVC.h"
#include <iostream>
#include <string>

using namespace std;

EVC::EVC() {
	plain = "null";
	kunci = "null";
	cipher = "null";
	file = "null";
}

void EVC::EVC_Enkripsi()
{
	string plain2 = getPlain();
	//Menyelaraskan kunci dengan panjang Plain text
	string kunci = generateKunci(plain, this->getKunci());
	string tampungan2 = "";
	for (int i = 0; i < (int)plain.size(); i++) {
		int p = charToIntEVC(plain[i]);
		int k = charToIntEVC(kunci[i]);
		int c = (p + k) % 256;
		char cnya = intToCharEVC(c);
		tampungan2.push_back(cnya);
	}
	//string temp = filterOutput(tampungan2, 5);
	setCipher(tampungan2);
}

void EVC::EVC_Enkripsi_File()
{
	string cipher = getCipher();
	setFile(cipher);
}

void EVC::EVC_Dekripsi() {
	string cipher2 = getCipher();
	//Menyelaraskan kunci dengan panjang Plain text
	string kunci = generateKunci(cipher, this->getKunci());
	string tampungan2 = "";
	for (int i = 0; i < (int)cipher.size(); i++) {
		int c = charToIntEVC(cipher[i]);
		int k = charToIntEVC(kunci[i]);
		if (c - k < 0) {
			c += 256;
		}
		int p = (c - k) % 256;
		char pnya = intToCharEVC(p);
		tampungan2.push_back(pnya);
	}
	setPlain(tampungan2);
}

void EVC::EVC_Dekripsi_File() {
	string plain = getPlain();
	setFile(plain);
}


string EVC::generateKunci(string _plain, string _kunci)
{
	string tampungan;
	int jumlahPlain = (int)_plain.size();
	int jumlahKunci = (int)_kunci.size();
	int faktor = ceil(jumlahPlain / jumlahKunci);
	for (int i = 0; i <= faktor; i++) {
		tampungan += kunci;
	}
	tampungan.resize(jumlahPlain);
	return tampungan;
}

string EVC::getPlain() { return this->plain; }
string EVC::getKunci() { return this->kunci; }
string EVC::getCipher() { return this->cipher; }
string EVC::getFile() { return this->file; }

void EVC::setPlain(string _plain) { this->plain = _plain; }
void EVC::setKunci(string _kunci) { this->kunci = _kunci; }
void EVC::setCipher(string _cipher) { this->cipher = _cipher; }
void EVC::setFile(string _file) { this->file = _file; }