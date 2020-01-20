#include <string>
#include "Encryptor.h"

Encryptor::Encryptor(void) {
}

Encryptor::~Encryptor(void) {
}

void Encryptor::encrypt(std::string& word) {
	for (unsigned i=0; i<word.size(); i++) {
		switch (word[i]) {
			case 'a':
				word.replace (i, 1, 1, '9');
				break;
			case 'e':
				word.replace (i, 1, 1, '8');
				break;
			case 'i':
				word.replace (i, 1, 1, '1');
				break;
			case 'o':
				word.replace (i, 1, 1, '0');
				break;
			case 'u':
				word.replace (i, 1, 1, '2');
				break;
			default:
				break;
		}
	}
}
	
void Encryptor::decrypt(std::string& word) {
	for (unsigned i=0; i<word.size(); i++) {
		switch (word[i]) {
			case '9':
				word.replace (i, 1, 1, 'a');
				break;
			case '8':
				word.replace (i, 1, 1, 'e');
				break;
			case '1':
				word.replace (i, 1, 1, 'i');
				break;
			case '0':
				word.replace (i, 1, 1, 'o');
				break;
			case '2':
				word.replace (i, 1, 1, 'u');
				break;
			default:
				break;
		}
	}
}
