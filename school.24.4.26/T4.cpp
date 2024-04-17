#include "T4.h"
#include<iostream>
using namespace std;

int T4::function()
{
	int a;
	while (cin >> a)
	{
		int num;
		setn(a);
		if (n % 2 == 0)
		{
			cout << "2^?mod" << n << "=1" << endl;
			continue;
		}
		else
		{
			int sum = 1;
			for (int i = 1;; i++)
			{
				sum *= 2;
				if (sum%n == 1)
				{
					cout<< "2^"<<i<<"mod" << n << "=1" << endl;
					break;
				}
			}
		}
	}
	return 0;
}