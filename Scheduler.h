#pragma once
#include "ScheduledActivity.h"
#include "IActivity.h"
#define MAX_ACTIVITIES 5

class Scheduler
{
	/*
	This class has its own .cpp and .h files. It has two private attributes: 

    ScheduledActivity * activities[MAX_ACTIVITIES]  to keep track of the Activity objects that are to be scheduled 

    int num_activities  to keep track of how many Activity objects are currently scheduled 

It has the following methods: 

    contructor: initializes the attributes 

    int addActivity(IActivity *): This method addActivity() uses the argument to create a new ScheduledActivity object and stores it in the activities attribute. It gets the id of the new ScheduledActivity object and returns this id. 

    void run(): first invokes requestValue() for each scheduled activity, then invokes displayValue() for each scheduled activity. 

    Method getActivity() takes an id as argument, searches the activities attribute for a matching id, the returns the corresponding activity. 

    The destructor must delete all ScheduledActivity objects it allocated.          
	*/
    //atribute 1
    ScheduledActivity* activities[MAX_ACTIVITIES];//to keep track of the Activity objects that are to be scheduled
       
    //attribute 2
    int num_activities;//to keep track of how many Activity objects are currently scheduled


public:
    //Scheduler(int num_activities, ScheduledActivity* activities[]);
    Scheduler();
    // int addActivity(IActivity *): This method addActivity() uses the 
    // argument to create a new ScheduledActivity object and stores it 
    // in the activities attribute. 
    // It gets the id of the new ScheduledActivity object and returns this id. 
    /*
    int addActivity(IActivity* obj) {
        obj = new ScheduledActivity;
        activities[num_activities] = *obj;
    }
    */
    int addActivity(IActivity * obj);
    void run();
    ScheduledActivity* getActivity(int);
    virtual ~Scheduler();

    //void requestValue();
    //void displayValue();
};

