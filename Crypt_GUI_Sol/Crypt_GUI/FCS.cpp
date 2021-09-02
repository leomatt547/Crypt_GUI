#include "FCS.h"
#include <iostream>
#include <string>

using namespace std;

FCS::FCS() {
	plain = "null";
	kunci = "null";
	cipher = "null";
	file = "null";
}

void FCS::FCS_Enkripsi()
{
	string plain2 = getPlain();
	//Remove karakter non-alphabetic
	string plain = removeKarakterLain(plain2);
	//Menyelaraskan kunci dengan panjang Plain text
	string kunci = generateKunci(plain, this->getKunci());
	string tampungan2 = "";
	for (int i = 0; i < (int)plain.size(); i++) {
		int p = charToInt(plain[i]);
		int k = charToInt(kunci[i]);
		int c = (p + k) % 26;
		char cnya = intToChar(c);
		tampungan2.push_back(cnya);
	}
	string temp = filterOutput(tampungan2, 5);
	setCipher(temp);
}

void FCS::FCS_Enkripsi_File()
{
	/*string plain2 = getPlain();
	//Menyelaraskan kunci dengan panjang Plain text
	string kunci = generateKunci(plain, this->getKunci());
	string tampungan2 = "";
	/for (int i = 0; i < (int)plain.size(); i++) {
		if (plain[i] >= 'A' && plain[i] <= 'Z') {
			int p = charToInt(plain[i]);
			int k = charToInt(kunci[i]);
			int c = (p + k) % 26;
			char cnya = intToChar(c);
			tampungan2.push_back(toupper(cnya));
		}
		else {
			tampungan2.push_back(plain[i]);
		}
	}*/
	string cipher = getCipher();
	setFile(cipher);
	//setFile(tampungan2);
}

void FCS::FCS_Dekripsi() {
	string cipher2 = getCipher();
	//Remove karakter non-alphabetic
	string cipher = removeKarakterLain(cipher2);
	//Menyelaraskan kunci dengan panjang Plain text
	string kunci = generateKunci(cipher, this->getKunci());
	string tampungan2 = "";
	for (int i = 0; i < (int)cipher.size(); i++) {
		int c = charToInt(cipher[i]);
		int k = charToInt(kunci[i]);
		if (c - k < 0) {
			c += 26;
		}
		int p = (c - k) % 26;
		//setCipherFile(static_cast<string>(to_string(p)));
		char pnya = intToChar(p);
		tampungan2.push_back(pnya);
	}
	setPlain(tampungan2);
}

void FCS::FCS_Dekripsi_File() {
	/*
	string cipher2 = getCipher();
	//Remove karakter non-alphabetic
	string cipher = removeKarakterLain(cipher2);
	//Menyelaraskan kunci dengan panjang Plain text
	string kunci = generateKunci(cipher, this->getKunci());
	string tampungan2 = "";
	for (int i = 0; i < (int)cipher.size(); i++) {
		int c = charToInt(cipher[i]);
		int k = charToInt(kunci[i]);
		if (c - k < 0) {
			c += 26;
		}
		int p = (c - k) % 26;
		//setCipherFile(static_cast<string>(to_string(p)));
		char pnya = intToChar(p);
		tampungan2.push_back(pnya);
	}
	setFile(tampungan2);
	*/
	string plain = getPlain();
	setFile(plain);
}


string FCS::generateKunci(string _plain, string _kunci)
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

string FCS::getPlain() { return this->plain; }
string FCS::getKunci() { return this->kunci; }
string FCS::getCipher() { return this->cipher; }
string FCS::getFile() { return this->file; }

void FCS::setPlain(string _plain) { this->plain = _plain; }
void FCS::setKunci(string _kunci) { this->kunci = _kunci; }
void FCS::setCipher(string _cipher) { this->cipher = _cipher; }
void FCS::setFile(string _file) { this->file = _file; }

