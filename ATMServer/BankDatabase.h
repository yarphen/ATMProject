#ifndef BANK_DATABASE_H_
#define BANK_DATABASE_H_
class BankDatabase{
	BankCard * getCard(size_t number);
	void saveCard(const BankCard & card);
};
#endif