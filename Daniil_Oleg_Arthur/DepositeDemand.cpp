#include "DepositeDemand.h"

DepositeDemand::DepositeDemand() : Investment()
{
}

DepositeDemand::DepositeDemand(string name, float money) : Investment(name, money)
{
}

float DepositeDemand::Calculate(int month) const
{
	float result = getMoney();

	while (month >= 12) {
		result += result * depositeDemand;
		month = month - 12;
	}
	return result;
}

void DepositeDemand::ShowInfo() const
{
	cout << "Deposite demand: " << endl;
	cout << "Name: " << getName() << endl;
	cout << "Money: " << getMoney() << endl;
}
 