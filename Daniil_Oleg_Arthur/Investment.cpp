#include "Investment.h"

Investment::Investment()
{
    name = "Undefined";
    money = 0;
}

Investment::Investment(string name, float money)
{
    this->name = name;
    this->money = money;
}

void Investment::setName(string name)
{
    this->name = name;
}

void Investment::setMoney(float money)
{
    this->money = money;
}



void Investment::AddMoney(float summ)
{
    try
    {
        if (summ < 0) throw;
        money += summ;
    }
    catch (...)
    {
        cout << "Ошибка: сумма не может быть отрицательной" << endl;
    }
}

void Investment::DelMoney(float summ)
{
    try
    {
        if (summ < 0 || money < summ) throw;
        money -= summ;
    }
    catch (...)
    {
        cout << "Ошибка: сумма не может быть отрицательной или превышать текущий баланс" << endl;
    }
}



string Investment::getName() const
{
    return name;
}

float Investment::getMoney() const
{
    return money;
}
