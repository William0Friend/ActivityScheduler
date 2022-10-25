#pragma once
#include <string>
#include "AcctId.h"
#include "IActivity.h"
class AcctId : public IActivity {
	/*
    Each of these files should have its own .cpp and .h files. Name, AcctId, PhoneNumber, and Activity all implement (inherit from) IActivity. 

        All four classes have the following methods: 

            constructor: initializes the class’s attribute(s) 

            void requestValue(): uses std::cout and std::cin to prompt for a value for each of the attributes 

            void displayValue(): uses std::cout to display the contents of the attribute(s) 

        Here are the attributes each class has (all are private): 

            Activity: std::string value 

            Name: std::string firstName, std::string lastName 

            AcctId: std::string acctId 

            PhoneNumber: int areaCode, int exchange, int extension 

        Make sure you declare the methods so that polymorphism is supported.
*/
    std::string acctId;
public:
    AcctId();
    AcctId(std::string acctId);
    void requestValue();
    void displayValue();
};