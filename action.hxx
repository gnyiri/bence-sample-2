#pragma once

#include "repository.hxx"

class Action
{
protected:
    Repository *repository;

public:
    Action(Repository *pRepository) : repository(pRepository)
    {
    }

    virtual ~Action();

    virtual void Do(const std::string &pClockName, int pTransactionPrice) = 0;
};
