/*
  ==============================================================================

    HabitEntry.h
    Created: 24 Jan 2022 3:31:04pm
    Author:  oktay

  ==============================================================================
*/

#pragma once
#include <string>
#include <vector>
class DailyTrackerEntry
{
    public:


        DailyTrackerEntry(std::string date, std::string dailyStatus);

        std::string date;
        std::string dailyStatus;  //Yes for 'I did it', no for 'I did not'

};

