#include <iostream>
#include "MasterCardStrategy.hpp"

using namespace std;

MasterCardStrategy::MasterCardStrategy(int bal) :
balance(bal)
{
    cout << "Your MasterCard is ready! your initial balance is: " << balance << endl;  
}

void MasterCardStrategy::pay() const
{
    cout << "Pay via mastercard!" << endl;
}

void MasterCardStrategy::depoist(int amount)
{
    balance += amount;
    cout << "Depoist " << amount << " into your mastercard!" << ", Your account balance: " << balance << endl;
}
