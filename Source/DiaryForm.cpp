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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "DiaryForm.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
DiaryForm::DiaryForm ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    juce__textButton1.reset (new juce::TextButton ("newEntryButton"));
    addAndMakeVisible (juce__textButton1.get());
    juce__textButton1->setButtonText (TRANS("ADD ENTRY"));
    juce__textButton1->addListener (this);
    juce__textButton1->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));

    juce__textButton1->setBounds (512, 56, 216, 32);

    juce__label.reset (new juce::Label ("new label",
                                        TRANS("DATE:")));
    addAndMakeVisible (juce__label.get());
    juce__label->setFont (juce::Font (20.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label->setJustificationType (juce::Justification::centredLeft);
    juce__label->setEditable (false, false, false);
    juce__label->setColour (juce::Label::backgroundColourId, juce::Colour (0x00000000));
    juce__label->setColour (juce::Label::textColourId, juce::Colours::black);
    juce__label->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label->setBounds (512, 20, 150, 32);

    juce__textEditor.reset (new juce::TextEditor ("new text editor"));
    addAndMakeVisible (juce__textEditor.get());
    juce__textEditor->setMultiLine (false);
    juce__textEditor->setReturnKeyStartsNewLine (false);
    juce__textEditor->setReadOnly (false);
    juce__textEditor->setScrollbarsShown (true);
    juce__textEditor->setCaretVisible (true);
    juce__textEditor->setPopupMenuEnabled (true);
    juce__textEditor->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__textEditor->setColour (juce::TextEditor::backgroundColourId, juce::Colours::white);
    juce__textEditor->setText (juce::String());

    juce__textEditor->setBounds (576, 24, 150, 24);

    juce__textEditor2.reset (new juce::TextEditor ("new text editor"));
    addAndMakeVisible (juce__textEditor2.get());
    juce__textEditor2->setMultiLine (false);
    juce__textEditor2->setReturnKeyStartsNewLine (false);
    juce__textEditor2->setReadOnly (false);
    juce__textEditor2->setScrollbarsShown (true);
    juce__textEditor2->setCaretVisible (true);
    juce__textEditor2->setPopupMenuEnabled (true);
    juce__textEditor2->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__textEditor2->setColour (juce::TextEditor::backgroundColourId, juce::Colours::white);
    juce__textEditor2->setText (juce::String());

    juce__textEditor2->setBounds (40, 24, 456, 104);

    juce__groupComponent.reset (new juce::GroupComponent ("new group",
                                                          TRANS("My Journey")));
    addAndMakeVisible (juce__groupComponent.get());
    juce__groupComponent->setColour (juce::GroupComponent::textColourId, juce::Colours::black);

    juce__groupComponent->setBounds (40, 144, 688, 320);

    juce__textButton2.reset (new juce::TextButton ("newEntryButton"));
    addAndMakeVisible (juce__textButton2.get());
    juce__textButton2->setButtonText (TRANS("EDIT ENTRIES"));
    juce__textButton2->addListener (this);
    juce__textButton2->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));

    juce__textButton2->setBounds (512, 96, 216, 32);

    juce__textEditor3.reset (new juce::TextEditor ("new text editor"));
    addAndMakeVisible (juce__textEditor3.get());
    juce__textEditor3->setMultiLine (true);
    juce__textEditor3->setReturnKeyStartsNewLine (true);
    juce__textEditor3->setReadOnly (true);
    juce__textEditor3->setScrollbarsShown (true);
    juce__textEditor3->setCaretVisible (false);
    juce__textEditor3->setPopupMenuEnabled (true);
    juce__textEditor3->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__textEditor3->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0xffc9c9c9));
    juce__textEditor3->setText (juce::String());

    juce__textEditor3->setBounds (56, 168, 656, 280);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    juce__textEditor2->setMultiLine(true, true);

    //load diary entries from txt file
    juce::String savedentries = loadDiary();
    juce__textEditor3->setText(savedentries, juce::NotificationType::dontSendNotification);

    isEditing = false;

    //new line when enter is pressed in text editor
    juce__textEditor2->setReturnKeyStartsNewLine(true);
    //[/Constructor]
}

