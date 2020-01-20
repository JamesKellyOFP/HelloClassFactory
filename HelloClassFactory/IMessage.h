// IMessage.h: interface for the Message class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(IMESSAGE_H)
#define IMESSAGE_H

#include <string>

class IMessage {
public:
	virtual void setMessage(std::string) = 0;
	virtual void showMessage() = 0;
	virtual std::string readMessage() = 0;
	virtual ~IMessage() {}
};

#endif 
