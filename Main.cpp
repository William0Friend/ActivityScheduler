#include <iostream>
#include <string>
#include <iomanip> 
#include "Activity.h"
#include "AcctId.h"
#include "IActivity.h"
#include "Name.h"
#include "PhoneNumber.h"
#include "ScheduledActivity.h"
#include "Scheduler.h"
#define MAX_ACTIVITIES 5

//#define MAX_ACTIVITIES 10
//If you need to control the width of an output field and the fill character, you can use the following: 
//std::cout <<std::setw(4) << std::setfill(�#�) << 12 << std::endl;


//const int MAX_ACTIVITIES = 10;

int main()
{
Scheduler scheduler;
//int activityId = 10;
int activityId[MAX_ACTIVITIES];

int i = 0;
int num_activities = 0;



for (i = 0; i < MAX_ACTIVITIES; i++) {

	activityId[i] = 0;

}



// create and register each activity with the scheduler,  

// and save its id 

i = 0;

activityId[i++] = scheduler.addActivity(new Name());

activityId[i++] = scheduler.addActivity(new AcctId());

activityId[i++] = scheduler.addActivity(new PhoneNumber());

activityId[i++] = scheduler.addActivity(new Activity());

num_activities = i;



// let scheduler run 

scheduler.run();



// delete all activities that were created 

for (i = 0; i < num_activities; i++) {

	delete (scheduler.getActivity(activityId[i]));

}

return 0;
}