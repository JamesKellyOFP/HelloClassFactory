#include <iostream>

#include "SecureMessage.h"
#include "Encryptor.h"

using namespace std;

SecureMessage::SecureMessage() : 
_encryptor(new Encryptor())
{
}

SecureMessage::~SecureMessage()
{
}

void
SecureMessage::setMessage(string s)
{
	_encryptor->encrypt(s);
	_message = s;
}

void
SecureMessage::showMessage()
//pre: setMessage() has been called at least once.
{
	string str = _message;
	_encryptor->decrypt(str);
	cout << str << endl;
}

string
SecureMessage::readMessage()
{
	string str;
	cin >> str;
	_encryptor->encrypt(str);
	return (str);
}
