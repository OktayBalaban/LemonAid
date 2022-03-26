/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.1.5

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include <JuceHeader.h>
#include <fstream>
#include <iostream>
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class DiaryForm  : public juce::Component,
                   public juce::Button::Listener
{
public:
    //==============================================================================
    DiaryForm ();
    ~DiaryForm() override;

    //==============================================================================
    
    juce::String DiaryForm::loadDiary();
    void DiaryForm::updateDiary(std::string text);

    void paint (juce::Graphics& g) override;
    void resized() override;
    void buttonClicked (juce::Button* buttonThatWasClicked) override;



private:
    bool isEditing;

    //==============================================================================
    std::unique_ptr<juce::TextButton> juce__textButton1;
    std::unique_ptr<juce::Label> juce__label;
    std::unique_ptr<juce::TextEditor> juce__textEditor;
    std::unique_ptr<juce::TextEditor> juce__textEditor2;
    std::unique_ptr<juce::GroupComponent> juce__groupComponent;
    std::unique_ptr<juce::TextButton> juce__textButton2;
    std::unique_ptr<juce::TextEditor> juce__textEditor3;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DiaryForm)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

