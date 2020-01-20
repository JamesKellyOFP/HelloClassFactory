
#if !defined(MESSAGE_H)
#define MESSAGE_H

#include "IMessage.h"

class Message : public IMessage
{
public:
	Message();
	virtual void setMessage(std::string);
	virtual void showMessage();
	virtual std::string readMessage();
	virtual ~Message();

private:
	std::string _message;
};

#endif
