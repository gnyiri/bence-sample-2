#pragma once

#include <string>

class Clock
{
protected:
    std::string name;
    int price;

public:
    Clock(const std::string &pName, int pPrice) : name(pName), price(pPrice){
                                                                   // throws exception if pPrice <= 0 or pName is empty
                                                               };

    ~Clock();

    std::string getName() const
    {
        return name;
    }
    // check if not empty
    void setName(const std::string &pName)
    {
        name = pName;
    }

    int getPrice() const
    {
        return price;
    }
    // check if not zero or less
    void setPrice(int pPrice)
    {
        price = pPrice;
    }
};
