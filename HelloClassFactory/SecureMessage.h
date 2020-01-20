#if !defined(SECURE_MESSAGE_H)
#define SECURE_MESSAGE_H

#include "IMessage.h"
class Encryptor;

class SecureMessage : public IMessage
{
public:
	SecureMessage();
	virtual void setMessage(std::string);
	virtual void showMessage();
	virtual std::string readMessage();
	virtual ~SecureMessage();

private:
	std::string _message;
	Encryptor* _encryptor;
};

#endif
