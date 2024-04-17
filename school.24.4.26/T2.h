#pragma once
#include<string>
using namespace std;
class element
{
private:
	string str;
	int len=0;
	int num1=0;
public:
	void getstr();
	void getlen();
	void getnum1();
	int returnlen()
	{
		return len;
	}
	int returnnum1()
	{
		return num1;
	}
	string returnstr()
	{
		return str;
	}
	void changestr(string s)
	{
		str = s;
		len = str.length();
		getnum1();
	}
};
class T2
{
private:
	element e[100];
public:
	void cine();
	void sort();
};



