#include "AFC.h"
#include <iostream>
#include <string>

using namespace std;

AFC::AFC() {
	plain = "null";
	kunci_m = "null";
	kunci_b = "null";
	cipher = "null";
	file = "null";
}

void AFC::AFC_Enkripsi()
{
	string plain2 = getPlain();
	//Remove karakter non-alphabetic
	string plain = removeKarakterLain(plain2);
	//Menyelaraskan kunci dengan panjang Plain text
	int m = stoi(this->getKunciM());
	int b = stoi(this->getKunciB());
	string tampungan2 = "";
	for (int i = 0; i < (int)plain.size(); i++) {
		int p = charToInt(plain[i], true);
		int c = ((m * p) + b) % 26;
		char cnya = intToChar(c, true);
		tampungan2.push_back(cnya);
	}
	string temp = filterOutput(tampungan2, 5);
	setCipher(temp);
}

void AFC::AFC_Enkripsi_File()
{
	string cipher = getCipher();
	setFile(cipher);
}

void AFC::AFC_Dekripsi() {
	int k, pengali;
	bool found = false;
	string cipher2 = getCipher();
	//Remove karakter non-alphabetic
	string cipher = removeKarakterLain(cipher2);
	//Menyelaraskan kunci dengan panjang Plain text
	int m = stoi(this->getKunciM());
	int b = stoi(this->getKunciB());
	//Menyelaraskan kunci dengan panjang Plain text
	pengali = 1;
	while (!found) {
		if ((((pengali * 26) + 1) % 26 == 1) && (((pengali * 26) + 1) % m == 0)) {
			k = ((pengali * 26) + 1) / m;
			found = true;
		}
		pengali++;
	}
	string tampungan2 = "";
	for (int i = 0; i < (int)cipher.size(); i++) {
		int c = charToInt(cipher[i], true);
		int p = ((c - b) * (k));
		if (p < 0) {
			int faktor = ((-p) / 26) + 1;
			p += faktor * 26;
		}
		p %= 26;
		char pnya = intToChar(p, true);
		tampungan2.push_back(pnya);
	}
	setPlain(tampungan2);
}

void AFC::AFC_Dekripsi_File() {
	string plain = getPlain();
	setFile(plain);
}

string AFC::getPlain() { return this->plain; }
string AFC::getKunciB() { return this->kunci_b; }
string AFC::getKunciM() { return this->kunci_m; }
string AFC::getCipher() { return this->cipher; }
string AFC::getFile() { return this->file; }

void AFC::setPlain(string _plain) { this->plain = _plain; }
void AFC::setKunciB(string _kunci) { this->kunci_b = _kunci; }
void AFC::setKunciM(string _kunci) { this->kunci_m = _kunci; }
void AFC::setCipher(string _cipher) { this->cipher = _cipher; }
void AFC::setFile(string _file) { this->file = _file; }