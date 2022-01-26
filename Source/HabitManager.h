/*
  ==============================================================================

    HabitManager.h
    Created: 24 Jan 2022 2:37:11pm
    Author:  oktay

  ==============================================================================
*/

#pragma once

#include "HabitComponent.h"
#include <vector>
#include "HabitEntry.h"
#include "CSVOperator.h"
#include <iostream>


//==============================================================================
/*
* HabitManager is the manager object responsible for managing the whole habit objects
*/
class HabitManager 
{
    public:
        HabitManager();
        void init();

        //======================= Habit Adding and Removing Functions ==============

        // Adding a new habit
        void addHabit(std::string name);
        // Removing a habit
        void removeHabit(int id);

        //======================== Habit Selection Functions =========================

        //Selects the habitComponent by assigning true to its isSelected property.
        void selectHabit(std::string habitID);

        // Clears habit selection and sets all isSelected properties of HabitComponents to false
        // It is very important to clear selections while hovering between the pages, as otherwise bugs may happen
        void clearHabitSelection();

        std::string selectedHabitId;


    private:
        std::vector<HabitEntry> habitsVector;          // Vector created by reading Habits.csv, NOT containing the habits objects but just id and names!
        std::vector<HabitComponent> habitComponents;   // Vector that is containing the whole habit components as objects



};
