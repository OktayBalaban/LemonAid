/*
  ==============================================================================

    HabitComponent.cpp
    Created: 24 Jan 2022 2:37:23pm
    Author:  oktay

  ==============================================================================
*/

#include "HabitComponent.h"


//==============================================================================
HabitComponent::HabitComponent(int _habitId, std::string _habitName)
{
    habitID = _habitId;
    habitName = _habitName;

    std::string stringID = returnID();
    std::string dailyTrackerFileName = "DailyTrack" + stringID;
    std::string goalsFileName = "Goals" + stringID;

    //CSV Files
    std::ifstream dailyTrackerFile(".\\HabitsFiles\\" + dailyTrackerFileName + ".csv");
    std::ifstream goalsFile(".\\HabitsFiles\\" + goalsFileName + ".csv");
    
    //Checks if dailyTracker file exists. If exists populate tracker Vector. Else, creates one. Then closes it.
    if (dailyTrackerFile.is_open())
    {
        //Get dailyTrackerEntries 
        trackerVector = CSVOperator::readDailyTrackerCSV(".\\HabitsFiles\\" + dailyTrackerFileName + ".csv");
    }
    else
    {
        std::ofstream dailyTrackerFile(".\\HabitsFiles\\" + dailyTrackerFileName + ".csv");
    }
    dailyTrackerFile.close();


    //Checks if goals file exist. if not, creates it. Then closes the file.
    if (!goalsFile.is_open())
    {
        std::ofstream goalsFile(".\\HabitsFiles\\" + goalsFileName + ".csv");
    }
    goalsFile.close();
}

//Returns the ID of the habitComponent as string
std::string HabitComponent::returnID()
{
    std::string stringID = std::to_string(habitID);
    return stringID;
}
