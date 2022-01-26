/*
  ==============================================================================

    HabitManager.cpp
    Created: 24 Jan 2022 2:37:11pm
    Author:  oktay

  ==============================================================================
*/

#include "HabitManager.h"


HabitManager::HabitManager()
{
}

//==============================================================================
void HabitManager::init()
{
    //Getting the id and names of the habits stored in the habits.csv
    habitsVector = CSVOperator::readHabitsCSV();
    
    //Populating the habitComponents vector by creating the HabitComponent objects
    for (HabitEntry& h : habitsVector)
    {
        habitComponents.push_back(HabitComponent(h.id, h.name));
    }

    //There is no selected habit initially
    std::string selectedHabitId = "";

    //HERE, YOU CAN WRITE FUNCTIONS TO OPERATE SUCH AS ADDING AND REMOVING

}

//Adding new habits
void HabitManager::addHabit(std::string name)
{
    // Gets an available habit ID
    int habitID = CSVOperator::returnAvailableHabitId();
    std::string habitIdAsString = std::to_string(habitID);

    // Create new habit component in habitComponents Vector
    habitComponents.push_back(HabitComponent(habitID, name));

    // Appending the new habit to the csv file
    CSVOperator::addNewHabit(habitIdAsString, name);

    //Refreshing habitsVector
    habitsVector = CSVOperator::readHabitsCSV();



}

// Removes a habit
void HabitManager::removeHabit(int id)
{
    std::string habitIdAsString = std::to_string(id);
    std::string habitName = "";
    int indexCounter = -1;

    //----------------------Vector Rearrangments----------------------------------

    //Finding the name of the habit from its Id, also incrementing indexCounter
    for (HabitEntry& h : habitsVector)
    {
        indexCounter++;

        if (h.id == id)
        {
            habitName = h.name;
            break;
        }
    }

    //Checking if the ID exists
    if (habitName == "")
    {
        std::cout << "Habit not found";
        return;
    }

    // Deleting the habitEntry by its ID
    habitsVector.erase(habitsVector.begin() + indexCounter);

    //Repopulating the HabitComponents
    habitComponents.clear();
    for (HabitEntry& h : habitsVector)
    {
        habitComponents.push_back(HabitComponent(h.id, h.name));
    }
    for (HabitEntry& h : habitsVector)
    {
        habitComponents.push_back(HabitComponent(h.id, h.name));
    }


    // Overriding the habits file
    std::ofstream habitsFile(".\\HabitsFiles\\habits.csv");

    std::string entryToBeAdded;
    std::string habitID;

    for (HabitEntry& h : habitsVector)
    {
        habitID = std::to_string(h.id);
        entryToBeAdded = habitID + "," + h.name + "\n";
        habitsFile << entryToBeAdded;
    }

    habitsFile.close();

    //------------File Deletions----------------------------------------------------
    std::string dailyTrackerFileToBeDeleted = ".\\HabitsFiles\\DailyTrack" + habitIdAsString + ".csv";
    std::string goalsFileToBeDeleted = ".\\HabitsFiles\\Goals" + habitIdAsString + ".csv";

    const char* pathTracks = dailyTrackerFileToBeDeleted.c_str();
    const char* pathGoals = goalsFileToBeDeleted.c_str();
        
    std::remove(pathTracks);
    std::remove(pathGoals);
    //-------------------------------------------------------------------------------

}

//Selects the habitComponent by assigning true to its isSelected property.
void HabitManager::selectHabit(std::string habitID)
{
    int idAsInt = std::stoi(habitID);

    for (HabitComponent& h : habitComponents)
    {
        if (h.habitID = idAsInt)
        {
            h.isSelected = true;
            selectedHabitId = std::to_string(h.habitID); 
            break;
        }
    }
}

// Clears habit selection and sets all isSelected properties of HabitComponents to false
// It is very important to clear selections while hovering between the pages, as otherwise bugs may happen
void HabitManager::clearHabitSelection()
{
    // If no habit is selected, there is nothing to do
    if (selectedHabitId == "")
    {
        return;
    }

    int idAsInt = std::stoi(selectedHabitId);

    for (HabitComponent& h : habitComponents)
    {
        if (h.habitID = idAsInt)
        {
            h.isSelected = false;
            selectedHabitId = "";
            break;
        }
    }


}