#include<iostream>

using namespace std;

int add(int a, int b);

string add(string a, string b);

int main()
{
	int num1, num2;
	string str1, str2;

	cin >>  num1 >> num2 >>  str1 >> str2;
	
	cout << add(num1,num2) << endl;
	cout << add(str1,str2) << endl;
	
	return 0;
}

int add(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

string add(string a, string b)
{
	string str;
	str = a + "-" + b;
	return str;
}

