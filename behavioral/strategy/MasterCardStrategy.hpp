#pragma once

#include "IPaymentStrategy.hpp"

using namespace std;

class MasterCardStrategy : public IPaymentStrategy
{
    private:
        int balance = 0;
    public:
        MasterCardStrategy(int bal);
        void pay() const override;
        void depoist(int amount) override;
};