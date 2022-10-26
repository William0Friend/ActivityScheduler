#include "AcctId.h"
#include <iostream>

AcctId::AcctId() {
	this->acctId = "";
}
AcctId::AcctId(std::string acctId) {
	this->acctId = acctId;
}
void AcctId::requestValue(){
	std::cout << "Enter AcctyID: ";
	std::cin >> this->acctId;
}
void AcctId::displayValue() {
	std::cout << "Value is: " << this->acctId << std::endl;
}