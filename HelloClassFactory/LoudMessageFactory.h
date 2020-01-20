#if !defined(LOUD_MESSAGE_FACTORY_H)
#define LOUD_MESSAGE_FACTORY_H

#include "IMessageFactory.h"

class LoudMessageFactory : public IMessageFactory
{
public:
	LoudMessageFactory();
	virtual IMessage* newMessage();
	virtual ~LoudMessageFactory();
};

#endif
