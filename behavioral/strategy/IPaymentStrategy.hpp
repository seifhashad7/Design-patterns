#pragma once

//Interface class
class IPaymentStrategy
{   
    public:
        virtual ~IPaymentStrategy() = default;
        virtual void pay() const = 0;
        virtual void depoist(int amount) = 0;
};