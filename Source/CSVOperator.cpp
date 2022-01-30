/*
  ==============================================================================

    CSVOperator.cpp
    Created: 24 Jan 2022 3:26:09pm
    Author:  oktay

  ==============================================================================
*/

#include "CSVOperator.h"
#include "HabitEntry.h"

CSVOperator::CSVOperator()
{

}

// Function to get lines from habits CSV, first creates the file
std::vector<HabitEntry> CSVOperator::readHabitsCSV()
{
    std::vector<HabitEntry> entries;

    juce::String filePath = juce::File::getCurrentWorkingDirectory().getFullPathName();
    filePath.toStdString();

    juce::File habitsFile(filePath + "\\HabitsFiles\\Habits.csv");

    if (!habitsFile.exists())
    {
        habitsFile.create();
    }
    juce::FileInputStream csvFile(habitsFile);

    

    if (csvFile.openedOk())
    {
        while (!csvFile.isExhausted())
        {
            juce::String juceline = csvFile.readNextLine();

            // readNextLine returns a juce string, so we need to convert it to std::string first
            std::string line = juceline.toStdString();

            try {
                HabitEntry habitEntry = vectorOfStringsToHabitEntry(tokeniser(line, ','));
                entries.push_back(habitEntry);
            }
            catch (const std::exception& e)
            {
                std::cout << "CSVOperator::readCSV bad data" << std::endl;
            }
        }
    }

    //csvFile.close();
    return entries;
}

//The same tokeniser function from the MerkelRex App
std::vector<std::string> CSVOperator::tokeniser(std::string csvLine, char separator)
{
    std::vector<std::string> tokens;
    signed int start, end;
    std::string token;
    start = csvLine.find_first_not_of(separator, 0);
    do {
        end = csvLine.find_first_of(separator, start);
        if (start == csvLine.length() || start == end) break;
        if (end >= 0) token = csvLine.substr(start, end - start);
        else token = csvLine.substr(start, csvLine.length() - start);
        tokens.push_back(token);
        start = end + 1;
    } while (end > 0);

    return tokens;
}



//Adapted from stringsToOBE function form MerkelRex App
HabitEntry CSVOperator::stringsToHabitEntry(std::string habitID, std::string name)
{
    int id;

    try {
        id = std::stoi(habitID);
    }
    catch (const std::exception& e) {
        std::cout << "CSVOperator::stringsToHabitEntry Bad float! " << habitID << std::endl;
        throw;
    } 
    HabitEntry habitEntry{ id, name };
    return habitEntry;
}



//Adapted from stringsToOBE function form MerkelRex App
HabitEntry CSVOperator::vectorOfStringsToHabitEntry(std::vector<std::string> token)
{
    int id;

    if (token.size() != 2) //Checking the size of the token
    {
        std::cout << "Bad line " << std::endl;
        throw std::exception{};
    }

    try {
        id = std::stoi(token[0]);
    }
    catch (const std::exception& e) {
        std::cout << "CSVOperator::stringsToHabitEntry Bad float! " << token[0] << std::endl;
        throw;
    }
    HabitEntry habitEntry{ id, token[1]};

    return habitEntry;
}

//Returns an available Habit ID for new habits
int CSVOperator::returnAvailableHabitId()
{
    std::vector<HabitEntry> habits = readHabitsCSV();

    // Variables to use in order to assign a habit ID
    int rowCount = habits.size();
    int idFinder = 0;
    bool idFound = false;

    //If there are no habits, then assign the id as 1
    if (rowCount == 0)
    {
        idFinder = 0;
    }
    else //If there are are habits, then find a suitable id
    {
        for (int i = 0; i < rowCount; ++i)
        {
            idFound = true;
            for (HabitEntry& h : habits)
            {
                if (h.id == i)
                {
                    idFound = false;
                }
            }

            if (idFound)
            {
                idFinder = i;
                return idFinder;
            }

        }
        idFinder = rowCount;

    }

    return idFinder;
}

void CSVOperator::addNewHabit(std::string id, std::string name)
{
  
    // Builds the new entry to add into habits file
    std::string entryToBeAdded = id + "," + name + "\n";

    std::ofstream csvFile(".\\HabitsFiles\\habits.csv", std::ios::app);

    //Appending the habit as id = idFinder, name = newEntry
    csvFile << entryToBeAdded;

    csvFile.close();
}

//Getting the lines from DailyTracker file
std::vector<DailyTrackerEntry> CSVOperator::readDailyTrackerCSV(std::string filepath)
{
    std::vector<DailyTrackerEntry> entries;

    std::ifstream csvFile(filepath);
    std::string line;

    if (csvFile.is_open())
    {
        while (std::getline(csvFile, line))
        {
            try {
                DailyTrackerEntry dailyTrackerEntry = vectorOfStringsToDailyTrackerEntry(tokeniser(line, ','));
                entries.push_back(dailyTrackerEntry);
            }
            catch (const std::exception& e)
            {
                std::cout << "CSVOperator::readCSV bad data" << std::endl;
            }
        }
    }

    return entries;

}

// Converts vector of strings to DailyTrackerEntries
DailyTrackerEntry CSVOperator::vectorOfStringsToDailyTrackerEntry(std::vector<std::string> token)
{
    if (token.size() != 2) //Checking the size of the token
    {
        std::cout << "Bad line " << std::endl;
        throw std::exception{};
    }
    DailyTrackerEntry dailyTrackerEntry{ token[0], token[1]};
    return dailyTrackerEntry;
}

juce::String CSVOperator::readHabitGoals(int habitID)
{
    std::string strId = std::to_string(habitID);

    juce::String filePath = juce::File::getCurrentWorkingDirectory().getFullPathName();
    filePath.toStdString();

    juce::File goalsFile(filePath + "\\HabitsFiles\\Goals" + strId +".txt");
    juce::FileInputStream txtFile(goalsFile);

    juce::String jucetxt;

    if (txtFile.openedOk())
    {
            jucetxt = goalsFile.loadFileAsString();

    }

    return jucetxt;
}

void CSVOperator::updateGoals(int habitID, std::string text)
{
    std::string idAsStr = std::to_string(habitID);
    juce::String filePath = juce::File::getCurrentWorkingDirectory().getFullPathName();
    filePath.toStdString();

    //juce::File goalsFile(filePath + "\\HabitsFiles\\Goals" + idAsStr + ".txt");
    //juce::FileOutputStream txtFile(goalsFile);


    //if (txtFile.openedOk())
    //{
    //    txtFile.writeString(text);
    //}

    // Builds the new entry to add into habits file
    std::string entry = text;

    std::ofstream txtFile;
    txtFile.open(".\\HabitsFiles\\Goals" + idAsStr + ".txt");
    if (txtFile.is_open())
    {
        DBG("Opened");
    }

    txtFile << entry;

    txtFile.close();


}