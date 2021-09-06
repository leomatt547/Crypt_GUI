#include "VCS.h"
#include <iostream>
#include <string>

using namespace std;

VCS::VCS(){
	plain = "null";
	kunci = "null";
	cipher = "null";
	file = "null";
}

void VCS::VCS_Enkripsi()
{
	string plain2 = getPlain();
	//Remove karakter non-alphabetic
	string plain = removeKarakterLain(plain2);
	//Menyelaraskan kunci dengan panjang Plain text
	string kunci = generateKunci(plain, this->getKunci());
	string tampungan2 = "";
	for (int i = 0; i < (int) plain.size(); i++) {
		int p = charToInt(plain[i], true);
		int k = charToInt(kunci[i], true);
		int c = (p + k) % 26;
		char cnya = intToChar(c, true);
		tampungan2.push_back(cnya);
	}
	string temp = filterOutput(tampungan2, 5);
	setCipher(temp);
}

void VCS::VCS_Enkripsi_File()
{
	string cipher = getCipher();
	setFile(cipher);
	//setFile(tampungan2);
}

void VCS::VCS_Dekripsi() {
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

void VCS::VCS_Dekripsi_File() {
	string plain = getPlain();
	setFile(plain);
}


string VCS::generateKunci(string _plain, string _kunci)
{
	string tampungan;
	int jumlahPlain = (int) _plain.size();
	int jumlahKunci = (int) _kunci.size();
	int faktor = ceil(jumlahPlain / jumlahKunci);
	for (int i = 0; i <= faktor; i++) {
		tampungan += kunci;
	}
	tampungan.resize(jumlahPlain);
	return tampungan;
}

string VCS::getPlain(){return this->plain;}
string VCS::getKunci() { return this->kunci; }
string VCS::getCipher() { return this->cipher; }
string VCS::getFile() { return this->file; }

void VCS::setPlain(string _plain){this->plain = _plain;}
void VCS::setKunci(string _kunci) { this->kunci = removeKarakterLain(_kunci); }
void VCS::setCipher(string _cipher) { this->cipher = _cipher; }
void VCS::setFile(string _file) { this->file = _file; }