DiaryForm::~DiaryForm()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    juce__textButton1 = nullptr;
    juce__label = nullptr;
    juce__textEditor = nullptr;
    juce__textEditor2 = nullptr;
    juce__groupComponent = nullptr;
    juce__textButton2 = nullptr;
    juce__textEditor3 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void DiaryForm::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colours::burlywood);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void DiaryForm::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void DiaryForm::buttonClicked (juce::Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == juce__textButton1.get())
    {
        //[UserButtonCode_juce__textButton1] -- add your button handler code here..
        juce::String oldEntry = juce__textEditor3->getText();

        juce::String newEntry = juce__textEditor2->getText();
        juce::String dateOfEntry = juce__textEditor->getText();
        juce::String newLine = "\n";

        std::string fullText = (oldEntry + "\n" + dateOfEntry + "\n" + newEntry + "\n").toStdString();

        // Show the text
        juce__textEditor3->setText(fullText, juce::NotificationType::dontSendNotification);

        updateDiary(fullText);
        //[/UserButtonCode_juce__textButton1]
    }
    else if (buttonThatWasClicked == juce__textButton2.get())
    {
        //[UserButtonCode_juce__textButton2] -- add your button handler code here..
        //juce__textEditor2->clear();

        //editing mode:
        if (isEditing == false)
        {
            isEditing = true;
            juce__textEditor3->setReadOnly(false);
            juce__textEditor3->setCaretVisible(true);
            juce__textEditor3->setColour(juce::TextEditor::backgroundColourId, juce::Colours::white);
            juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colours::brown);

            juce__textButton2->setButtonText("SAVE ENTRIES");
        }
        else {
            std::string fullText = (juce__textEditor3->getText().toStdString());
            updateDiary(fullText);
            juce__textEditor3->setReadOnly(true);
            juce__textEditor3->setCaretVisible(false);
            juce__textEditor3->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0xffc9c9c9));
            juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colour(0xff156f1a));
            isEditing = false;
            juce__textButton2->setButtonText("EDIT ENTRIES");


        }
        //[/UserButtonCode_juce__textButton2]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...


//function to load the saved diary entries from txt file
juce::String DiaryForm::loadDiary()
{
    //std::string strId = std::to_string(habitID);

    juce::String filePath = juce::File::getCurrentWorkingDirectory().getFullPathName();
    filePath.toStdString();

    juce::File goalsFile(filePath + "\\HabitsFiles\\DiaryEntries.txt");
    juce::FileInputStream txtFile(goalsFile);

    juce::String jucetxt;

    if (txtFile.openedOk())
    {
        jucetxt = goalsFile.loadFileAsString();

    }

    return jucetxt;
}


//function to write into txt file and save diary entries
void DiaryForm::updateDiary(std::string text)
{
    //std::string idAsStr = std::to_string(habitID);

    // Builds the new entry to add into habits file
    std::string entry = text;

    std::ofstream txtFile;
    txtFile.open(".\\HabitsFiles\\DiaryEntries.txt");


    txtFile << entry;

    txtFile.close();
}


//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="DiaryForm" componentName=""
                 parentClasses="public juce::Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffdeb887"/>
  <TEXTBUTTON name="newEntryButton" id="f1dc085719bb76aa" memberName="juce__textButton1"
              virtualName="" explicitFocusOrder="0" pos="512 56 216 32" bgColOff="ff156f1a"
              buttonText="ADD ENTRY" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="f95564c788d4080f" memberName="juce__label"
         virtualName="" explicitFocusOrder="0" pos="512 20 150 32" bkgCol="0"
         textCol="ff000000" edTextCol="ff000000" edBkgCol="0" labelText="DATE:"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="20.0" kerning="0.0" bold="0"
         italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="284870207616d262" memberName="juce__textEditor"
              virtualName="" explicitFocusOrder="0" pos="576 24 150 24" textcol="ff000000"
              bkgcol="ffffffff" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="new text editor" id="5e0c77c7e3f181b3" memberName="juce__textEditor2"
              virtualName="" explicitFocusOrder="0" pos="40 24 456 104" textcol="ff000000"
              bkgcol="ffffffff" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <GROUPCOMPONENT name="new group" id="190782985038edce" memberName="juce__groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="40 144 688 320" textcol="ff000000"
                  title="My Journey"/>
  <TEXTBUTTON name="newEntryButton" id="11e8abdde47fada" memberName="juce__textButton2"
              virtualName="" explicitFocusOrder="0" pos="512 96 216 32" bgColOff="ff156f1a"
              buttonText="EDIT ENTRIES" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <TEXTEDITOR name="new text editor" id="daf5e15d2be83e77" memberName="juce__textEditor3"
              virtualName="" explicitFocusOrder="0" pos="56 168 656 280" textcol="ff000000"
              bkgcol="ffc9c9c9" initialText="" multiline="1" retKeyStartsLine="1"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

