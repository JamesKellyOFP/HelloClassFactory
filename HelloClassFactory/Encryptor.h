#ifndef ENCRYPTOR_H
#define ENCRYPTOR_H

class Encryptor {
public:
	Encryptor();
	virtual ~Encryptor();
	virtual void encrypt(std::string&);
	virtual void decrypt(std::string&);

};

#endif