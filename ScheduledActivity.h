#pragma once
#include "Activity.h"

class IActivity;

class ScheduledActivity
{
	/*
	This class serves to hold a pair of related things: a pointer to an IActivity object and an integer activityId. 

    Class attribute (static var) IdNum keeps track of the next available id number. The id numbers should start at 33. 

    The constructor receives a pointer to an IActivity object, stores it in attribute activity, sets activityId to the next available id number, and updates the next available id number (by incrementing it by 1). 

    Method getActivity() returns the activity attribute. 

    Method getActivityId() returns the activityId attribute. 
	*/
    int activityId;//activity ID
    static int IdNum; // >= 33//keeps track of next avalible iid number
    IActivity* activity; //activity
public:
    ScheduledActivity(IActivity * obj);//The constructor receives a pointer to an IActivity object,
                                       //stores it in attribute activity, sets activityId to the
                                       //next available id number, and updates the next available 
                                       //id number (by incrementing it by 1). 
    virtual ~ScheduledActivity() {};
    IActivity * getActivity();//returns the activity attribute
    int getActivityId();//returns the activityId attribute
    
};

