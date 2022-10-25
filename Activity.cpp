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
	//std::string temp;
	std::cout << "Enter Value: ";
	std::cin >> this->value;//temp;
	//std::cout << std::endl;
	//this -> value = temp
}

void Activity::displayValue() {
	std::cout << "Value is: " << this->value << std::endl;
}