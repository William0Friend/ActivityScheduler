#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include "IActivity.h"

class PhoneNumber : public IActivity
{
    int areaCode;
    int exchange;
    int extention;

public:
    PhoneNumber();
    PhoneNumber(int areaCode, int exchange, int extention);

    //precodition: None
    //postcondition: All values will be added to areaCode, exchange, and extention, in that order
    void requestValue();
    //precodition: none
    //postcondition: All stored values of PhoneNumber will be printed to stdout
    void displayValue();

};

#endif // !PHONENUMBER_H

