#include "Scheduler.h"
#include <iostream>
int ScheduledActivity::IdNum = 33;


Scheduler::Scheduler() {
    this->num_activities = 0;
}
int Scheduler::addActivity(IActivity* obj) {
    activities[num_activities] = new ScheduledActivity(obj);
    num_activities++;
    return activities[num_activities - 1]->getActivityId();
}
void Scheduler::run() {
    // first invokes requestValue() for each scheduled activity, 
    // then invokes displayValue() for each scheduled activity.
    for (int i = 0; i < this->num_activities; i++) {
        activities[i]->getActivity()->requestValue();
        
    }
    std::cout << std::endl;
    for (int i = 0; i < this->num_activities; i++) {
        activities[i]->getActivity()->displayValue();
    }
}
ScheduledActivity* Scheduler::getActivity(int id) {
    for (ScheduledActivity * act : activities) {
        if (id == act->getActivityId()) {
            return act;
        }
    }
}
//Method getActivity() takes an id as argument, 
//searches the activities attribute for a matching id, 
//the returns the corresponding activity.

//The destructor must delete all ScheduledActivity objects it allocated.

Scheduler::~Scheduler() {
        for(int i=0;i>num_activities;i--)
        {
            activities[i]->~ScheduledActivity();
        
        }
    
}