#pragma once
#include "ScheduledActivity.h"
#include "IActivity.h"
#define MAX_ACTIVITIES 5

#ifndef SCHEDULER_H
#define SCHEDULER_H
class Scheduler
{
    ScheduledActivity* activities[MAX_ACTIVITIES];//to keep track of the Activity objects that are to be scheduled
    int num_activities;//to keep track of how many Activity objects are currently scheduled
public:
    //precondition: None
    //postcondition: initializes the attributes
    Scheduler();
    //precondition: Must take a concrete class that implements IActivity, It gets the id of the new ScheduledActivity object and returns this id.  
    //postcondition: takes an the argument to create a new ScheduledActivity object and stores it in the activities attribute.
    int addActivity(IActivity* obj); 
    //precondition: first invokes requestValue() for each scheduled activity
    //postcondition:  then invokes displayValue() for each scheduled activity.
    void run();
    //precondition: int > 0
    //postcondition: returns true if object exits
    ScheduledActivity* getActivity(int);
    virtual ~Scheduler();
};


#endif // !SCHEDULER_H
