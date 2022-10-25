#include "PhoneNumber.h"
#include <iostream>

PhoneNumber::PhoneNumber() {
	this->areaCode = 0;
	this->exchange = 0;
	this->extention = 0;
}
PhoneNumber::PhoneNumber(int areaCode, int exchange, int extention) {
	this->areaCode = areaCode;
	this->exchange = exchange;
	this->extention = extention;
}
void PhoneNumber::requestValue() {
	std::cout << "Enter Area Code: ";
	std::cin >> this->areaCode;
	std::cout << "Enter Exchange Code: ";
	std::cin >> this->exchange;
	std::cout << "Enter Extention Code: ";
	std::cin >> this->extention;
}

void PhoneNumber::displayValue() {
	std::cout << "Area Code: " << this->areaCode << std::endl << "Exchange: " << this->exchange
		<< std::endl << "Extention: " << this->extention << std::endl;
}