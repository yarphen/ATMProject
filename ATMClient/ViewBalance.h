#ifndef VIEW_BALANCE_H_
#define VIEW_BALANCE_H_
#include "Transaction.h"
class ViewBalance: public Transaction{
public:
	void execute();
};
#endif