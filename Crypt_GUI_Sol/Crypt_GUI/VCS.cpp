#include "VCS.h"
#include <iostream>
#include <string>

using namespace std;

VCS::VCS(){
	plain = "null";
	kunci = "null";
	cipher = "null";
}

void VCS::VCS_Enkripsi()
{
	this->generateKunci();
	string plain = getPlain();
	string kunci = getKunci();
	string tampungan2 = "";
	for (int i = 0; i < (int) plain.size(); i++) {
		int p = charToInt(plain[i]);
		int k = charToInt(kunci[i]);
		int c = (p + k) % 26;
		char cnya = intToChar(c);
		tampungan2.push_back(cnya);
	}
	setCipher(tampungan2);
}

void VCS::generateKunci()
{
	string tampungan;
	int jumlahPlain = (int) this->plain.size();
	int jumlahKunci = (int) this->kunci.size();
	string tempkunci = this->kunci;
	int faktor = ceil(jumlahPlain / jumlahKunci);
	for (int i = 0; i <= faktor; i++) {
		tampungan += tempkunci;
	}
	tampungan.resize(jumlahPlain);
	setKunci(tampungan);
}

string VCS::getPlain(){return this->plain;}
string VCS::getKunci() { return this->kunci; }
string VCS::getCipher() { return this->cipher; }

void VCS::setPlain(string _plain){this->plain = _plain;}
void VCS::setKunci(string _kunci) { this->kunci = _kunci; }
void VCS::setCipher(string _cipher) { this->cipher = _cipher; }

