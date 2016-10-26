#ifndef ATM_H_
#define ATM_H_
#include "UserInterface.h"
#include "BankSecureClient.h"
#include "CardSlot.h"
#include "Dispenser.h"
class ATM{
private:
	UserInterface * ui;
	BankSecureClient * client;
	CardSlot * slot;
	Dispenser * dispenser;
public:
	BankSecureClient * getClient();
	CardSlot * getSlot();
	Dispenser * getDispenser();
	UserInterface * getUI();
};
#endif