#include "T1.h"
#include<string>
#include<string.h>
#include<iostream>
using namespace std;
void T1::getkey()
{
	cin >> key;
}

void T1::getsen()
{
	getchar();
	getline(cin,sen);
}

void T1::getSeSen()
{
	string out;
	int keylen = key.length();
	int senlen = sen.length();
	int j = 0;
	for (int i = 0; i < senlen; i++)
	{
		if (j == keylen)j = 0;
		char c = key[j] + sen[i] - 48;
		out.push_back(c);
		j++;
	}
	cout << out;
}
