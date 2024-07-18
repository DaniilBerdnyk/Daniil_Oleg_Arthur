#pragma once
#include"Investment.h"
#include<string>
#include<set>
#include<algorithm>

class Bank
{
	string name;
	float sumInvestments;
	int countInvestments;
	set<Investment*> investments;
	
public:
	Bank();
	Bank(string name);
	~Bank();

	string getName()const;
	void setName(string name);

	void checkSumInvestments();	
	float getSumInvestments();
	int getCountInvestments()const;

	void addInvestment(Investment* obj);
	void deleteInvestment(string name);
	Investment* findInvestment(string name);
	void editInvestment(Investment* obj,float money);
};

