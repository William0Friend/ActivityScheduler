#include "Name.h"
#include <iostream>

Name::Name() {
	this->firstName = "";
	this->lastName = "";
}

Name::Name(std::string firstName, std::string lastName) {
	this->firstName = firstName;
	this->lastName = lastName;
}

void Name::requestValue() {
	std::cout << "First Name: ";
	std::cin >> this->firstName;
	std::cout << "Last Name: ";
	std::cin >> this->lastName;
}

void Name::displayValue() {
	std::cout << "First Name: " << this->firstName << std::endl << "Last Name: " << this->lastName << std::endl;
}