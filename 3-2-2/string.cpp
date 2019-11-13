#include<iostream>

using namespace std;

int main()
{
	string str1,str2,str;
	cin >> str1;
	cin >> str2;
	str = str1 + str2;
	cout << str << endl;
	cout << str[0] << endl;
	cout << str[str.length() - 1] << endl;
	return 0;
}

