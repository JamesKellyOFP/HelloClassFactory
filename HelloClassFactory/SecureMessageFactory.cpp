#include "SecureMessageFactory.h"
#include "SecureMessage.h"

SecureMessageFactory::SecureMessageFactory()
{
}

SecureMessageFactory::~SecureMessageFactory()
{
}

IMessage*
SecureMessageFactory::newMessage()
{
	return new SecureMessage();
}
