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

#include "HabitForm.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
HabitForm::HabitForm ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    juce__label.reset (new juce::Label ("new label", TRANS("MY HABITS")));
    addAndMakeVisible (juce__label.get());
    juce__label->setFont (juce::Font (20.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
    juce__label->setJustificationType (juce::Justification::centred);
    juce__label->setEditable (false, false, false);
    juce__label->setColour (juce::Label::backgroundColourId, juce::Colour (0x00000000));
    juce__label->setColour (juce::Label::textColourId, juce::Colours::black);
    juce__label->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label->setBounds (16, 8, 150, 32);

    juce__label2.reset (new juce::Label ("new label", TRANS("GOALS")));
    addAndMakeVisible (juce__label2.get());
    juce__label2->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label2->setJustificationType (juce::Justification::topLeft);
    juce__label2->setEditable (false, false, false);
    juce__label2->setColour (juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label2->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label2->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));
    juce__label2->setBounds (208, 24, 552, 488);

    juce__textButton6.reset (new juce::TextButton ("habit1button"));
    juce__textButton6->setClickingTogglesState(true);
    juce__textButton6->setButtonText (TRANS("Habit 1"));
    juce__textButton6->addListener (this);
    juce__textButton6->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));
    juce__textButton6->setBounds (8, 56, 168, 40);

    juce__textButton7.reset (new juce::TextButton ("habbit2button"));
    juce__textButton7->setClickingTogglesState(true);
    juce__textButton7->addListener (this);
    juce__textButton7->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));
    juce__textButton7->setBounds (8, 104, 168, 40);

    juce__textButton8.reset (new juce::TextButton ("habit3button"));
    juce__textButton8->setClickingTogglesState(true);
    juce__textButton8->addListener (this);
    juce__textButton8->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));
    juce__textButton8->setBounds (8, 152, 168, 40);

    juce__textButton2.reset (new juce::TextButton ("habit1button"));
    addAndMakeVisible (juce__textButton2.get());
    juce__textButton2->setButtonText (TRANS("ADD HABIT"));
    juce__textButton2->addListener (this);
    juce__textButton2->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));

    juce__textButton2->setBounds (11, 300, 168, 40);

    juce__textButton3.reset (new juce::TextButton ("habbit2button"));
    addAndMakeVisible (juce__textButton3.get());
    juce__textButton3->setButtonText (TRANS("REMOVE HABIT"));
    juce__textButton3->addListener (this);
    juce__textButton3->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));

    juce__textButton3->setBounds (11, 463, 168, 40);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    
    habitManager.init(); //Initializing the habitManager object
    showHabitButtons();


    // -------------Add Habit Group Container-----------------------------------------------

    // Title Text
    addHabitNameLabel.reset(new juce::Label("new label", TRANS("Title:")));
    addAndMakeVisible(addHabitNameLabel.get());
    addHabitNameLabel->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Bold"));
    addHabitNameLabel->setJustificationType(juce::Justification::bottomLeft);
    addHabitNameLabel->setEditable(false, false, false);
    addHabitNameLabel->setColour(juce::Label::backgroundColourId, juce::Colour(0x00000000));
    addHabitNameLabel->setColour(juce::Label::textColourId, juce::Colours::black);
    addHabitNameLabel->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    addHabitNameLabel->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));
    addHabitNameLabel->setBounds(11, 210, 150, 32);



    // Name Input Field
    addHabitNameInput.reset(new juce::Label("new label", TRANS("Default Name")));
    addAndMakeVisible(addHabitNameInput.get());
    addHabitNameInput->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Bold"));
    addHabitNameInput->setJustificationType(juce::Justification::centredLeft);
    addHabitNameInput->setEditable(true, false, false);
    addHabitNameInput->setColour(juce::Label::backgroundColourId, juce::Colours::goldenrod);
    addHabitNameInput->setColour(juce::Label::textColourId, juce::Colours::black);
    addHabitNameInput->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    addHabitNameInput->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));
    addHabitNameInput->setBounds(11, 250, 170, 18);


    // Container Area
    addHabitGroupComponent.reset(new juce::GroupComponent("new group", TRANS("Add New Habit")));
    addAndMakeVisible(addHabitGroupComponent.get());
    addHabitGroupComponent->setColour(juce::GroupComponent::textColourId, juce::Colours::black);
    addHabitGroupComponent->setBounds(2, 200, 190, 150);

    // -------------Remove Habit Group Container--------------------------------------------
    removeHabitGroupComponent.reset(new juce::GroupComponent("new group", TRANS("Remove a Habit")));
    addAndMakeVisible(removeHabitGroupComponent.get());
    removeHabitGroupComponent->setColour(juce::GroupComponent::textColourId, juce::Colours::black);

    removeHabitGroupComponent->setBounds(2, 360, 190, 150);

    //------------- Goals Area ----------------------------------------------------------------
    // Goals Text, text's itself comes from printGoals function
    goals.reset(new juce::TextEditor(""));
    addAndMakeVisible(goals.get());
    goals->setReadOnly(true);    // Initially,it is read-only until edit mode opens
    goals->setBounds(220, 50, 520, 150);

    goalsEditButton.reset(new juce::TextButton("Edit Button", TRANS("Edit Goals")));
    addAndMakeVisible(goalsEditButton.get());
    goalsEditButton->addListener(this);
    goalsEditButton->setBounds(620, 202, 120, 30);
    goalsEditButton->setToggleable(true);
    goalsEditButton->setToggleState(false, false);
    



    //[/Constructor]
}

