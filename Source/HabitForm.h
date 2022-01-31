/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.1.4

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include <JuceHeader.h>
#include "HabitManager.h"
#include "CSVOperator.h"

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class HabitForm  :  public juce::Component,
                    public juce::Button::Listener

{
public:
    //==============================================================================



    HabitForm ();
    ~HabitForm() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    HabitManager habitManager;

    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;
    void buttonClicked (juce::Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    std::unique_ptr<juce::GroupComponent> addHabitGroupComponent;
    std::unique_ptr<juce::GroupComponent> removeHabitGroupComponent;

    std::unique_ptr<juce::Label> addHabitNameLabel;
    std::unique_ptr<juce::Label> removeHabitNameLabel;
    std::unique_ptr<juce::Label> addHabitNameInput;

    std::unique_ptr<juce::TextEditor> goals;
    std::unique_ptr<juce::TextButton> goalsEditButton;

   // Functions responsible for showing the habit buttons and assigning ids and names to them
   // Reset is necessary after every adding and removing operations
    void showHabitButtons();
    void resetHabitButtons();

    // Adding and removing habit functions
    void addNewHabit();
    void removeHabit();

    // GoalsFunctions
    void printGoals();


    // Returns the habitID assigned to the button which is toggled
    int returnButtonHabitId();

    // ==================== DailyTracker Functions ================================
    void readFileAndMakeDailyBtns();
    void setDailyBtn(juce::TextButton* btn, std::string dailyStatus, int bnd1, int bnd2, int bnd3, int bnd4, juce::String name); // Adds and colours daily tracker buttons
    void clearDailyButtons(); // Removes dailyTracker Buttons
    void makeDidAndDidNotButtons();
    void updateWithDids();    // Update dailyTracker file with "Yes" for selected days
    void updateWithDidNots(); //Update dailyTracker file with "No" for selected days
    void untoggleDailyButtons(); // Untoggle all dailybuttons


    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<juce::Label> juce__label;
    std::unique_ptr<juce::Label> juce__label2;
    std::unique_ptr<juce::TextButton> juce__textButton6;
    std::unique_ptr<juce::TextButton> juce__textButton7;
    std::unique_ptr<juce::TextButton> juce__textButton8;
    std::unique_ptr<juce::TextButton> juce__textButton2;
    std::unique_ptr<juce::TextButton> juce__textButton3;

    // Button Ids for habit buttons. Depending on the assigned habit, ids may be different for first, second and third habitIDs.
    // For example, the habit with the habitID 2 can be assigned to first habit button. -1 means no habits assigned yet.
    int firstHabitButtonId = -1;
    int secondHabitButtonId = -1;
    int thirdHabitButtonId = -1;

    // ============================ DailyTracker Buttons and Variable ==============================================================================
    std::vector<DailyTrackerEntry> trackerEntriesVector; // Vector to keep dailyTracker entries
    std::unique_ptr<juce::TextButton> didBtn;
    std::unique_ptr<juce::TextButton> didNotBtn;

    std::unique_ptr<juce::TextButton> dailyBtn0;
    std::unique_ptr<juce::TextButton> dailyBtn1;
    std::unique_ptr<juce::TextButton> dailyBtn2;
    std::unique_ptr<juce::TextButton> dailyBtn3;
    std::unique_ptr<juce::TextButton> dailyBtn4;
    std::unique_ptr<juce::TextButton> dailyBtn5;
    std::unique_ptr<juce::TextButton> dailyBtn6;
    std::unique_ptr<juce::TextButton> dailyBtn7;
    std::unique_ptr<juce::TextButton> dailyBtn8;
    std::unique_ptr<juce::TextButton> dailyBtn9;
    std::unique_ptr<juce::TextButton> dailyBtn10;
    std::unique_ptr<juce::TextButton> dailyBtn11;
    std::unique_ptr<juce::TextButton> dailyBtn12;
    std::unique_ptr<juce::TextButton> dailyBtn13;
    std::unique_ptr<juce::TextButton> dailyBtn14;
    std::unique_ptr<juce::TextButton> dailyBtn15;
    std::unique_ptr<juce::TextButton> dailyBtn16;
    std::unique_ptr<juce::TextButton> dailyBtn17;
    std::unique_ptr<juce::TextButton> dailyBtn18;
    std::unique_ptr<juce::TextButton> dailyBtn19;
    std::unique_ptr<juce::TextButton> dailyBtn20;
    std::unique_ptr<juce::TextButton> dailyBtn21;
    std::unique_ptr<juce::TextButton> dailyBtn22;
    std::unique_ptr<juce::TextButton> dailyBtn23;
    std::unique_ptr<juce::TextButton> dailyBtn24;
    std::unique_ptr<juce::TextButton> dailyBtn25;
    std::unique_ptr<juce::TextButton> dailyBtn26;
    std::unique_ptr<juce::TextButton> dailyBtn27;

    
    

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (HabitForm)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

