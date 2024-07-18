#pragma once
#include <iostream>
#include <string>
#include "Investment.h"
class LongInvestment : public Investment
{
	const float longInvestment = 0.1;
public:
	LongInvestment();
	LongInvestment(string name, float money);

	float Calculate(int month)const override;
	void ShowInfo()const override;
};


