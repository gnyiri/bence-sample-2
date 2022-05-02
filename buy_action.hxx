#pragma once

#include "action.hxx"

class BuyAction : public Action
{
public:
    BuyAction(Repository *pRepository) : Action(pRepository)
    {
    }

    virtual void Do(const std::string &pClockName, int pTransactionPrice)
    {
        if (!repository || pTransactionPrice < 0 || repository->getClock(pClockName))
        {
            // report error
            return;
        }

        repository->addClock(pClockName, pTransactionPrice);
        repository->registerOutcome(pTransactionPrice);
    }
};
