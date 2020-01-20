#include "MessageFactory.h"
#include "Message.h"

MessageFactory::MessageFactory()
{
}

MessageFactory::~MessageFactory()
{
}

IMessage*
MessageFactory::newMessage()
{
	return new Message();
}
