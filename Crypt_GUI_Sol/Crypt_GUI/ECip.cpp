#include "ECip.h"
#include <iostream>

using namespace std;

ECip::ECip() {
	plain = "null";
	kunci = "null";
	cipher = "null";
	file = "null";
	m1.insert({ 'A',5 });
	m1.insert({ 'B',12 });
	m1.insert({ 'C',19 });
	m1.insert({ 'D',6 });
	m1.insert({ 'E',10 });
	m1.insert({ 'F',26 });
	m1.insert({ 'G',22 });
	m1.insert({ 'H',9 });
	m1.insert({ 'I',16 });
	m1.insert({ 'J',11 });
	m1.insert({ 'K',17 });
	m1.insert({ 'L',13 });
	m1.insert({ 'M',3 });
	m1.insert({ 'N',7 });
	m1.insert({ 'O',24 });
	m1.insert({ 'P',21 });
	m1.insert({ 'Q',4 });
	m1.insert({ 'R',23 });
	m1.insert({ 'S',18 });
	m1.insert({ 'T',1 });
	m1.insert({ 'U',20 });
	m1.insert({ 'V',25 });
	m1.insert({ 'W',15 });
	m1.insert({ 'X',2 });
	m1.insert({ 'Y',8 });
	m1.insert({ 'Z',14 });
	m2.insert({ 18,2 });
	m2.insert({ 14,16 });
	m2.insert({ 23,15 });
	m2.insert({ 13,20 });
	m2.insert({ 21,13 });
	m2.insert({ 25,3 });
	m2.insert({ 5,4 });
	m2.insert({ 22,1 });
	m2.insert({ 24,26 });
	m2.insert({ 10,25 });
	m2.insert({ 19,18 });
	m2.insert({ 8,5 });
	m2.insert({ 7,17 });
	m2.insert({ 11,6 });
	m2.insert({ 17,12 });
	m2.insert({ 20,24 });
	m2.insert({ 4,21 });
	m2.insert({ 6,14 });
	m2.insert({ 1,11 });
	m2.insert({ 12,9 });
	m2.insert({ 26,7 });
	m2.insert({ 9,19 });
	m2.insert({ 16,10 });
	m2.insert({ 15,8 });
	m2.insert({ 2,23 });
	m2.insert({ 3,22 });
	m3.insert({ 4,25 });
	m3.insert({ 25,20 });
	m3.insert({ 9,4 });
	m3.insert({ 15,24 });
	m3.insert({ 11,9 });
	m3.insert({ 12,26 });
	m3.insert({ 7,1 });
	m3.insert({ 23,19 });
	m3.insert({ 3,6 });
	m3.insert({ 14,5 });
	m3.insert({ 18,14 });
	m3.insert({ 19,8 });
	m3.insert({ 22,16 });
	m3.insert({ 17,11 });
	m3.insert({ 10,2 });
	m3.insert({ 20,23 });
	m3.insert({ 24,10 });
	m3.insert({ 21,7 });
	m3.insert({ 2,18 });
	m3.insert({ 5,17 });
	m3.insert({ 26,15 });
	m3.insert({ 16,21 });
	m3.insert({ 13,3 });
	m3.insert({ 1,12 });
	m3.insert({ 6,22 });
	m3.insert({ 8,13 });
	m4.insert({ 18,7 });
	m4.insert({ 11,26 });
	m4.insert({ 15,18 });
	m4.insert({ 23,21 });
	m4.insert({ 14,6 });
	m4.insert({ 26,14 });
	m4.insert({ 19,23 });
	m4.insert({ 22,25 });
	m4.insert({ 25,15 });
	m4.insert({ 6,10 });
	m4.insert({ 2,12 });
	m4.insert({ 16,9 });
	m4.insert({ 17,19 });
	m4.insert({ 12,13 });
	m4.insert({ 5,17 });
	m4.insert({ 20,8 });
	m4.insert({ 3,24 });
	m4.insert({ 21,4 });
	m4.insert({ 10,20 });
	m4.insert({ 13,22 });
	m4.insert({ 4,11 });
	m4.insert({ 24,2 });
	m4.insert({ 7,1 });
	m4.insert({ 8,3 });
	m4.insert({ 9,16 });
	m4.insert({ 1,5 });
	m5.insert({ 17,13 });
	m5.insert({ 25,10 });
	m5.insert({ 18,23 });
	m5.insert({ 24,21 });
	m5.insert({ 11,4 });
	m5.insert({ 9,25 });
	m5.insert({ 23,1 });
	m5.insert({ 22,6 });
	m5.insert({ 26,14 });
	m5.insert({ 8,26 });
	m5.insert({ 13,8 });
	m5.insert({ 15,3 });
	m5.insert({ 2,16 });
	m5.insert({ 1,12 });
	m5.insert({ 5,18 });
	m5.insert({ 4,17 });
	m5.insert({ 12,19 });
	m5.insert({ 3,7 });
	m5.insert({ 20,24 });
	m5.insert({ 21,2 });
	m5.insert({ 6,5 });
	m5.insert({ 7,20 });
	m5.insert({ 16,15 });
	m5.insert({ 10,11 });
	m5.insert({ 14,22 });
	m5.insert({ 19,9 });
	m6.insert({ 23,24 });
	m6.insert({ 25,23 });
	m6.insert({ 7,21 });
	m6.insert({ 9,25 });
	m6.insert({ 10,17 });
	m6.insert({ 26,19 });
	m6.insert({ 14,4 });
	m6.insert({ 15,12 });
	m6.insert({ 8,5 });
	m6.insert({ 12,11 });
	m6.insert({ 4,10 });
	m6.insert({ 19,20 });
	m6.insert({ 11,26 });
	m6.insert({ 1,2 });
	m6.insert({ 22,22 });
	m6.insert({ 16,15 });
	m6.insert({ 20,18 });
	m6.insert({ 5,9 });
	m6.insert({ 3,7 });
	m6.insert({ 17,8 });
	m6.insert({ 18,1 });
	m6.insert({ 13,3 });
	m6.insert({ 2,13 });
	m6.insert({ 24,16 });
	m6.insert({ 21,6 });
	m6.insert({ 6,14 });
	m7.insert({ 24,'A' });
	m7.insert({ 25,'B' });
	m7.insert({ 21,'C' });
	m7.insert({ 23,'D' });
	m7.insert({ 17,'E' });
	m7.insert({ 19,'F' });
	m7.insert({ 4,'G' });
	m7.insert({ 12,'H' });
	m7.insert({ 5,'I' });
	m7.insert({ 11,'J' });
	m7.insert({ 10,'K' });
	m7.insert({ 20,'L' });
	m7.insert({ 26,'M' });
	m7.insert({ 2,'N' });
	m7.insert({ 22,'O' });
	m7.insert({ 15,'P' });
	m7.insert({ 18,'Q' });
	m7.insert({ 9,'R' });
	m7.insert({ 7,'S' });
	m7.insert({ 8,'T' });
	m7.insert({ 1,'U' });
	m7.insert({ 3,'V' });
	m7.insert({ 13,'W' });
	m7.insert({ 16,'X' });
	m7.insert({ 6,'Y' });
	m7.insert({ 14,'Z' });
}

