#include "LoudMessageFactory.h"
#include "LoudMessage.h"

LoudMessageFactory::LoudMessageFactory()
{
}

LoudMessageFactory::~LoudMessageFactory()
{
}

IMessage*
LoudMessageFactory::newMessage()
{
	return new LoudMessage();
}
