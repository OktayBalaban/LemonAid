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
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class ResourcesForm  : public juce::Component,
                       public juce::Button::Listener,
    public juce::ComboBox::Listener, public juce::TableListBoxModel
{
public:
    //==============================================================================
    ResourcesForm ();
    ~ResourcesForm() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;
    void buttonClicked (juce::Button* buttonThatWasClicked) override;
    void comboBoxChanged (juce::ComboBox* comboBoxThatHasChanged) override;
    void mouseUp(const juce::MouseEvent& mouseEvent);
    void mouseMove(const juce::MouseEvent& mouseEvent);
    void mouseExit(const juce::MouseEvent& mouseEvent);

    int getNumRows() override;
    void paintRowBackground(juce::Graphics&, int rowNumber, int width, int height, bool rowIsSelected) override;
    void paintCell(juce::Graphics&, int rowNumber, int columnId, int width, int height, bool rowIsSelected) override;
    void cellClicked(int rowNumber, int columnId, const juce::MouseEvent&);
    Component* refreshComponentForCell(int rowNumber, int columnId, bool isRowSelected, Component* exsitingComponentToUpdate) override;

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<juce::Label> juce__label2;
    std::unique_ptr<juce::TextButton> juce__textButton1;
    std::unique_ptr<juce::TextButton> juce__textButton2;
    std::unique_ptr<juce::ComboBox> juce__comboBox;
    std::unique_ptr<juce::ComboBox> juce__comboBox2;

    std::vector<std::vector<std::string>> resources;
    std::string filePath = juce::File::getCurrentWorkingDirectory().getFullPathName().toStdString();
    int index = 0;//for traversing resources

    bool urlToOpen = false;

    std::vector<std::vector<std::string>> comboBoxContents;
    juce::TableListBox tableComponent;
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ResourcesForm)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

