#include "Bank.h"

Bank::Bank()
{
    name = "Undefined";
    sumInvestments = 0;
    countInvestments = 0;
}

Bank::Bank(string name)
{
    this->name = name;
    sumInvestments = 0;
    countInvestments = 0;
}

Bank::~Bank()
{
    for (auto item : investments)
    {
        delete item;
    }
}

string Bank::getName() const
{
    return name;
}

void Bank::setName(string name)
{
    this->name = name;
}

void Bank::checkSumInvestments()
{
    sumInvestments = 0;
    for (auto item : investments)
    {
        sumInvestments += item->getMoney();
    }
}

float Bank::getSumInvestments()
{
    checkSumInvestments();
    return sumInvestments;
}

int Bank::getCountInvestments() const
{
    return countInvestments;
}

void Bank::addInvestment(Investment* obj)
{
    investments.insert(obj);
    countInvestments++;
    checkSumInvestments();
}

void Bank::deleteInvestment(string name)
{
    Investment* deleteItem = findInvestment(name);
    if (deleteItem != nullptr)
    {
        countInvestments--;
        investments.erase(deleteItem);
        delete deleteItem;
        checkSumInvestments();
    }
}

Investment* Bank::findInvestment(string name)
{
    for (auto item : investments)
    {
        if (name == item->getName())
        {
            return item;
        }
    }
    return nullptr;
}

void Bank::editInvestment(Investment* obj, float money)
{
    obj->setMoney(money);
    checkSumInvestments();
}
