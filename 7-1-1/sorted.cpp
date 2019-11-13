#include<vector>
#include<algorithm>
#include<functional>
#include"sorted.h"

using namespace std;

SortedArray::SortedArray(){
	
}

SortedArray::~SortedArray(){

}
void SortedArray::AddNumber(int num){
	this->numbers_.push_back(num);
}

vector<int> SortedArray::GetSortedAscending() {
	sort(this->numbers_.begin(),this->numbers_.end());
	return this->numbers_;
}

vector<int> SortedArray::GetSortedDescending() {
	sort(this->numbers_.begin(),this->numbers_.end(),greater<int>());
	return this->numbers_;
}

int SortedArray::GetMax(){
	int max;
	max = *max_element(this->numbers_.begin(), this->numbers_.end());
	return max;
}

int SortedArray::GetMin(){
	int min;
	min = *min_element(this->numbers_.begin(), this->numbers_.end());
	return min;
}

