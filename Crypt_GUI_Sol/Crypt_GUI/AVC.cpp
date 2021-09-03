#include "AVC.h"
#include <iostream>
#include <string>

using namespace std;

AVC::AVC() {
	plain = "null";
	kunci = "null";
	cipher = "null";
	file = "null";
}

void AVC::AVC_Enkripsi()
{
	string plain2 = getPlain();
	//Remove karakter non-alphabetic
	string plain = removeKarakterLain(plain2);
	//Menyelaraskan kunci dengan panjang Plain text
	string kunci = generateKunci(plain, this->getKunci());
	string tampungan2 = "";
	for (int i = 0; i < (int)plain.size(); i++) {
		int p = charToInt(plain[i], true);
		int k = charToInt(kunci[i], true);
		int c = (p + k) % 26;
		char cnya = intToChar(c, true);
		tampungan2.push_back(cnya);
	}
	string temp = filterOutput(tampungan2, 5);
	setCipher(temp);
}

void AVC::AVC_Enkripsi_File()
{
	string cipher = getCipher();
	setFile(cipher);
}

void AVC::AVC_Dekripsi() {
	string cipher2 = getCipher();
	//Remove karakter non-alphabetic
	string cipher = removeKarakterLain(cipher2);
	//Menyelaraskan kunci dengan panjang Plain text
	string kunci = generateKunci(cipher, this->getKunci());
	string tampungan2 = "";
	for (int i = 0; i < (int)cipher.size(); i++) {
		int c = charToInt(cipher[i], true);
		int k = charToInt(kunci[i], true);
		if (c - k < 0) {
			c += 26;
		}
		int p = (c - k) % 26;
		char pnya = intToChar(p, true);
		tampungan2.push_back(pnya);
	}
	setPlain(tampungan2);
}

void AVC::AVC_Dekripsi_File() {
	string plain = getPlain();
	setFile(plain);
}


string AVC::generateKunci(string _plain, string _kunci)
{
	string tampungan;
	tampungan += _kunci;
	tampungan += removeKarakterLain(_plain);
	tampungan.resize((int) _plain.size());
	return tampungan;
}

string AVC::getPlain() { return this->plain; }
string AVC::getKunci() { return this->kunci; }
string AVC::getCipher() { return this->cipher; }
string AVC::getFile() { return this->file; }

void AVC::setPlain(string _plain) { this->plain = _plain; }
void AVC::setKunci(string _kunci) { this->kunci = _kunci; }
void AVC::setCipher(string _cipher) { this->cipher = _cipher; }
void AVC::setFile(string _file) { this->file = _file; }