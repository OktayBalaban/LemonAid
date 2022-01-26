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

    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<juce::Label> juce__label;
    std::unique_ptr<juce::Label> juce__label2;
    std::unique_ptr<juce::TextButton> juce__textButton6;
    std::unique_ptr<juce::TextButton> juce__textButton7;
    std::unique_ptr<juce::TextButton> juce__textButton8;
    std::unique_ptr<juce::TextButton> juce__textButton2;
    std::unique_ptr<juce::TextButton> juce__textButton3;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (HabitForm)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

