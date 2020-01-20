#include <iostream>

#include "LoudMessage.h"

using namespace std;

LoudMessage::LoudMessage()
{
}

LoudMessage::~LoudMessage()
{
}

std::string
LoudMessage::capitalize(std::string s)
{
	for (unsigned i = 0; i < s.size(); i++)
		s.replace(i, 1, 1, toupper(s[i]));
	return s;
}
void
LoudMessage::setMessage(string s)
{
	_loudMessage = capitalize(s);
}

void
LoudMessage::showMessage()
// pre: setLoudMessage() has been called at least once
{
	cout << _loudMessage << endl;
}

string
LoudMessage::readMessage()
{
	string str;
	cin >> str;
	_loudMessage = capitalize(str);
	return (_loudMessage);
}