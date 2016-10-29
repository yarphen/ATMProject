#ifndef PIN_CHANGE_H_
#define PIN_CHANGE_H_
#include "Transaction.h"
class PinChange: public Transaction{
private:
	int newPin;
	int newPinConfirmation;
public:
	void execute();
};
#endif