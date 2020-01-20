#if !defined(IMESSAGE_FACTORY_H)
#define IMESSAGE_FACTORY_H

class IMessage;

class IMessageFactory  
{
public:
	virtual IMessage* newMessage() = 0;
	virtual ~IMessageFactory() {}
};

#endif
