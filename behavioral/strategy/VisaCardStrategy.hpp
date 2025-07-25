#pragma once

#include "IPaymentStrategy.hpp"

class VisaCardStrategy : public IPaymentStrategy
{   
    private:
        int balance = 0;
    public:
        VisaCardStrategy(int bal);
        void pay() const override;
        void depoist(int amount) override;
};