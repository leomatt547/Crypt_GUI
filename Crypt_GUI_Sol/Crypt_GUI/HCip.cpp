#include "HCip.h"
#include <iostream>

using namespace std;

HCip::HCip() {
	plain = "null";
	kunci = "null";
	cipher = "null";
	file = "null";
}

vector<int> HCip::kaliMatEnkripsi(vector<vector<int>> kunci, vector<int> plain) {
	vector<int> hasil(kunci.size(), 0);
	for (int i = 0; i < kunci.size(); i++) {
		for (int u = 0; u < kunci.size(); u++) {
			hasil[i] += kunci[i][u] * plain[u];
		}
		hasil[i] %= 26;
	}
	return hasil;
}

void HCip::HCip_Enkripsi()
{
	string _kunci = this->getKunci();
	vector<char> v, v2;
	vector<vector<int>> k3;
	k3 = generateKunci(_kunci);
	string plain2 = getPlain();
	//Remove karakter non-alphabetic
	string plain = removeKarakterLain(plain2);
	//Proses enkripsi
	string cipher;
	int k = 0;
	int faktor = floor(plain.size() / 3);
	int sisa = plain.size() % 3;
	for (int i = 0; i < sisa; i++) {
		plain.push_back('x');
	}
	vector<int> temp_plain;
	vector<int> result;
	while (k < plain.size()) {
		temp_plain.push_back(charToInt(plain[k], true));
		if ((k % 3 == 2) && (temp_plain.size()==3)) {
			result = kaliMatEnkripsi(k3, temp_plain);
			for (int index = 0; index < 3; index++) {
				cipher.push_back(intToChar(result[index],true));
			}
			temp_plain.clear();
			result.clear();
	}
	k++;
	}
	for (int i = 0; i < sisa; i++) {
		plain.pop_back();
	}
	string temp = filterOutput(cipher, 5);
	setCipher(temp);
}

void HCip::HCip_Enkripsi_File()
{
	string cipher = getCipher();
	setFile(cipher);
}

void HCip::HCip_Dekripsi() {
	string _kunci = this->getKunci();
	vector<char> v, v2;
	vector<vector<int>> k3, k2, k1, i1, i2, i3;
	k3 = generateKunci(_kunci);
	i3 = generateInvers(k3);
	string cipher = getCipher();
	//Remove karakter non-alphabetic
	cipher = removeKarakterLain(cipher);
	//Proses dekripsi
	string plain;
	int k = 0;
	int sisa = cipher.size() % 3;
	vector<int> temp_cipher;
	vector<int> result;
	while (k < cipher.size()) {
		temp_cipher.push_back(charToInt(cipher[k], true));
		if ((k % 3 == 2) && (temp_cipher.size() == 3)) {
			result = kaliMatEnkripsi(i3, temp_cipher);
			for (int index = 0; index < 3; index++) {
				plain.push_back(intToChar(result[index], true));
			}
			temp_cipher.clear();
			result.clear();
		}
		k++;
	}
	for (int i = plain.size()-1; i > 0; i--) {
		if (plain[i] == 'x') {
			plain.pop_back();
		}
	}
	setPlain(plain);
}

void HCip::HCip_Dekripsi_File() {
	string plain = getPlain();
	setFile(plain);
}

vector<vector<int>> HCip::generateKunci(string _kunci)
{
	return vector<vector<int>>{
		{17, 17, 5},
		{21, 18, 21},
		{2, 2, 19}
	};
}

vector<vector<int>> HCip::generateInvers(vector<vector<int>>matriks) {
	return vector<vector<int>>{
		{4,9,15},
		{15,17,6},
		{24,0,17}
	};
}

string HCip::getPlain() { return this->plain; }
string HCip::getKunci() { return this->kunci; }
string HCip::getCipher() { return this->cipher; }
string HCip::getFile() { return this->file; }

void HCip::setPlain(string _plain) { this->plain = _plain; }
void HCip::setKunci(string _kunci) { this->kunci = removeKarakterLain(_kunci); }
void HCip::setCipher(string _cipher) { this->cipher = _cipher; }
void HCip::setFile(string _file) { this->file = _file; }