#include "PFCip.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

PFCip::PFCip() {
	plain = "null";
	kunci = "null";
	cipher = "null";
	file = "null";
}

int PFCip::getIndex(vector<char> v, int K)
{
	auto it = find(v.begin(), v.end(), K);
	if (it != v.end())
	{
		int index = it - v.begin();
		return index;
	}
	else {
		return -1;
	}
}

pair<int, int> PFCip::letakHuruf(vector<vector<char>> m, char c) {
	pair<int, int> index;
	for (int i = 0; i < m.size(); i++) {
		if (getIndex(m.at(i), c) != -1) {
			index.second = getIndex(m.at(i), c);
			index.first = i;
			return index;
		}
	}
	//Kalau characternya tidak ada
	index.second = -1;
	index.first = -1;
	return index;
}

void PFCip::PFCip_Enkripsi()
{
	string _kunci = this->getKunci();
	vector<char> v, v2;
	vector<vector<char>> v3;
	std::copy(_kunci.begin(), _kunci.end(), std::back_inserter(v));
	v2 = unique_elements(v);
	v3 = matriksKey(v2);
	string plain2 = getPlain();
	//Remove karakter non-alphabetic
	string plain = removeKarakterLain(plain2);
	for (int j = 0; j < plain.size(); j++) {
		if (plain[j] == 'J' || plain[j] == 'j')
		{
			plain.erase(j, 1);
			j--;
		}
	}
	//setting plain text nya
	int i = 0;
	while (i < plain.size()) {
		if (plain[i] == plain[i + 1]) {
			plain.insert((i + 1), 1, 'X');
		}
		i += 2;
	}
	if (plain.size() % 2 == 1) {
		plain.push_back('X');
	}
	//Proses enkripsi
	string cipher;
	int k = 0;
	while (k < plain.size()) {
		pair<int, int> huruf1, huruf2;
		huruf1 = letakHuruf(v3, plain[k]);
		huruf2 = letakHuruf(v3, plain[k + 1]);
		//Barisnya sama
		if (huruf1.first == huruf2.first) {
			huruf1.second += 1;
			huruf1.second %= 5;
			huruf2.second += 1;
			huruf2.second %= 5;
			cipher.append(1, v3.at(huruf1.first).at(huruf1.second));
			cipher.append(1, v3.at(huruf2.first).at(huruf2.second));
		}
		//Kolomnya sama
		else if (huruf1.second == huruf2.second) {
			huruf1.first += 1;
			huruf1.first %= 5;
			huruf2.first += 1;
			huruf2.first %= 5;
			cipher.append(1, v3.at(huruf1.first).at(huruf1.second));
			cipher.append(1, v3.at(huruf2.first).at(huruf2.second));
		}
		else {
			cipher.append(1, v3.at(huruf1.first).at(huruf2.second));
			cipher.append(1, v3.at(huruf2.first).at(huruf1.second));
		}
		k += 2;
	}
	string temp = filterOutput(cipher, 5);
	setCipher(temp);
}

void PFCip::PFCip_Enkripsi_File()
{
	string cipher = getCipher();
	setFile(cipher);
}

void PFCip::PFCip_Dekripsi() {
	string _kunci = this->getKunci();
	vector<char> v, v2;
	vector<vector<char>> v3;
	std::copy(_kunci.begin(), _kunci.end(), std::back_inserter(v));
	v2 = unique_elements(v);
	v3 = matriksKey(v2);
	string cipher = getCipher();
	//Remove karakter non-alphabetic
	cipher = removeKarakterLain(cipher);
	for (int j = 0; j < cipher.size(); j++) {
		if (cipher[j] == 'J' || cipher[j] == 'j')
		{
			cipher.erase(j, 1);
			j--;
		}
	}
	//Proses dekripsi
	string plain;
	int k = 0;
	while (k < cipher.size()) {
		pair<int, int> huruf1, huruf2;
		huruf1 = letakHuruf(v3, cipher[k]);
		huruf2 = letakHuruf(v3, cipher[k + 1]);
		//Barisnya sama
		if (huruf1.first == huruf2.first) {
			if ((huruf1.second) - 1 < 0) {
				huruf1.second += 5;
			}
			huruf1.second -= 1;
			if ((huruf2.second) - 1 < 0) {
				huruf2.second += 5;
			}
			huruf2.second -= 1;
			plain.append(1, v3.at(huruf1.first).at(huruf1.second));
			plain.append(1, v3.at(huruf2.first).at(huruf2.second));
		}
		//Kolomnya sama
		else if (huruf1.second == huruf2.second) {
			if ((huruf1.first) - 1 < 0) {
				huruf1.first += 5;
			}
			huruf1.first -= 1;
			if ((huruf2.first) - 1 < 0) {
				huruf2.first += 5;
			}
			huruf2.first -= 1;
			plain.append(1, v3.at(huruf1.first).at(huruf1.second));
			plain.append(1, v3.at(huruf2.first).at(huruf2.second));
		}
		else {
			plain.append(1, v3.at(huruf1.first).at(huruf2.second));
			plain.append(1, v3.at(huruf2.first).at(huruf1.second));
		}
		k += 2;
	}
	//setting plain text nya
	for (int i = 0; i < plain.size(); i++) {
		if (plain[i] == 'X' || plain[i] == 'x')
		{
			plain.erase(i, 1);
			i--;
		}
	}
	setPlain(plain);
}

void PFCip::PFCip_Dekripsi_File() {
	string plain = getPlain();
	setFile(plain);
}

vector<char> PFCip::unique_elements(vector<char>& vec)
{
	vector<char> vec2;
	map<char, int> m;
	for (auto p = vec.begin(); p != vec.end(); ++p) {
		if (*p != 'J' && *p >= 'A' && *p <= 'Z') {
			m[*p]++;
		}
		if (m[*p] > 0 && m[*p] < 2) {
			vec2.push_back(*p);
		}
	}
	for (char i = 'A'; i <= 'Z'; i++) {
		if (i != 'J' && m[i] == 0) {
			vec2.push_back(i);
		}
	}
	return vec2;
}

vector<vector<char>> PFCip::matriksKey(vector<char> kunci) {
	vector<vector<char>> m;
	for (int i = 0; i < 25; i++) {
		if (i % 5 == 0) {
			m.push_back(vector<char>());
		}
		m.at(round(i / 5)).push_back(kunci.at(i));
	}
	return m;
}

vector<vector<char>> PFCip::generateKunci(string _kunci)
{
	vector<char> v, v2;
	vector<vector<char>> v3;
	std::copy(_kunci.begin(), _kunci.end(), std::back_inserter(v));
	v2 = unique_elements(v);
	return matriksKey(v2);
}

string PFCip::getPlain() { return this->plain; }
string PFCip::getKunci() { return this->kunci; }
string PFCip::getCipher() { return this->cipher; }
string PFCip::getFile() { return this->file; }

void PFCip::setPlain(string _plain) { this->plain = _plain; }
void PFCip::setKunci(string _kunci) { this->kunci = removeKarakterLain(_kunci); }
void PFCip::setCipher(string _cipher) { this->cipher = _cipher; }
void PFCip::setFile(string _file) { this->file = _file; }