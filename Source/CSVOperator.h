/*
  ==============================================================================

    CSVOperator.h
    Created: 24 Jan 2022 3:26:09pm
    Author:  oktay

  ==============================================================================
*/

#pragma once

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include "HabitEntry.h"
#include "DailyTrackerEntry.h"
#include <JuceHeader.h>

class CSVOperator
{
    public:
        CSVOperator();

  

        // ==================== Habit Entry Functions =================================
        static std::vector<HabitEntry> readHabitsCSV(); //Reads habits csv
        static HabitEntry stringsToHabitEntry(std::string habitID, std::string name); // Converts strings to habitEntry
        static HabitEntry vectorOfStringsToHabitEntry(std::vector<std::string> token); // Converts a vector of strings to habitEntry
        static int returnAvailableHabitId(); //Returns an available Habit ID for new habits
        static void addNewHabit(std::string id, std::string name);        

        // ==================== DailyTracker Functions =================================
        static std::vector<DailyTrackerEntry> readDailyTrackerCSV(int habitId); //Reads dailyTracker file
        static DailyTrackerEntry vectorOfStringsToDailyTrackerEntry(std::vector<std::string> token); // Converts a vector of strings to dailyTrackerEntry
        static std::vector<std::string> returnDailyStatusVector(std::vector<DailyTrackerEntry> vector); // Returns only daily Statuses
        static void updateDailyTrackerFile(int habitId, std::vector<int> lines, std::string YesOrNO); // Change given lines to "Yes" or "No" for selected habit

        //===================== Goals File Functions ===========================================
        static juce::String readHabitGoals(int habitID);
        static void updateGoals(int habitID, std::string text);


    private:

        // Tokeniser Function
        static std::vector<std::string> tokeniser(std::string csvLine, char separator);
};
