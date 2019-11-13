#include<vector>
#include<algorithm>
#include"intset.h"

using namespace std;

IntegerSet::IntegerSet(){
}
IntegerSet::~IntegerSet(){
}

void IntegerSet::AddNumber(int num){
	int check = 0;
	for (int i = 0; i < this->numbers_.size(); i++) {
		if (this->numbers_[i] == num) {
			check = 1;
		}
	}
	if (check == 0) {
		this->numbers_.push_back(num);
		sort(this->numbers_.begin(), this->numbers_.end());
	}
}

void IntegerSet::DeleteNumber(int num){
	int vSize;
	vSize = this->numbers_.size();
	for (int i = 0; i < vSize; i++) {
		if (this->numbers_[i] == num) {
			this->numbers_.erase(this->numbers_.begin() + i);
			i--;
			vSize--;
		}
	}
}

int IntegerSet::GetItem(int pos){
	if (pos >= this->numbers_.size()) {
		return -1;
	}
	else {return this->numbers_[pos];}
}

vector<int> IntegerSet::GetAll(){
	return this->numbers_;
}
