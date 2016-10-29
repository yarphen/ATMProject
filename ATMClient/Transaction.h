#ifndef TRANSACTION_H_
#define TRANSACTION_H_
#include "ATM.h"
class Transaction{
protected:
	ATM * _atm;
	int state;
	char * msg;
	size_t cardNumber;
	int pin=-1;
	const char * toString();
public:
	Transaction(ATM *,size_t);
	void getState();
	const char * getMsg();
	void authorize(int pin);
	virtual void execute()=0;
	void cancel();
};
#endif