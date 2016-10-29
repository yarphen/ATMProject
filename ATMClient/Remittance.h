#ifndef REMITTANCE_H_
#define REMITTANCE_H_
#include "Transaction.h"
class Remittance: public Transaction{
private:
	double amount;
	size_t target;
public:
	void execute();
};
#endif