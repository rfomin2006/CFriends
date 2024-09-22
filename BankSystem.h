#ifndef BANKSYSTEM_H
#define BANKSYSTEM_H

class Bank;
class Account {
	friend class Bank;
private:
	double balance;
public:
	Account();
	Account(double balance);
};

class Bank {
public:
	void increaseBalance(Account* account, double amount);
	void decreaseBalance(Account* account, double amount);
};

#endif