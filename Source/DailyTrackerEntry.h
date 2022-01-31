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


        DailyTrackerEntry(int day, std::string dailyStatus);

        int day;
        std::string dailyStatus;  // "Yes" for 'I did it', "No" for 'I did not'. "Unmarked" for not yet marked.

};

