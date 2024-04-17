#include "T2.h"
#include<iostream>
#include<string>
void element::getlen()
{
	len = str.length();
}

void element::getnum1()
{
	for (int i = 0; i < len; i++)
	{
		if (str[i] == '1')num1++;
	}
}

void element::getstr()
{
	getline(cin, str);
}

void T2::cine()
{
	int i = 5;
	while (i!=-1)
	{
		e[i].getstr();
		i--;
	}
	for (int i = 0; i < 6; i++)
	{
		e[i].getlen();
		e[i].getnum1();
	}
}

void T2::sort()
{
	for (int j = 0; j < 6; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (e[i].returnlen() > e[i + 1].returnlen())
			{
				element ee;
				ee.changestr(e[i].returnstr());
				e[i].changestr(e[i + 1].returnstr());
				e[i + 1].changestr(ee.returnstr());
			}
			else if (e[i].returnlen() == e[i + 1].returnlen())
			{
				if (e[i].returnnum1() > e[i + 1].returnnum1())
				{
					element ee;
					ee.changestr(e[i].returnstr());
					e[i].changestr(e[i + 1].returnstr());
					e[i + 1].changestr(ee.returnstr());
				}
			}
		}
	}
	for (int i = 0; i < 6; i++)
	{
		cout << e[i].returnstr() << endl;
	}
}
