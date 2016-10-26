#ifndef DISPENSER_H_
#define DISPENSER_H_
class Dispenser{
private:
	size_t balance;
public:
	size_t getBalance();
	void giveMoney(int amount);
};
#endif