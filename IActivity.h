#ifndef IACTIVITY_H
#define IACTIVITY_H
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
	virtual ~IActivity() {}
	//precondition: Values must match type they are being assigned too
	//postcondition: All inputs will be stored in proper attributes
	virtual void requestValue() = 0;
	//precondition: None
	//postcondition: All values will be printed to stdout
	virtual void displayValue() = 0;
};
#endif // !IACTIVITY_H
