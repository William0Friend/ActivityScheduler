#include "Scheduler.h"
#include <iostream>
int ScheduledActivity::IdNum = 33;//MUST BE ATLEAST 33

Scheduler::Scheduler() {
    this->num_activities = 0;
}
int Scheduler::addActivity(IActivity* obj) {
    this->activities[num_activities] = new ScheduledActivity(obj);
    this->num_activities++;
    return this->activities[num_activities - 1]->getActivityId();
}
void Scheduler::run() {
    // first invokes requestValue() for each scheduled activity, 
    for (int i = 0; i < this->num_activities; i++) {
        this->activities[i]->getActivity()->requestValue();
    }
    // then invokes displayValue() for each scheduled activity.
    std::cout << std::endl;
    for (int i = 0; i < this->num_activities; i++) {
        this->activities[i]->getActivity()->displayValue();
    }
}
ScheduledActivity* Scheduler::getActivity(int id) {
    for (ScheduledActivity * obj : activities) {
        if (id == obj->getActivityId()) {
            return obj;
        }
        else {
            std::cout << "Id " << id << " not found" << std::endl;
            return 0;
        }
    }
}
//Method getActivity() takes an id as argument, 
//searches the activities attribute for a matching id, 
//the returns the corresponding activity.

//The destructor must delete all ScheduledActivity objects it allocated.
Scheduler::~Scheduler() {
  
    for (int i = 0; i > num_activities-1; i--)
        {
            this->activities[i]->~ScheduledActivity();
        }
     
}