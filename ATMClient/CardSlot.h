#ifndef CARD_SLOT_H_
#define CARD_SLOT_H_
class CardSlot{
private:
	size_t cardNumber;
public:
	size_t getCardNumber();
	void insert(char*);
	void eject();
};
#endif