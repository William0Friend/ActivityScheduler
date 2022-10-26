#include "ScheduledActivity.h"

	
ScheduledActivity::ScheduledActivity(IActivity* obj) {
	this->activity = obj;
	this->activityId = IdNum;
	this->IdNum++;
}
//The constructor receives a pointer to an IActivity object,
//stores it in attribute activity, sets activityId to the
//next available id number, and updates the next available 
//id number (by incrementing it by 1). 
IActivity* ScheduledActivity::getActivity() {//returns the activity attribute
	return activity;
}
int ScheduledActivity::getActivityId() {//returns the activityId attribute
	return this->activityId;
}
