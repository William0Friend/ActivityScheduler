#ifndef SCHEDULEDACTIVITY_H
#define SCHEDULEDACTIVITY_H
#include "Activity.h"

class IActivity;
class ScheduledActivity
{
    int activityId;//activity ID
    static int IdNum; // >= 33//keeps track of next avalible iid number
    IActivity* activity; //activity
public:
    //precondition: Must be passed address, perferably class that instantiates IActivity 
    //postcondition: Objects passed will be a
    ScheduledActivity(IActivity * obj);
    //precondition: None
    //postcondition: returns the activity attribute
    IActivity * getActivity();
    //precondition: None
    //postcondition: returns the activityId attribute
    int getActivityId();
    virtual ~ScheduledActivity() {};

};

#endif