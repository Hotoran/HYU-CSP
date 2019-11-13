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
	this->messages_.insert(make_pair(number, message));
}

void MessageBook::DeleteMessage(int number){
	this->messages_.erase(number);
}

vector<int> GetNumbers(){
	vector<int> nums;
	for (int i = 0; i < this->messages_.size(); i++) {
		nums.push_back(this->messages_[i].first);
	}
	sort(nums.begin(), nums.end());
	return nums;
}

const string& GetMessage(int number){
	return this->messages_.find(number)->second;
}
