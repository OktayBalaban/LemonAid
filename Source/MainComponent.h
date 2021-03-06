#pragma once

#include <JuceHeader.h>
#include "MainForm.h"
#include "HelpForm.h"
#include "HabitManager.h"
#include "DiaryForm.h"
#include "ResourcesForm.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent  : public juce::Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    HabitManager habitManager;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
