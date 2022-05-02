#include "clock.hxx"

#include <vector>

class Repository
{
private:
    // list of clocks in the repository
    std::vector<Clock *> clocks;
    // amount of money in the register
    int amountOfCash;

public:
    Repository() : amountOfCash(0)
    {
    }

    ~Repository()
    {
        // all clocks to be deleted
    }

    // add clock to repository with the given name and price
    // check if name is unique
    void addClock(const std::string &pName, int pPrice)
    {
        if (getClock(pName))
        {
            // print error
            return;
        }

        clocks.push_back(new Clock(pName, pPrice));
    }

    // remove clock from repository
    void removeClock(const std::string &)
    {
        // to be implemented
    }

    // get clock by name
    Clock *getClock(const std::string &) const
    {
        // to be implemented
    }

    int getNumberOfClocks() const
    {
        return clocks.size();
    }

    int getValueOfClocks() const
    {
        // to be implemented;
        return 0;
    }

    int getAmountOfCash() const
    {
        return amountOfCash;
    }

    int registerOutcome(int amountOfMoney)
    {
        amountOfCash -= amountOfMoney;
    }

    int registerIncome(int amountOfMoney)
    {
        amountOfCash += amountOfMoney;
    }
};
