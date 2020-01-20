#include <string>
#include "Name.h"
#include "IMessage.h"
#include "IMessageFactory.h"

using namespace std;

Name::Name(IMessageFactory* f)
{
	_textout = f->newMessage();
	_textin = f->newMessage();
}

Name::~Name()
{
	delete _textout; // guideline: creator should delete
	delete _textin;
}

string
Name::firstName()
{
	_textout->setMessage("Enter your first name: ");
	_textout->showMessage();
	return (_textin->readMessage());
}

string
Name::lastName()
{
	_textout->setMessage("Enter your last name: ");
	_textout->showMessage();
	return (_textin->readMessage());
}
