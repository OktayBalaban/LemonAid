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

    juce__label2.reset (new juce::Label ("new label", TRANS("SELECT HABIT")));
    addAndMakeVisible(juce__label2.get());
    juce__label2->setFont (juce::Font (60.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label2->setJustificationType (juce::Justification::centred);
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
    goals->setReadOnly(true);    // Initially,it is read-only until edit mode opens
    goals->setBounds(220, 50, 520, 150);

    goalsEditButton.reset(new juce::TextButton("Edit Button", TRANS("Edit Goals")));
    goalsEditButton->addListener(this);
    goalsEditButton->setBounds(620, 202, 120, 30);
    goalsEditButton->setToggleable(true);
    goalsEditButton->setToggleState(false, false);
    goalsEditButton->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));

    // Daily Tracker Buttons Declaration
    dailyBtn0.reset(new juce::TextButton(""));
    dailyBtn1.reset(new juce::TextButton(""));
    dailyBtn2.reset(new juce::TextButton(""));
    dailyBtn3.reset(new juce::TextButton(""));
    dailyBtn4.reset(new juce::TextButton(""));
    dailyBtn5.reset(new juce::TextButton(""));
    dailyBtn6.reset(new juce::TextButton(""));
    dailyBtn7.reset(new juce::TextButton(""));
    dailyBtn8.reset(new juce::TextButton(""));
    dailyBtn9.reset(new juce::TextButton(""));
    dailyBtn10.reset(new juce::TextButton(""));
    dailyBtn11.reset(new juce::TextButton(""));
    dailyBtn12.reset(new juce::TextButton(""));
    dailyBtn13.reset(new juce::TextButton(""));
    dailyBtn14.reset(new juce::TextButton(""));
    dailyBtn15.reset(new juce::TextButton(""));
    dailyBtn16.reset(new juce::TextButton(""));
    dailyBtn17.reset(new juce::TextButton(""));
    dailyBtn18.reset(new juce::TextButton(""));
    dailyBtn19.reset(new juce::TextButton(""));
    dailyBtn20.reset(new juce::TextButton(""));
    dailyBtn21.reset(new juce::TextButton(""));
    dailyBtn22.reset(new juce::TextButton(""));
    dailyBtn23.reset(new juce::TextButton(""));
    dailyBtn24.reset(new juce::TextButton(""));
    dailyBtn25.reset(new juce::TextButton(""));
    dailyBtn26.reset(new juce::TextButton(""));
    dailyBtn27.reset(new juce::TextButton(""));

    didBtn.reset(new juce::TextButton(""));
    didBtn->addListener(this);
    didBtn->setBounds(620, 300, 120, 30);
    didBtn->setButtonText("I DID!");
    didBtn->setColour(juce::TextButton::buttonColourId, juce::Colours::green);

    didNotBtn.reset(new juce::TextButton(""));
    didNotBtn->addListener(this);
    didNotBtn->setBounds(620, 360, 120, 30);
    didNotBtn->setButtonText("I could not");
    didNotBtn->setColour(juce::TextButton::buttonColourId, juce::Colours::red);

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
        goalsEditButton->setButtonText("Edit Goals");

        // Clear goals components
        removeChildComponent(goals.get());
        removeChildComponent(goalsEditButton.get());

        // Untoggle dailyButtons
        untoggleDailyButtons();

        // Get Buttons again
        readFileAndMakeDailyBtns();

        // Print goals again
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
        goalsEditButton->setButtonText("Edit Goals");

        // Clear goals components
        removeChildComponent(goals.get());
        removeChildComponent(goalsEditButton.get());

        // Untoggle dailyButtons
        untoggleDailyButtons();

        // Get Buttons again
        readFileAndMakeDailyBtns();

        // Print goals again
        printGoals();


        //[/UserButtonCode_juce__textButton7]
    }
    else if (buttonThatWasClicked == juce__textButton8.get())
    {
        //[UserButtonCode_juce__textButton8] -- add your button handler code here.

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
        goalsEditButton->setButtonText("Edit Goals");

        // Clear goals components
        removeChildComponent(goals.get());
        removeChildComponent(goalsEditButton.get());

        // Untoggle dailyButtons
        untoggleDailyButtons();

        // Get Buttons again
        readFileAndMakeDailyBtns();

        // Print goals again
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
        if (habitManager.habitsVector.size() == 3 && juce__textButton6->getToggleState() == false &&
            juce__textButton7->getToggleState() == false && juce__textButton8->getToggleState() == false)
        {
            juce::AlertWindow::showMessageBoxAsync(juce::AlertWindow::WarningIcon,
                "Warning",
                "Please select the habit you wish to remove!");
        }
        else if (habitManager.habitsVector.size() == 2 && juce__textButton6->getToggleState() == false &&
            juce__textButton7->getToggleState() == false)
        {
            juce::AlertWindow::showMessageBoxAsync(juce::AlertWindow::WarningIcon,
                "Warning",
                "Please select the habit you wish to remove!");
        }
        else if (habitManager.habitsVector.size() == 1 && juce__textButton6->getToggleState() == false)
        {
            juce::AlertWindow::showMessageBoxAsync(juce::AlertWindow::WarningIcon,
                "Warning",
                "Please select the habit you wish to remove!");
        }
        else if (habitManager.habitsVector.size() == 0)
        {
            juce::AlertWindow::showMessageBoxAsync(juce::AlertWindow::WarningIcon,
                "Warning",
                "Please select the habit you wish to remove!");
        }
        else
        {
            removeHabit();
        }
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
            goalsEditButton->setButtonText("Edit Goals");
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

    else if (buttonThatWasClicked == didBtn.get())
    {
        updateWithDids();
    }

    else if (buttonThatWasClicked == didNotBtn.get())
    {
        updateWithDidNots();
    }

    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void HabitForm::addNewHabit()
{
    //check if we have reached the max number of habits (3) and show alert message if we have
    if (habitManager.habitsVector.size() == 3)
    {
        juce::AlertWindow::showMessageBoxAsync(juce::AlertWindow::WarningIcon,
            "Warning",
            "You can only track 3 habits at a time!");
    }
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

    // Write Select Habit first. Will disappear if a habit is selected, will stay if no habit is selected.
    juce__label2->setText(TRANS("SELECT HABIT"), juce::NotificationType::dontSendNotification);

    // If no habits is selected, return without doing anything.
    if (habitId == -1)
    {
        return;
    }

    // Make goals components appear again
    addAndMakeVisible(goals.get());
    addAndMakeVisible(goalsEditButton.get());

    // Clear Select Habit Text
    juce__label2->setText(TRANS(""), juce::NotificationType::dontSendNotification);


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


void HabitForm::readFileAndMakeDailyBtns()
{

    // Remove existing buttons first
    clearDailyButtons();

    //Take the id of the habit from selected button
    int habitId = returnButtonHabitId();
    
    if (habitId == -1)
    {
        //return without doing anything if no habit is selected
        return;
    }
    trackerEntriesVector = CSVOperator::readDailyTrackerCSV(habitId);
    std::vector<std::string> statusVector = CSVOperator::returnDailyStatusVector(trackerEntriesVector);

    int widthCounter = 0;

    int trackButtonCounter = 0;

    std::string cont = statusVector[0];

    // Add did and did not buttons
    makeDidAndDidNotButtons();
    
    setDailyBtn(dailyBtn0.get(), statusVector[0], 230, 230, 40, 60, juce::String(1));
    setDailyBtn(dailyBtn1.get(), statusVector[1], 280, 230, 40, 60, juce::String(2));
    setDailyBtn(dailyBtn2.get(), statusVector[2], 330, 230, 40, 60, juce::String(3));
    setDailyBtn(dailyBtn3.get(), statusVector[3], 380, 230, 40, 60, juce::String(4));
    setDailyBtn(dailyBtn4.get(), statusVector[4], 430, 230, 40, 60, juce::String(5));
    setDailyBtn(dailyBtn5.get(), statusVector[5], 480, 230, 40, 60, juce::String(6));
    setDailyBtn(dailyBtn6.get(), statusVector[6], 530, 230, 40, 60, juce::String(7));
    setDailyBtn(dailyBtn7.get(), statusVector[7], 230, 300, 40, 60, juce::String(8));
    setDailyBtn(dailyBtn8.get(), statusVector[8], 280, 300, 40, 60, juce::String(9));
    setDailyBtn(dailyBtn9.get(), statusVector[9], 330, 300, 40, 60, juce::String(10));
    setDailyBtn(dailyBtn10.get(), statusVector[10], 380, 300, 40, 60, juce::String(11));
    setDailyBtn(dailyBtn11.get(), statusVector[11], 430, 300, 40, 60, juce::String(12));
    setDailyBtn(dailyBtn12.get(), statusVector[12], 480, 300, 40, 60, juce::String(13));
    setDailyBtn(dailyBtn13.get(), statusVector[13], 530, 300, 40, 60, juce::String(14));
    setDailyBtn(dailyBtn14.get(), statusVector[14], 230, 370, 40, 60, juce::String(15));
    setDailyBtn(dailyBtn15.get(), statusVector[15], 280, 370, 40, 60, juce::String(16));
    setDailyBtn(dailyBtn16.get(), statusVector[16], 330, 370, 40, 60, juce::String(17));
    setDailyBtn(dailyBtn17.get(), statusVector[17], 380, 370, 40, 60, juce::String(18));
    setDailyBtn(dailyBtn18.get(), statusVector[18], 430, 370, 40, 60, juce::String(19));
    setDailyBtn(dailyBtn19.get(), statusVector[19], 480, 370, 40, 60, juce::String(20));
    setDailyBtn(dailyBtn20.get(), statusVector[20], 530, 370, 40, 60, juce::String(21));
    setDailyBtn(dailyBtn21.get(), statusVector[21], 230, 440, 40, 60, juce::String(22));
    setDailyBtn(dailyBtn22.get(), statusVector[22], 280, 440, 40, 60, juce::String(23));
    setDailyBtn(dailyBtn23.get(), statusVector[23], 330, 440, 40, 60, juce::String(24));
    setDailyBtn(dailyBtn24.get(), statusVector[24], 380, 440, 40, 60, juce::String(25));
    setDailyBtn(dailyBtn25.get(), statusVector[25], 430, 440, 40, 60, juce::String(26));
    setDailyBtn(dailyBtn26.get(), statusVector[26], 480, 440, 40, 60, juce::String(27));
    setDailyBtn(dailyBtn27.get(), statusVector[27], 530, 440, 40, 60, juce::String(28));


}

void HabitForm::setDailyBtn(juce::TextButton* btn, std::string dailyStatus, int bnd1, int bnd2, int bnd3, int bnd4, juce::String name)
{
    addAndMakeVisible(btn);
    if (dailyStatus == "Yes")
    {
        btn->setColour(juce::TextButton::buttonColourId, juce::Colours::green);
    }
    else if (dailyStatus == "No")
    {
        btn->setColour(juce::TextButton::buttonColourId, juce::Colours::red);
    }
    else if (dailyStatus == "Unmarked")
    {
        btn->setColour(juce::TextButton::buttonColourId, juce::Colours::grey);
    }

    btn->setBounds(bnd1, bnd2, bnd3, bnd4);
    btn->setButtonText(name);
    btn->setClickingTogglesState(true);
}

// Removes dailyTracker Buttons
void HabitForm::clearDailyButtons()
{

    removeChildComponent(didBtn.get());
    removeChildComponent(didNotBtn.get());

    removeChildComponent(dailyBtn0.get());
    removeChildComponent(dailyBtn1.get());
    removeChildComponent(dailyBtn2.get());
    removeChildComponent(dailyBtn3.get());
    removeChildComponent(dailyBtn4.get());
    removeChildComponent(dailyBtn5.get());
    removeChildComponent(dailyBtn6.get());
    removeChildComponent(dailyBtn7.get());
    removeChildComponent(dailyBtn8.get());
    removeChildComponent(dailyBtn9.get());
    removeChildComponent(dailyBtn10.get());
    removeChildComponent(dailyBtn11.get());
    removeChildComponent(dailyBtn12.get());
    removeChildComponent(dailyBtn13.get());
    removeChildComponent(dailyBtn14.get());
    removeChildComponent(dailyBtn15.get());
    removeChildComponent(dailyBtn16.get());
    removeChildComponent(dailyBtn17.get());
    removeChildComponent(dailyBtn18.get());
    removeChildComponent(dailyBtn19.get());
    removeChildComponent(dailyBtn20.get());
    removeChildComponent(dailyBtn21.get());
    removeChildComponent(dailyBtn22.get());
    removeChildComponent(dailyBtn23.get());
    removeChildComponent(dailyBtn24.get());
    removeChildComponent(dailyBtn25.get());
    removeChildComponent(dailyBtn26.get());
    removeChildComponent(dailyBtn27.get());
}

void HabitForm::makeDidAndDidNotButtons()
{
    addAndMakeVisible(didBtn.get());
    addAndMakeVisible(didNotBtn.get());
}

// Select "Did" for selected days
void HabitForm::updateWithDids()
{
    std::vector<int> daysVector;

    if (dailyBtn0->getToggleState())
    {
        daysVector.push_back(1);
    }
    if (dailyBtn1->getToggleState())
    {
        daysVector.push_back(2);
    }
    if (dailyBtn2->getToggleState())
    {
        daysVector.push_back(3);
    }
    if (dailyBtn3->getToggleState())
    {
        daysVector.push_back(4);
    }
    if (dailyBtn4->getToggleState())
    {
        daysVector.push_back(5);
    }
    if (dailyBtn5->getToggleState())
    {
        daysVector.push_back(6);
    }
    if (dailyBtn6->getToggleState())
    {
        daysVector.push_back(7);
    }
    if (dailyBtn7->getToggleState())
    {
        daysVector.push_back(8);
    }
    if (dailyBtn8->getToggleState())
    {
        daysVector.push_back(9);
    }
    if (dailyBtn9->getToggleState())
    {
        daysVector.push_back(10);
    }
    if (dailyBtn10->getToggleState())
    {
        daysVector.push_back(11);
    }
    if (dailyBtn11->getToggleState())
    {
        daysVector.push_back(12);
    }
    if (dailyBtn12->getToggleState())
    {
        daysVector.push_back(13);
    }
    if (dailyBtn13->getToggleState())
    {
        daysVector.push_back(14);
    }
    if (dailyBtn14->getToggleState())
    {
        daysVector.push_back(15);
    }
    if (dailyBtn15->getToggleState())
    {
        daysVector.push_back(16);
    }
    if (dailyBtn16->getToggleState())
    {
        daysVector.push_back(17);
    }
    if (dailyBtn17->getToggleState())
    {
        daysVector.push_back(18);
    }
    if (dailyBtn18->getToggleState())
    {
        daysVector.push_back(19);
    }
    if (dailyBtn19->getToggleState())
    {
        daysVector.push_back(20);
    }
    if (dailyBtn20->getToggleState())
    {
        daysVector.push_back(21);
    }
    if (dailyBtn21->getToggleState())
    {
        daysVector.push_back(22);
    }
    if (dailyBtn22->getToggleState())
    {
        daysVector.push_back(23);
    }
    if (dailyBtn23->getToggleState())
    {
        daysVector.push_back(24);
    }
    if (dailyBtn24->getToggleState())
    {
        daysVector.push_back(25);
    }
    if (dailyBtn25->getToggleState())
    {
        daysVector.push_back(26);
    }
    if (dailyBtn26->getToggleState())
    {
        daysVector.push_back(27);
    }
    if (dailyBtn27->getToggleState())
    {
        daysVector.push_back(28);
    }

    int habitId = returnButtonHabitId();

    CSVOperator::updateDailyTrackerFile(habitId, daysVector, "Yes");

    // Update Button Colours
    readFileAndMakeDailyBtns();

    // Untoggle Daily Buttons
    untoggleDailyButtons();
}


// Select "Did not" for selected days
void HabitForm::updateWithDidNots()
{
    std::vector<int> daysVector;

    if (dailyBtn0->getToggleState())
    {
        daysVector.push_back(1);
    }
    if (dailyBtn1->getToggleState())
    {
        daysVector.push_back(2);
    }
    if (dailyBtn2->getToggleState())
    {
        daysVector.push_back(3);
    }
    if (dailyBtn3->getToggleState())
    {
        daysVector.push_back(4);
    }
    if (dailyBtn4->getToggleState())
    {
        daysVector.push_back(5);
    }
    if (dailyBtn5->getToggleState())
    {
        daysVector.push_back(6);
    }
    if (dailyBtn6->getToggleState())
    {
        daysVector.push_back(7);
    }
    if (dailyBtn7->getToggleState())
    {
        daysVector.push_back(8);
    }
    if (dailyBtn8->getToggleState())
    {
        daysVector.push_back(9);
    }
    if (dailyBtn9->getToggleState())
    {
        daysVector.push_back(10);
    }
    if (dailyBtn10->getToggleState())
    {
        daysVector.push_back(11);
    }
    if (dailyBtn11->getToggleState())
    {
        daysVector.push_back(12);
    }
    if (dailyBtn12->getToggleState())
    {
        daysVector.push_back(13);
    }
    if (dailyBtn13->getToggleState())
    {
        daysVector.push_back(14);
    }
    if (dailyBtn14->getToggleState())
    {
        daysVector.push_back(15);
    }
    if (dailyBtn15->getToggleState())
    {
        daysVector.push_back(16);
    }
    if (dailyBtn16->getToggleState())
    {
        daysVector.push_back(17);
    }
    if (dailyBtn17->getToggleState())
    {
        daysVector.push_back(18);
    }
    if (dailyBtn18->getToggleState())
    {
        daysVector.push_back(19);
    }
    if (dailyBtn19->getToggleState())
    {
        daysVector.push_back(20);
    }
    if (dailyBtn20->getToggleState())
    {
        daysVector.push_back(21);
    }
    if (dailyBtn21->getToggleState())
    {
        daysVector.push_back(22);
    }
    if (dailyBtn22->getToggleState())
    {
        daysVector.push_back(23);
    }
    if (dailyBtn23->getToggleState())
    {
        daysVector.push_back(24);
    }
    if (dailyBtn24->getToggleState())
    {
        daysVector.push_back(25);
    }
    if (dailyBtn25->getToggleState())
    {
        daysVector.push_back(26);
    }
    if (dailyBtn26->getToggleState())
    {
        daysVector.push_back(27);
    }
    if (dailyBtn27->getToggleState())
    {
        daysVector.push_back(28);
    }

    int habitId = returnButtonHabitId();

    CSVOperator::updateDailyTrackerFile(habitId, daysVector, "No");

    // Update Button Colours
    readFileAndMakeDailyBtns();

    // Untoggle Daily Buttons
    untoggleDailyButtons();
}

void HabitForm::untoggleDailyButtons()
{
    dailyBtn0->setToggleState(false, false);
    dailyBtn1->setToggleState(false, false);
    dailyBtn2->setToggleState(false, false);
    dailyBtn3->setToggleState(false, false);
    dailyBtn4->setToggleState(false, false);
    dailyBtn5->setToggleState(false, false);
    dailyBtn6->setToggleState(false, false);
    dailyBtn7->setToggleState(false, false);
    dailyBtn8->setToggleState(false, false);
    dailyBtn9->setToggleState(false, false);
    dailyBtn10->setToggleState(false, false);
    dailyBtn11->setToggleState(false, false);
    dailyBtn12->setToggleState(false, false);
    dailyBtn13->setToggleState(false, false);
    dailyBtn14->setToggleState(false, false);
    dailyBtn15->setToggleState(false, false);
    dailyBtn16->setToggleState(false, false);
    dailyBtn17->setToggleState(false, false);
    dailyBtn18->setToggleState(false, false);
    dailyBtn19->setToggleState(false, false);
    dailyBtn20->setToggleState(false, false);
    dailyBtn21->setToggleState(false, false);
    dailyBtn22->setToggleState(false, false);
    dailyBtn23->setToggleState(false, false);
    dailyBtn24->setToggleState(false, false);
    dailyBtn25->setToggleState(false, false);
    dailyBtn26->setToggleState(false, false);
    dailyBtn27->setToggleState(false, false);
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

