#include "BankSystem.h"

Account::Account()
{
	this->balance = 0;
}

Account::Account(double balance)
{
	this->balance = balance;
}

void Bank::increaseBalance(Account* account, double amount)
{
	account->balance += amount;
}

void Bank::decreaseBalance(Account* account, double amount)
{
	account->balance -= amount;
}