char ECip::ptoc(char karakter) {
	for (auto itr = m1.find(karakter); itr != m1.end(); itr++) {
		for (auto itr2 = m2.find(itr->second); itr2 != m2.end(); itr2++) {
			for (auto itr3 = m3.find(itr2->second); itr3 != m3.end(); itr3++) {
				for (auto itr4 = m4.find(itr3->second); itr4 != m4.end(); itr4++) {
					for (auto itr5 = m5.find(itr4->second); itr5 != m5.end(); itr5++) {
						for (auto itr6 = m6.find(itr5->second); itr6 != m6.end(); itr6++) {
							for (auto itr7 = m7.find(itr6->second); itr7 != m7.end(); itr7++) {
								return itr7->second;
							}
						}
					}
				}
			}
		}
	}
}

char ECip::ctop(char karakter) {
	for (auto& it7 : m7) {
		if (it7.second == karakter) {
			for (auto& it6 : m6) {
				if (it6.second == it7.first) {
					for (auto& it5 : m5) {
						if (it5.second == it6.first) {
							for (auto& it4 : m4) {
								if (it4.second == it5.first) {
									for (auto& it3 : m3) {
										if (it3.second == it4.first) {
											for (auto& it2 : m2) {
												if (it2.second == it3.first) {
													for (auto& it1 : m1) {
														if (it1.second == it2.first) {
															return it1.first;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void ECip::ECip_Enkripsi()
{
	string plain2 = getPlain();
	//Remove karakter non-alphabetic
	string plain = removeKarakterLain(plain2);
	//Proses enkripsi
	string cipher;
	for (unsigned int i = 0; i < plain.size(); i++) {
		cipher.push_back(ptoc(plain[i]));
	}
	string temp = filterOutput(cipher, 5);
	setCipher(temp);
}

void ECip::ECip_Enkripsi_File()
{
	string cipher = getCipher();
	setFile(cipher);
}

void ECip::ECip_Dekripsi() {
	string _kunci = this->getKunci();
	string cipher = getCipher();
	//Remove karakter non-alphabetic
	cipher = removeKarakterLain(cipher);
	//Proses dekripsi
	string plain;
	for (unsigned int i = 0; i < cipher.size(); i++) {
		plain.push_back(ctop(cipher[i]));
	}
	setPlain(plain);
}

void ECip::ECip_Dekripsi_File() {
	string plain = getPlain();
	setFile(plain);
}

string ECip::getPlain() { return this->plain; }
string ECip::getKunci() { return this->kunci; }
string ECip::getCipher() { return this->cipher; }
string ECip::getFile() { return this->file; }

void ECip::setPlain(string _plain) { this->plain = _plain; }
void ECip::setKunci(string _kunci) { this->kunci = removeKarakterLain(_kunci); }
void ECip::setCipher(string _cipher) { this->cipher = _cipher; }
void ECip::setFile(string _file) { this->file = _file; }