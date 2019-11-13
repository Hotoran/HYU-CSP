#include<iostream>
#include"accounts.h"

using namespace std;

void infoAccount(AccountManager A, int ID) {
	cout << "Balance of user " << ID;
	cout << ": " << A.chBalance(A.users,ID) << endl;
}

int isRegistered(AccountManager A, int ID) {
	if (A.users[ID].open == 0) {
		cout << "Account does not exist" << endl;
		return 0;
	}
	else {return 1;}
}

void createAcc(AccountManager &A) {
	if (A.openedNum == 10) {
		cout << "You can't create more accounts than 10!" << endl;
	}
	else {
		A.users[A.openedNum].open = 1;
		A.users[A.openedNum].ID = A.openedNum;
		cout << "Account for user " << A.openedNum << " registerd" << endl;
		infoAccount(A,A.openedNum);
		A.openedNum++;
	}
}

int main(void) {
	AccountManager manager;
	char command;
	int ID1, ID2, money;
	while (1) {
		cout << "\n";
		cout << "Job?" << endl;
		cin >> command;
		if (command == 'N') {
			createAcc(manager);
		}
		else if (command == 'D') {
			cin >> ID1 >> money;
			if (isRegistered(manager, ID1) == 0) {
				cin.ignore();
				continue;
			}
		
			else {
				manager.deposit(manager.users, ID1, money);
				infoAccount(manager, ID1);
			}
		}
		else if (command == 'W') {
			cin >> ID1 >> money;
			if (isRegistered(manager, ID1) == 0) {
                cin.ignore();
                continue;
            }
			else {
				manager.withdrawal(manager.users, ID1, money);
				infoAccount(manager, ID1);
			}
		}
		else if (command == 'T') {
			cin >> ID1 >> ID2 >> money;
			if (isRegistered(manager, ID1) == 0 or isRegistered(manager, ID2) == 0) {
                cin.ignore();
                continue;
            }
			else {
				manager.transfer(manager.users, ID1, ID2, money);
				infoAccount(manager, ID1);
				infoAccount(manager, ID2);
			}
		}
		else if (command == 'Q') { cin.ignore(); break; }
		
		else { cout << "Wrong Input! Re-Execute!" << endl; break; }
	}
	return 0;
}