HabitForm::~HabitForm()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    juce__label = nullptr;
    juce__label2 = nullptr;
    juce__textButton6 = nullptr;
    juce__textButton7 = nullptr;
    juce__textButton8 = nullptr;
    juce__textButton2 = nullptr;
    juce__textButton3 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void HabitForm::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colours::burlywood);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void HabitForm::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void HabitForm::buttonClicked (juce::Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == juce__textButton6.get())
    {
        //[UserButtonCode_juce__textButton6] -- add your button handler code here..

        // Sets other buttons off if they are on
        if (juce__textButton7->getToggleState())
        {
            juce__textButton7->setToggleState(false, false);
        }
        if (juce__textButton8->getToggleState())
        {
            juce__textButton8->setToggleState(false, false);
        }

        // Reset editButton first
        goalsEditButton->setToggleState(false, false);
        goals->setReadOnly(true);
        goalsEditButton->setButtonText("Edit Button");

        printGoals();

        //[/UserButtonCode_juce__textButton6]
    }
    else if (buttonThatWasClicked == juce__textButton7.get())
    {
        //[UserButtonCode_juce__textButton7] -- add your button handler code here..;

        // Sets other buttons off if they are on
        if (juce__textButton6->getToggleState())
        {
            juce__textButton6->setToggleState(false, false);
        }
        if (juce__textButton8->getToggleState())
        {
            juce__textButton8->setToggleState(false, false);
        }

        // Reset editButton first
        goalsEditButton->setToggleState(false, false);
        goals->setReadOnly(true);
        goalsEditButton->setButtonText("Edit Button");

        printGoals();

        //[/UserButtonCode_juce__textButton7]
    }
    else if (buttonThatWasClicked == juce__textButton8.get())
    {
        //[UserButtonCode_juce__textButton8] -- add your button handler code here..

        // Sets other buttons off if they are on
        if (juce__textButton7->getToggleState())
        {
            juce__textButton7->setToggleState(false, false);
        }
        if (juce__textButton6->getToggleState())
        {
            juce__textButton6->setToggleState(false, false);
        }

        // Reset editButton first
        goalsEditButton->setToggleState(false, false);
        goals->setReadOnly(true);
        goalsEditButton->setButtonText("Edit Button");

        printGoals();

        //[/UserButtonCode_juce__textButton8]
    }


    // Add Habit Button
    else if (buttonThatWasClicked == juce__textButton2.get())
    {
        //[UserButtonCode_juce__textButton2] -- add your button handler code here..
        
        addNewHabit();

        //[/UserButtonCode_juce__textButton2]
    }

    // Remove Habit Button
    else if (buttonThatWasClicked == juce__textButton3.get())
    {
        //[UserButtonCode_juce__textButton3] -- add your button handler code here..

        removeHabit();
        
        // Fixes a bug with staying at the deleted goals
        printGoals();

        //[/UserButtonCode_juce__textButton3]
    }


    //[UserbuttonClicked_Post]
    
    else if (buttonThatWasClicked == goalsEditButton.get())
    {
        int habitId = returnButtonHabitId();

        // If no habits is selected, return without doing anything but only reset edit button.
        if (habitId == -1)
        {
            goalsEditButton->setToggleState(false, false);
            goals->setReadOnly(true);
            goalsEditButton->setButtonText("Edit Button");
            return;

        }

        if (!goalsEditButton->getToggleState())
        {
            goalsEditButton->setToggleState(true, false);
            goals->setReadOnly(false);
            goalsEditButton->setButtonText("Save Changes");
        }

        else if (goalsEditButton->getToggleState())
        {
            goalsEditButton->setToggleState(false, false);
            goals->setReadOnly(true);
            goalsEditButton->setButtonText("Edit Goals");

            juce::String goalsJuceStr = goals->getText();
            std::string goalsStdStr = goalsJuceStr.toStdString();



            CSVOperator::updateGoals(habitId, goalsStdStr);
        }
    }

    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void HabitForm::addNewHabit()
{
    //Checking the number of habits. If there are less than 3, then proceeds for adding operations
    if (habitManager.habitsVector.size() < 3)
    {
        juce::String nameInput = addHabitNameInput.get()->getText();
        habitManager.addHabit(nameInput.toStdString());
    }

    resetHabitButtons();
}

void HabitForm::removeHabit()
{
    // Check toggle states and if toggled (selected), delete the habit
    if (juce__textButton6->getToggleState())
    {
        habitManager.removeHabit(firstHabitButtonId);
    }
    else if (juce__textButton7->getToggleState())
    {
        habitManager.removeHabit(secondHabitButtonId);
    }
    else if (juce__textButton8->getToggleState())
    {
        habitManager.removeHabit(thirdHabitButtonId);
    }

    resetHabitButtons();
}


