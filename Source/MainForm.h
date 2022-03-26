/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.1.6

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include <JuceHeader.h>
#include "HelpForm.h"
#include "HabitForm.h"
#include "ResourcesForm.h"
#include "DiaryForm.h"

//[/Headers]



//==============================================================================

class MainForm  : public juce::Component,
                  public juce::Button::Listener
{
public:
    //==============================================================================
    MainForm ();
    ~MainForm() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    HabitManager habitManager;

    void setDailyLabels(juce::Label* lbl, std::string dailyStatus);
    void colorLabels(int numberOfHabits);

    void MainForm::readRandomTips();

    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;
    void buttonClicked (juce::Button* buttonThatWasClicked) override;



private:
    std::unique_ptr<HelpForm> newHelpWindow;
    std::unique_ptr<HabitForm> newHabitForm;
    std::unique_ptr<ResourcesForm> newResourcesForm;
    std::unique_ptr<DiaryForm> newDiaryForm;

    std::vector<DailyTrackerEntry> trackerEntriesVector; // Vector to keep dailyTracker entries
    std::vector<DailyTrackerEntry> trackerEntriesVector2;
    std::vector<DailyTrackerEntry> trackerEntriesVector3;

    std::vector<std::string> randomTips;

    //==============================================================================
    // Form buttons
    std::unique_ptr<juce::GroupComponent> juce__groupComponent2;
    std::unique_ptr<juce::TextButton> juce__textButton;
    std::unique_ptr<juce::TextButton> juce__textButton2;
    std::unique_ptr<juce::TextButton> juce__textButton3;
    std::unique_ptr<juce::TextButton> juce__textButton4;
    std::unique_ptr<juce::TextButton> juce__textButton5;
    std::unique_ptr<juce::Label> juce__label;
    std::unique_ptr<juce::Label> juce__label2;

    //The 3 habits button on main page
    std::unique_ptr<juce::GroupComponent> juce__groupComponent;
    std::unique_ptr<juce::TextButton> juce__textButton6;
    std::unique_ptr<juce::TextButton> juce__textButton7;
    std::unique_ptr<juce::TextButton> juce__textButton8;

    //here lables to track habits within 28 days, totally 84 labbels for 3 habits.
    std::unique_ptr<juce::Label> juce__label3;
    std::unique_ptr<juce::Label> juce__label4;
    std::unique_ptr<juce::Label> juce__label5;
    std::unique_ptr<juce::Label> juce__label6;
    std::unique_ptr<juce::Label> juce__label7;
    std::unique_ptr<juce::Label> juce__label8;
    std::unique_ptr<juce::Label> juce__label9;
    std::unique_ptr<juce::Label> juce__label10;
    std::unique_ptr<juce::Label> juce__label11;
    std::unique_ptr<juce::Label> juce__label12;
    std::unique_ptr<juce::Label> juce__label13;
    std::unique_ptr<juce::Label> juce__label14;
    std::unique_ptr<juce::Label> juce__label15;
    std::unique_ptr<juce::Label> juce__label16;
    std::unique_ptr<juce::Label> juce__label17;
    std::unique_ptr<juce::Label> juce__label18;
    std::unique_ptr<juce::Label> juce__label19;
    std::unique_ptr<juce::Label> juce__label20;
    std::unique_ptr<juce::Label> juce__label21;
    std::unique_ptr<juce::Label> juce__label22;
    std::unique_ptr<juce::Label> juce__label23;
    std::unique_ptr<juce::Label> juce__label24;
    std::unique_ptr<juce::Label> juce__label25;
    std::unique_ptr<juce::Label> juce__label26;
    std::unique_ptr<juce::Label> juce__label27;
    std::unique_ptr<juce::Label> juce__label28;
    std::unique_ptr<juce::Label> juce__label29;
    std::unique_ptr<juce::Label> juce__label30;
    std::unique_ptr<juce::Label> juce__label31;
    std::unique_ptr<juce::Label> juce__label32;
    std::unique_ptr<juce::Label> juce__label33;
    std::unique_ptr<juce::Label> juce__label34;
    std::unique_ptr<juce::Label> juce__label35;
    std::unique_ptr<juce::Label> juce__label36;
    std::unique_ptr<juce::Label> juce__label37;
    std::unique_ptr<juce::Label> juce__label38;
    std::unique_ptr<juce::Label> juce__label39;
    std::unique_ptr<juce::Label> juce__label40;
    std::unique_ptr<juce::Label> juce__label41;
    std::unique_ptr<juce::Label> juce__label42;
    std::unique_ptr<juce::Label> juce__label43;
    std::unique_ptr<juce::Label> juce__label44;
    std::unique_ptr<juce::Label> juce__label45;
    std::unique_ptr<juce::Label> juce__label46;
    std::unique_ptr<juce::Label> juce__label47;
    std::unique_ptr<juce::Label> juce__label48;
    std::unique_ptr<juce::Label> juce__label49;
    std::unique_ptr<juce::Label> juce__label50;
    std::unique_ptr<juce::Label> juce__label51;
    std::unique_ptr<juce::Label> juce__label52;
    std::unique_ptr<juce::Label> juce__label53;
    std::unique_ptr<juce::Label> juce__label54;
    std::unique_ptr<juce::Label> juce__label55;
    std::unique_ptr<juce::Label> juce__label56;
    std::unique_ptr<juce::Label> juce__label57;
    std::unique_ptr<juce::Label> juce__label58;
    std::unique_ptr<juce::Label> juce__label59;
    std::unique_ptr<juce::Label> juce__label60;
    std::unique_ptr<juce::Label> juce__label61;
    std::unique_ptr<juce::Label> juce__label62;
    std::unique_ptr<juce::Label> juce__label63;
    std::unique_ptr<juce::Label> juce__label64;
    std::unique_ptr<juce::Label> juce__label65;
    std::unique_ptr<juce::Label> juce__label66;
    std::unique_ptr<juce::Label> juce__label67;
    std::unique_ptr<juce::Label> juce__label68;
    std::unique_ptr<juce::Label> juce__label69;
    std::unique_ptr<juce::Label> juce__label70;
    std::unique_ptr<juce::Label> juce__label71;
    std::unique_ptr<juce::Label> juce__label72;
    std::unique_ptr<juce::Label> juce__label73;
    std::unique_ptr<juce::Label> juce__label74;
    std::unique_ptr<juce::Label> juce__label75;
    std::unique_ptr<juce::Label> juce__label76;
    std::unique_ptr<juce::Label> juce__label77;
    std::unique_ptr<juce::Label> juce__label78;
    std::unique_ptr<juce::Label> juce__label79;
    std::unique_ptr<juce::Label> juce__label80;
    std::unique_ptr<juce::Label> juce__label81;
    std::unique_ptr<juce::Label> juce__label82;
    std::unique_ptr<juce::Label> juce__label83;
    std::unique_ptr<juce::Label> juce__label84;
    std::unique_ptr<juce::Label> juce__label85;
    std::unique_ptr<juce::Label> juce__label86;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainForm)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

