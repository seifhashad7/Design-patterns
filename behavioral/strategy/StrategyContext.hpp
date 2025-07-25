#include <iostream>
#include <memory>
#include "IPaymentStrategy.hpp"

using namespace std;

class StrategyContext
{
    private:
    std::unique_ptr<IPaymentStrategy> paymentStrategy;

    public:
        StrategyContext(std::unique_ptr<IPaymentStrategy> initPayStrategy)
        {
            paymentStrategy = std::move(initPayStrategy);
        }

        void setStrategy(std::unique_ptr<IPaymentStrategy> newPayStrategy)
        {
            paymentStrategy = std::move(newPayStrategy);
        }

        void pay()
        {
            paymentStrategy->pay();
        }

        void depoist(int money)
        {
            paymentStrategy->depoist(money);
        }
};  