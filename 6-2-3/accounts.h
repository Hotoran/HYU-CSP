class Account {
public:
	int ID;
	int balance;
	int open;
};

class AccountManager {
public:
	Account *users = new Account[10];
	int openedNum;
	
	AccountManager();

	void deposit(Account *users, int _ID, int saveMoney);
	void withdrawal(Account *users, int _ID, int wdMoney);
	void transfer(Account *users, int _ID1, int _ID2, int tsMoney);
	int chBalance(Account *users, int _ID);
};
