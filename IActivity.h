#pragma once
class IActivity {
	//interface
	//pure virtual -> <type> <name> = 0;
	/*
		This class represents an interface, and is realized by (implemented by)
		classes Name, AcctId, PhoneNumber, and Activity.
		Follow our conventions for defining interfaces in C++.
	*/
public:
	IActivity() {}
	virtual ~IActivity(){}
	virtual void requestValue() = 0;
	virtual void displayValue() = 0;
};