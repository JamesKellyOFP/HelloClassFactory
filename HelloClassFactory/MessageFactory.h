#if !defined(MESSAGE_FACTORY_H)
#define MESSAGE_FACTORY_H

#include "IMessageFactory.h"

class MessageFactory : public IMessageFactory  
{
public:
	MessageFactory();
	virtual IMessage* newMessage();
	virtual ~MessageFactory();
};

#endif
