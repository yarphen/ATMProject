#ifndef BANK_SECURE_CLIENT_H_
#define BANK_SECURE_CLIENT_H_
class BankSecureClient{
private:
	const char const * HOST = "127.0.0.1";
	const char const * PORT = "5050";
public:
	char * process(char * message);
};
#endif