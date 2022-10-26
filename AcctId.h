
#ifndef ACCTID_H
#define ACCTID_H
#include <string>
#include "IActivity.h"


class AcctId : public IActivity {
    /*
            constructor: initializes the class’s attribute(s)
            void requestValue(): uses std::cout and std::cin to prompt for a value for each of the attributes
            void displayValue(): uses std::cout to display the contents of the attribute(s)

            AcctId: std::string acctId
            PhoneNumber: int areaCode, int exchange, int extension
        Make sure you declare the methods so that polymorphism is supported.
*/
    std::string acctId;
public:
    AcctId();
    AcctId(std::string acctId);
    //precondition: Must be valid string, and must not be empty
    //postcondition: Input will be placed into acctId attribute
    void requestValue();
    //precondition: None
    //postcondition: Input will be placed into acctId attribute
    void displayValue();
};
#endif // !ACCTID_H
