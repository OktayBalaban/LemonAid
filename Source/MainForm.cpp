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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "MainForm.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainForm::MainForm ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    juce__textButton.reset (new juce::TextButton ("mainButton"));
    addAndMakeVisible (juce__textButton.get());
    juce__textButton->setButtonText (TRANS("MAIN PAGE"));
    juce__textButton->addListener (this);
    juce__textButton->setColour (juce::TextButton::buttonColourId, juce::Colours::brown);

    juce__textButton->setBounds (0, 0, 176, 40);

    juce__textButton2.reset (new juce::TextButton ("habitButton"));
    addAndMakeVisible (juce__textButton2.get());
    juce__textButton2->setButtonText (TRANS("MY HABITS"));
    juce__textButton2->addListener (this);
    juce__textButton2->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));

    juce__textButton2->setBounds (0, 41, 176, 40);

    juce__textButton3.reset (new juce::TextButton ("resourceButton"));
    addAndMakeVisible (juce__textButton3.get());
    juce__textButton3->setButtonText (TRANS("RESOURCES"));
    juce__textButton3->addListener (this);
    juce__textButton3->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));

    juce__textButton3->setBounds (0, 82, 176, 40);

    juce__textButton4.reset (new juce::TextButton ("diaryButton"));
    addAndMakeVisible (juce__textButton4.get());
    juce__textButton4->setButtonText (TRANS("MY DIARY"));
    juce__textButton4->addListener (this);
    juce__textButton4->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));

    juce__textButton4->setBounds (0, 123, 176, 40);

    juce__textButton5.reset (new juce::TextButton ("helpButton"));
    addAndMakeVisible (juce__textButton5.get());
    juce__textButton5->setButtonText (TRANS("HELP"));
    juce__textButton5->addListener (this);
    juce__textButton5->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));
    juce__textButton5->setColour (juce::TextButton::buttonOnColourId, juce::Colours::brown);
    juce__textButton5->setColour (juce::TextButton::textColourOnId, juce::Colours::grey);

    juce__textButton5->setBounds (0, 164, 176, 40);

    juce__label.reset (new juce::Label ("new label",
                                        TRANS("THIS IS WHERE THE LOGO GOES")));
    addAndMakeVisible (juce__label.get());
    juce__label->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label->setJustificationType (juce::Justification::centredLeft);
    juce__label->setEditable (false, false, false);
    juce__label->setColour (juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label->setBounds (208, 8, 360, 72);

    juce__label2.reset (new juce::Label ("new label",
                                         TRANS("RANDOM TIPS")));
    addAndMakeVisible (juce__label2.get());
    juce__label2->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label2->setJustificationType (juce::Justification::centred);
    juce__label2->setEditable (false, false, false);
    juce__label2->setColour (juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label2->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label2->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label2->setBounds (208, 344, 800, 264);

    juce__groupComponent.reset (new juce::GroupComponent ("new group",
                                                          TRANS("My Progress")));
    addAndMakeVisible (juce__groupComponent.get());
    juce__groupComponent->setColour (juce::GroupComponent::textColourId, juce::Colours::black);

    juce__groupComponent->setBounds (208, 88, 800, 248);

    juce__textButton6.reset (new juce::TextButton ("habit1button"));
    addAndMakeVisible (juce__textButton6.get());
    juce__textButton6->setButtonText (TRANS("Habit 1"));
    juce__textButton6->addListener (this);
    juce__textButton6->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));

    juce__textButton6->setBounds (224, 120, 128, 20);

    juce__textButton7.reset (new juce::TextButton ("habbit2button"));
    addAndMakeVisible (juce__textButton7.get());
    juce__textButton7->setButtonText (TRANS("Habit 2"));
    juce__textButton7->addListener (this);
    juce__textButton7->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));

    juce__textButton7->setBounds (224, 184, 128, 20);

    juce__textButton8.reset (new juce::TextButton ("habit3button"));
    addAndMakeVisible (juce__textButton8.get());
    juce__textButton8->setButtonText (TRANS("Habit 3"));
    juce__textButton8->addListener (this);
    juce__textButton8->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));

    juce__textButton8->setBounds (224, 248, 128, 20);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    setSize(1020, 620);
    newHelpWindow.reset(new HelpForm());
    newHelpWindow->setBounds(185, 90, 1020-185, 620-90);

    newHabitForm.reset(new HabitForm());
    newHabitForm->setBounds(185, 90, 1020 - 185, 620 - 90);

    newResourcesForm.reset(new ResourcesForm());
    newResourcesForm->setBounds(185, 90, 1020 - 185, 620 - 90);

    newDiaryForm.reset(new DiaryForm());
    newDiaryForm->setBounds(185, 90, 1020 - 185, 620 - 90);

    /*if (juce__textButton5->getToggleState())
    {
        juce__textButton5->setColour(juce::TextButton::buttonColourId, juce::Colour(0xffa52a2a));
    }*/
    //newHelpWindow
    //[/Constructor]
}

