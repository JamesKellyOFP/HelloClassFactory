#include <iostream>

#include "Message.h"
#include "Encryptor.h"

using namespace std;

Message::Message()
{
}

Message::~Message()
{
}

void
Message::setMessage(string s)
{
	_message = s;
}

void
Message::showMessage()
// pre: setMessage() has been called at least once
{
	cout << _message << endl;
}

string
Message::readMessage()
{
	string str;
	cin >> str;
	return (str);
}
