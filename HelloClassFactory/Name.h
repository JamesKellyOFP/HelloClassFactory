#if !defined(NAME_H)
#define NAME_H

class IMessage;
class IMessageFactory;

class Name  
{
public:
	Name(IMessageFactory* f);
	virtual std::string firstName();
	virtual std::string lastName();
	virtual ~Name();
private:
	IMessage* _textin;
	IMessage* _textout;
};

#endif
