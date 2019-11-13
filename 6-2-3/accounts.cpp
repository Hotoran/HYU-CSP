#include<iostream>
#include"accounts.h"

AccountManager::AccountManager() {
	for (int i = 0; i < 10; i++) {
		this->users[i].open = 0;
		this->users[i].balance = 0;
	}
	this->openedNum = 0;
}

void AccountManager::deposit(Account* users, int _ID, int saveMoney)
{
	users[_ID].balance = users[_ID].balance + saveMoney;
	std::cout << "Success: Deposit to user " << _ID;
	std::cout << " " << saveMoney << std::endl;
}

void AccountManager::withdrawal(Account* users, int _ID, int wdMoney)
{
	int tempMoney;
	tempMoney = users[_ID].balance - wdMoney;
	if (tempMoney < 0) {
		std::cout << "Failure: Withdraw from user " << _ID;
		std::cout << " " << wdMoney << std::endl;
	}
	else {
		users[_ID].balance = tempMoney;
		std::cout << "Success: Withdraw from user " << _ID;
		std::cout << " " << wdMoney << std::endl;
	}
}

void AccountManager::transfer(Account* users, int _ID1, int _ID2, int tsMoney)
{
	int tempMoney;
	tempMoney = users[_ID1].balance - tsMoney;
	if (tempMoney < 0) {
		std::cout << "Failure: Transfer from user " << _ID1;
		std::cout << " to user " << _ID2 << " " << tsMoney << std::endl;
	}
	else { users[_ID1].balance = tempMoney;
		users[_ID2].balance = users[_ID2].balance + tsMoney;
		std::cout << "Success: Transfer from user " << _ID1;
		std::cout << " to user " << _ID2 << " " << tsMoney << std::endl;
	}
}

int AccountManager::chBalance(Account* users, int _ID)
{
	return users[_ID].balance;
}

