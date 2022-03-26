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
    std::ifstream goalsFile(".\\HabitsFiles\\" + goalsFileName + ".txt");
    
    //Checks if dailyTracker file exists. If exists populate tracker Vector. Else, creates one. Then closes it.
    if (dailyTrackerFile.is_open())
    {
        //Get dailyTrackerEntries 
        trackerVector = CSVOperator::readDailyTrackerCSV(_habitId);
    }
    else
    {
        std::ofstream dailyTrackerFile(".\\HabitsFiles\\" + dailyTrackerFileName + ".csv");
        std::string trackerLine;
        std::string iAsStr;

        // Popualtes the daily tracker file with 28 days of -1
        // -1 means the day result is not decided yet
        for (int i = 0; i < 28; ++i)
        {
            iAsStr = std::to_string(i + 1);
            trackerLine = iAsStr + ",Unmarked\n";
            dailyTrackerFile << trackerLine;
        }
    }
    dailyTrackerFile.close();


    //Checks if goals file exist. if not, creates it. Then closes the file.
    if (!goalsFile.is_open())
    {
        std::ofstream goalsFile(".\\HabitsFiles\\" + goalsFileName + ".txt");

    }

    goalsFile.close();

    isSelected = false; // Setting the isSelected false initially.
}

//Returns the ID of the habitComponent as string
std::string HabitComponent::returnID()
{
    std::string stringID = std::to_string(habitID);
    return stringID;
}






