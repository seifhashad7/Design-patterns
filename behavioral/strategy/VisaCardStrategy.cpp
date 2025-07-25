#include <iostream>
#include "VisaCardStrategy.hpp"

using namespace std;

VisaCardStrategy::VisaCardStrategy(int bal) :
balance(bal)
{
    cout << "Your VisaCard is ready! your initial balance is: " << balance << endl;  
}

void VisaCardStrategy::pay() const
{
    cout << "Pay via visa!"<< endl;
}

void VisaCardStrategy::depoist(int amount)
{
    balance += amount;
    cout << "Depoist " << amount << " into your visacard!" << ", Your account balance: " << balance << endl;
}