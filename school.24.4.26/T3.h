#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class T3
{
private:
	int course;
	vector<int> score;
	vector<int> scorenum;
	string name;
	float sum=0.0;
public:
	T3(int cou,string nam)
	{
		course = cou;
		name = nam;
	}
	int getcourse()
	{
		return course;
	}
	string getname()
	{
		return name;
	}
	int getscore(int a)
	{
		return score.at(a);
	}
	int getscorenum(int a)
	{
		return score.at(a);
	}
	void setscorenum(int *p)
	{
		for (int i = 0; i < course; i++)scorenum.push_back(p[i]);
	}
	void setscore()
	{
		for (int i = 0; i < course; i++)
		{
			int a;
			cin >> a;
			score.push_back(a);
		}
	}
	void countsum()
	{
		for (int i = 0; i < course; i++)
		{
			sum += (float)((score.at(i)-50.0)/10.0)*scorenum.at(i);
		}
		sum /= 10.0;
	}
	float getsum()
	{
		return sum;
	}
};



