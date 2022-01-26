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

        // Adding a new habit
        void addHabit(std::string name);

        // Removing a habit
        void removeHabit(int id);

    private:
        std::vector<HabitEntry> habitsVector;          // Vector created by reading Habits.csv, NOT containing the habits objects but just id and names!
        std::vector<HabitComponent> habitComponents;   // Vector that is containing the whole habit components as objects



};
