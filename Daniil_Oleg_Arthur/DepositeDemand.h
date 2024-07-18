#pragma once
#include <iostream>
#include <string>
#include "Investment.h"
class DepositeDemand : public Investment
{
	const float depositeDemand = 0.03;
public:
	DepositeDemand();
	DepositeDemand(string name, float money);

	float Calculate(int month)const override;
	void ShowInfo()const override;
};