//Responsible for showing the habit buttons and assigning ids and names to them
void HabitForm::showHabitButtons()
{
    //Will be used to position buttons
    int rowCounter = 0;

    //------Adding and making visible the buttons according to the habitsVector in habitManager object-------

    //If there are no habits, just return without doing anything
    if (habitManager.habitsVector.size() == 0)
    {
        return;
    }

    // According to the number of habits, add buttons. Also assigns ids to habitButtons.
    if (habitManager.habitsVector.size() == 1)
    {
        addAndMakeVisible(juce__textButton6.get());
        juce__textButton6->setButtonText(TRANS(habitManager.habitsVector[0].name));
        firstHabitButtonId = habitManager.habitsVector[0].id;
    }
    else if (habitManager.habitsVector.size() == 2)
    {
        addAndMakeVisible(juce__textButton6.get());
        juce__textButton6->setButtonText(TRANS(habitManager.habitsVector[0].name));
        firstHabitButtonId = habitManager.habitsVector[0].id;

        addAndMakeVisible(juce__textButton7.get());
        juce__textButton7->setButtonText(TRANS(habitManager.habitsVector[1].name));
        secondHabitButtonId = habitManager.habitsVector[1].id;
    }
    else if (habitManager.habitsVector.size() == 3)
    {
        addAndMakeVisible(juce__textButton6.get());
        juce__textButton6->setButtonText(TRANS(habitManager.habitsVector[0].name));
        firstHabitButtonId = habitManager.habitsVector[0].id;

        addAndMakeVisible(juce__textButton7.get());
        juce__textButton7->setButtonText(TRANS(habitManager.habitsVector[1].name));
        secondHabitButtonId = habitManager.habitsVector[1].id;

        addAndMakeVisible(juce__textButton8.get());
        juce__textButton8->setButtonText(TRANS(habitManager.habitsVector[2].name));
        thirdHabitButtonId = habitManager.habitsVector[2].id;
    }

}

void HabitForm::resetHabitButtons()
{
    removeChildComponent(juce__textButton6.get());
    removeChildComponent(juce__textButton7.get());
    removeChildComponent(juce__textButton8.get());
    showHabitButtons();
}

void HabitForm::printGoals()
{

    int habitId = returnButtonHabitId();

    // If no habits is selected, return without doing anything.
    if (habitId == -1)
    {
        return;
    }

    // Reads the goals file
    juce::String goalsString = habitManager.readAndReturnGoals(habitId);

    // Show the text
    goals->setText(goalsString, false);



}

int HabitForm::returnButtonHabitId()
{
    int habitId = -1;


    if (juce__textButton6->getToggleState())
    {
        habitId = firstHabitButtonId;
    }
    else if (juce__textButton7->getToggleState())
    {
        habitId = secondHabitButtonId;
    }
    else if (juce__textButton8->getToggleState())
    {
        habitId = thirdHabitButtonId;
    }

    return habitId;


}


//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="HabitForm" componentName=""
                 parentClasses="public juce::Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffdeb887"/>
  <LABEL name="new label" id="f95564c788d4080f" memberName="juce__label"
         virtualName="" explicitFocusOrder="0" pos="16 8 150 32" bkgCol="0"
         textCol="ff000000" edTextCol="ff000000" edBkgCol="0" labelText="MY HABITS"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="20.0" kerning="0.0" bold="1"
         italic="0" justification="36" typefaceStyle="Bold"/>
  <LABEL name="new label" id="f55f427d84137a4f" memberName="juce__label2"
         virtualName="" explicitFocusOrder="0" pos="208 24 552 488" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="Habit placeholder"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
         italic="0" justification="9"/>
  <TEXTBUTTON name="habit1button" id="f1dc085719bb76aa" memberName="juce__textButton6"
              virtualName="" explicitFocusOrder="0" pos="8 56 168 40" bgColOff="ff156f1a"
              buttonText="Habit 1" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="habbit2button" id="6f7db5d7b2d83315" memberName="juce__textButton7"
              virtualName="" explicitFocusOrder="0" pos="8 104 168 40" bgColOff="ff156f1a"
              buttonText="Habit 2" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="habit3button" id="4a189e87cec31944" memberName="juce__textButton8"
              virtualName="" explicitFocusOrder="0" pos="8 152 168 40" bgColOff="ff156f1a"
              buttonText="Habit 3" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="habit1button" id="295d6415c6794adb" memberName="juce__textButton2"
              virtualName="" explicitFocusOrder="0" pos="11 415 168 40" bgColOff="ff156f1a"
              buttonText="ADD HABIT" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="habbit2button" id="91e591ae62b82ecb" memberName="juce__textButton3"
              virtualName="" explicitFocusOrder="0" pos="11 463 168 40" bgColOff="ff156f1a"
              buttonText="REMOVE HABIT" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

