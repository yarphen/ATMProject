#ifndef WITHDRAWING_H_
#define WITHDRAWING_H_
#include "Transaction.h"
class Withdrawing: public Transaction{
private:
	size_t amount;
public:
	Withdrawing(ATM * atm, size_t number, size_t amount);
	void execute();
};
#endif