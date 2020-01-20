#if !defined(SECURE_MESSAGE_FACTORY_H)
#define SECURE_MESSAGE_FACTORY_H

#include "IMessageFactory.h"

class SecureMessageFactory : public IMessageFactory  
{
public:
	SecureMessageFactory();
	virtual IMessage* newMessage();
	virtual ~SecureMessageFactory();
};

#endif
