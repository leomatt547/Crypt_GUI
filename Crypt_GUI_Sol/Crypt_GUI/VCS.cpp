#include "VCS.h"
#include <iostream>
#include <string>

using namespace std;

VCS::VCS(){
	plain = "null";
	kunci = "null";
	cipher = "null";
}

string VCS::VCS_Enkripsi()
{
	return string();
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

