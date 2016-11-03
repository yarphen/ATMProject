#include "Withdrawing.h"
#include "Exceptions.h"
Withdrawing::Withdrawing(ATM * atm, size_t number, size_t _amount):
Transaction(atm,number),amount(_amount){}

void Withdrawing::execute(){
	try{
		if (_atm->getDispenser()->getBalance()>amount){
			_atm->getClient()->process("");//request
		}else{
			throw NoCacheLeft();
		}
	}catch(NoCacheLeft e){
		_atm->getUI()->output("Error: there is not enough cache in the ATM.");
	}catch(NotEnoughMoney e){
		_atm->getUI()->output("Error: You've tried to withdraw more money than you have.");
	}catch(WrongPIN e){
		_atm->getUI()->output("Error: you've input invalid PIN.");
	}catch(CannotConnect e){
		_atm->getUI()->output("Error: check your connection with the server.");
	}catch(ErrorOnReceive e){
		_atm->getUI()->output("Error: something went wrong on receiving data.");
	}
}