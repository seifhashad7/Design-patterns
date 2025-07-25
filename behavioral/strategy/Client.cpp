#include <iostream>
#include "StrategyContext.hpp"
#include "MasterCardStrategy.hpp"
#include "VisaCardStrategy.hpp"

using namespace std;

int main()
{
    auto context = std::make_unique<StrategyContext>(std::make_unique<MasterCardStrategy>(100));
    context->pay();
    context->depoist(1000);

    context->setStrategy(std::make_unique<VisaCardStrategy>(200));
    context->pay();
    context->depoist(2000);
    return 0;
}
