#pragma once

#include "action.hxx"

class SellAction : public Action
{
public:
    SellAction(Repository *pRepository) : Action(pRepository)
    {
    }

    virtual void Do(const std::string &pClockName, int pTransactionPrice)
    {
        if (!repository || pTransactionPrice < 0 || !repository->getClock(pClockName))
        {
            // report error
            return;
        }

        repository->removeClock(pClockName);
        repository->registerIncome(pTransactionPrice);
    }
};
