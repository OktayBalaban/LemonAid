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

class HabitEntry
{
public:


    HabitEntry( int id, std::string name);

    int id; //Unique ID of the habit object
    std::string name;  //Name of the habit object



};