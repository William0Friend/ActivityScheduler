#ifndef IACTIVITY
#define IACTIVITY
#include "IActivity.h"
#include <string>


class Name : public IActivity
{
    std::string firstName;
    std::string lastName;

public:
    Name();
    Name(std::string firstName, std::string lastName);
    void requestValue();
    void displayValue();
};
#endif 