#include "FVC.h"
#include <iostream>
#include <string>

using namespace std;

FVC::FVC() {
	plain = "null";
	kunci = "null";
	cipher = "null";
	file = "null";
}

void FVC::FVC_Enkripsi()
{
	string plain2 = getPlain();
	//Remove karakter non-alphabetic
	string plain = removeKarakterLain(plain2);
	//Menyelaraskan kunci dengan panjang Plain text
	string kunci = generateKunci(plain, this->getKunci());
	string tampungan2 = "";
	for (int i = 0; i < (int)plain.size(); i++) {
		int p = charToInt(plain[i], false);
		int k = charToInt(kunci[i], false);
		int c = (p + k) % 26;
		char cnya = intToChar(c,false);
		tampungan2.push_back(cnya);
	}
	string temp = filterOutput(tampungan2, 5);
	setCipher(temp);
}

void FVC::FVC_Enkripsi_File()
{
	string cipher = getCipher();
	setFile(cipher);
}

void FVC::FVC_Dekripsi() {
	string cipher2 = getCipher();
	//Remove karakter non-alphabetic
	string cipher = removeKarakterLain(cipher2);
	//Menyelaraskan kunci dengan panjang Plain text
	string kunci = generateKunci(cipher, this->getKunci());
	string tampungan2 = "";
	for (int i = 0; i < (int)cipher.size(); i++) {
		int c = charToInt(cipher[i],false);
		int k = charToInt(kunci[i],false);
		if (c - k < 0) {
			c += 26;
		}
		int p = (c - k) % 26;
		//setCipherFile(static_cast<string>(to_string(p)));
		char pnya = intToChar(p,false);
		tampungan2.push_back(pnya);
	}
	setPlain(tampungan2);
}

void FVC::FVC_Dekripsi_File() {
	string plain = getPlain();
	setFile(plain);
}


string FVC::generateKunci(string _plain, string _kunci)
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

string FVC::getPlain() { return this->plain; }
string FVC::getKunci() { return this->kunci; }
string FVC::getCipher() { return this->cipher; }
string FVC::getFile() { return this->file; }

void FVC::setPlain(string _plain) { this->plain = _plain; }
void FVC::setKunci(string _kunci) { this->kunci = _kunci; }
void FVC::setCipher(string _cipher) { this->cipher = _cipher; }
void FVC::setFile(string _file) { this->file = _file; }

