

#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <string>
#include "IActivity.h"

class Activity : public IActivity
{
    /*
        constructor: initializes the class’s attribute(s)
        void requestValue(): uses std::cout and std::cin to prompt for a value for each of the attributes
        void displayValue(): uses std::cout to display the contents of the attribute(s)
        Name: std::string firstName, std::string lastName

*/
    std::string value;
public:
    Activity();
    Activity(std::string value);
    //precondition: Must be valid string, and must not be empty
    //postcondition: Input will be placed into value attribute
    void requestValue();
    //precondition: Must have an actual value in this->value
    //postcondition: Contents of value will be printed to stdout
    void displayValue();
};

#endif // DEBUG