MainForm::~MainForm()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    juce__textButton = nullptr;
    juce__textButton2 = nullptr;
    juce__textButton3 = nullptr;
    juce__textButton4 = nullptr;
    juce__textButton5 = nullptr;
    juce__label = nullptr;
    juce__label2 = nullptr;
    juce__groupComponent = nullptr;
    juce__textButton6 = nullptr;
    juce__textButton7 = nullptr;
    juce__textButton8 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainForm::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colours::burlywood);

    //[UserPaint] Add your own custom painting code here..
    // g.fillAll (juce::Colours::darkgrey);
    /*g.setColour(juce::Colours::orange);

    juce::Line<float> line(juce::Point<float>(10, 10),
        juce::Point<float>(50, 50));

    g.drawLine(line, 2.0f);*/
    //[/UserPaint]
}

void MainForm::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MainForm::buttonClicked (juce::Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == juce__textButton.get())
    {
        //[UserButtonCode_juce__textButton] -- add your button handler code here..
        newHelpWindow->setVisible(false);
        newHabitForm->setVisible(false);
        newResourcesForm->setVisible(false);
        newDiaryForm->setVisible(false);

        juce__textButton->setColour(juce::TextButton::buttonColourId, juce::Colours::brown);
        juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton3->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton4->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton5->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));

        //[/UserButtonCode_juce__textButton]
    }
    else if (buttonThatWasClicked == juce__textButton2.get())
    {
        //[UserButtonCode_juce__textButton2] -- add your button handler code here..
        newHelpWindow->setVisible(false);
        newResourcesForm->setVisible(false);
        newDiaryForm->setVisible(false);

        addAndMakeVisible(newHabitForm.get());

        juce__textButton->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colours::brown);
        juce__textButton3->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton4->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton5->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));

        //[/UserButtonCode_juce__textButton2]
    }
    else if (buttonThatWasClicked == juce__textButton3.get())
    {
        //[UserButtonCode_juce__textButton3] -- add your button handler code here..
        newHelpWindow->setVisible(false);
        newHabitForm->setVisible(false);
        newDiaryForm->setVisible(false);

        addAndMakeVisible(newResourcesForm.get());

        juce__textButton->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton3->setColour(juce::TextButton::buttonColourId, juce::Colours::brown);
        juce__textButton4->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton5->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        //[/UserButtonCode_juce__textButton3]
    }
    else if (buttonThatWasClicked == juce__textButton4.get())
    {
        //[UserButtonCode_juce__textButton4] -- add your button handler code here..
        newHelpWindow->setVisible(false);
        newHabitForm->setVisible(false);
        newResourcesForm->setVisible(false);

        addAndMakeVisible(newDiaryForm.get());

        juce__textButton->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton3->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton4->setColour(juce::TextButton::buttonColourId, juce::Colours::brown);
        juce__textButton5->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        //[/UserButtonCode_juce__textButton4]
    }
    else if (buttonThatWasClicked == juce__textButton5.get())
    {
        //[UserButtonCode_juce__textButton5] -- add your button handler code here..
        newHabitForm->setVisible(false);
        newResourcesForm->setVisible(false);
        newDiaryForm->setVisible(false);

        addAndMakeVisible(newHelpWindow.get());

        juce__textButton->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton3->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton4->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
        juce__textButton5->setColour(juce::TextButton::buttonColourId, juce::Colours::brown);

        //[/UserButtonCode_juce__textButton5]
    }
    else if (buttonThatWasClicked == juce__textButton6.get())
    {
        //[UserButtonCode_juce__textButton6] -- add your button handler code here..
        //[/UserButtonCode_juce__textButton6]
    }
    else if (buttonThatWasClicked == juce__textButton7.get())
    {
        //[UserButtonCode_juce__textButton7] -- add your button handler code here..
        //[/UserButtonCode_juce__textButton7]
    }
    else if (buttonThatWasClicked == juce__textButton8.get())
    {
        //[UserButtonCode_juce__textButton8] -- add your button handler code here..
        //[/UserButtonCode_juce__textButton8]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainForm" componentName=""
                 parentClasses="public juce::Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffdeb887"/>
  <TEXTBUTTON name="mainButton" id="b4928c7fe436c93a" memberName="juce__textButton"
              virtualName="" explicitFocusOrder="0" pos="0 0 176 40" bgColOff="ffa52a2a"
              buttonText="MAIN PAGE" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="habitButton" id="d756c9f12ab82f88" memberName="juce__textButton2"
              virtualName="" explicitFocusOrder="0" pos="0 41 176 40" bgColOff="ff156f1a"
              buttonText="MY HABITS" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="resourceButton" id="c37a3da91ae48231" memberName="juce__textButton3"
              virtualName="" explicitFocusOrder="0" pos="0 82 176 40" bgColOff="ff156f1a"
              buttonText="RESOURCES" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="diaryButton" id="441d070cea698512" memberName="juce__textButton4"
              virtualName="" explicitFocusOrder="0" pos="0 123 176 40" bgColOff="ff156f1a"
              buttonText="MY DIARY" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="helpButton" id="69cddfdd41a7a903" memberName="juce__textButton5"
              virtualName="" explicitFocusOrder="0" pos="0 164 176 40" bgColOff="ff156f1a"
              bgColOn="ffa52a2a" textColOn="ff808080" buttonText="HELP" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="375de5adb1b9e260" memberName="juce__label"
         virtualName="" explicitFocusOrder="0" pos="208 8 360 72" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="THIS IS WHERE THE LOGO GOES"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
         italic="0" justification="33"/>
  <LABEL name="new label" id="f55f427d84137a4f" memberName="juce__label2"
         virtualName="" explicitFocusOrder="0" pos="208 344 800 264" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="RANDOM TIPS" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <GROUPCOMPONENT name="new group" id="c79ae34d045a566a" memberName="juce__groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="208 88 800 248" textcol="ff000000"
                  title="My Progress"/>
  <TEXTBUTTON name="habit1button" id="f1dc085719bb76aa" memberName="juce__textButton6"
              virtualName="" explicitFocusOrder="0" pos="224 120 128 20" bgColOff="ff156f1a"
              buttonText="Habit 1" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="habbit2button" id="6f7db5d7b2d83315" memberName="juce__textButton7"
              virtualName="" explicitFocusOrder="0" pos="224 184 128 20" bgColOff="ff156f1a"
              buttonText="Habit 2" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="habit3button" id="4a189e87cec31944" memberName="juce__textButton8"
              virtualName="" explicitFocusOrder="0" pos="224 248 128 20" bgColOff="ff156f1a"
              buttonText="Habit 3" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

