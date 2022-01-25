/*
  ==============================================================================

    HabitComponent.h
    Created: 24 Jan 2022 2:37:23pm
    Author:  oktay

  ==============================================================================
*/

#pragma once
#include <iostream>
#include "HabitEntry.h"
#include <fstream>
#include "DailyTrackerEntry.h"
#include "CSVOperator.h"

class HabitComponent
{
    public:
        HabitComponent(int _habitId, std::string _habitName); //ID is unique for all habit objects

        //Returns the ID of the habitComponent as string
        std::string returnID();  

    private:

        int habitID;
        std::string habitName;

        // trackerVector stores all the dailyTracker Entries.
        std::vector<DailyTrackerEntry> trackerVector;




};
