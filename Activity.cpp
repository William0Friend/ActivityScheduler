#include "Activity.h"
#include <iostream>
#include <string>


Activity::Activity() {
	this->value = "";
}

Activity::Activity(std::string value) {
	this->value = value;
}

void Activity::requestValue() {
	std::cout << "Enter Value: ";
	std::cin >> this->value;
}

void Activity::displayValue() {
	std::cout << "Value is: " << this->value << std::endl;
}