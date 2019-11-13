#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include"message.h"

using namespace std;

MessageBook::MessageBook(){
}
MessageBook::~MessageBook(){
}

void MessageBook::AddMessage(int number, const string& message){
	this->messages_[number] = message;
}

void MessageBook::DeleteMessage(int number){
	this->messages_.erase(number);
}

vector<int> MessageBook::GetNumbers(){
	vector<int> nums;
	for (map<int, string>::iterator it = this->messages_.begin(); it != this->messages_.end(); it++) {
		nums.push_back(it->first);
	}
	sort(nums.begin(), nums.end());
	return nums;
}

const string& MessageBook::GetMessage(int number){
	return this->messages_.find(number)->second;
}
