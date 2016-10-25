#ifndef ATM_H_
#define ATM_H_
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
