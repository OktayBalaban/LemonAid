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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "HelpForm.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
HelpForm::HelpForm ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    juce__label.reset (new juce::Label ("new label",
                                        TRANS("This is the placeholder for the instructions of the HELP page.")));
    //addAndMakeVisible (juce__label.get());
    juce__label->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label->setJustificationType (juce::Justification::centredLeft);
    juce__label->setEditable (false, false, false);
    juce__label->setColour (juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));
    juce__label->setBounds (200, 50, 550, 446);

    aboutButton.reset(new juce::TextButton("About"));
    addAndMakeVisible(aboutButton.get());
    aboutButton->addListener(this);
    aboutButton->setColour(juce::TextButton::buttonColourId, juce::Colours::white);
    aboutButton->setColour(juce::TextButton::textColourOffId, juce::Colours::black);
    aboutButton->setBounds(60, 130, 115, 30);

    tutorialButton.reset(new juce::TextButton("Tutorial"));
    addAndMakeVisible(tutorialButton.get());
    tutorialButton->addListener(this);
    tutorialButton->setColour(juce::TextButton::buttonColourId, juce::Colours::white);
    tutorialButton->setColour(juce::TextButton::textColourOffId, juce::Colours::black);
    tutorialButton->setBounds(60, 180, 115, 30);

    documentationButton.reset(new juce::TextButton("Documentation"));
    addAndMakeVisible(documentationButton.get());
    documentationButton->addListener(this);
    documentationButton->setColour(juce::TextButton::buttonColourId, juce::Colours::white);
    documentationButton->setColour(juce::TextButton::textColourOffId, juce::Colours::black);
    documentationButton->setBounds(60, 230, 115, 30);

    juce__textEditor.reset(new juce::TextEditor("text editor"));
    addAndMakeVisible(juce__textEditor.get());
    juce__textEditor->setMultiLine(true);
    juce__textEditor->setReturnKeyStartsNewLine(true);
    juce__textEditor->setReadOnly(true);
    juce__textEditor->setScrollbarsShown(true);
    juce__textEditor->setCaretVisible(false);
    juce__textEditor->setPopupMenuEnabled(true);
    juce__textEditor->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__textEditor->setColour(juce::TextEditor::backgroundColourId, juce::Colours::lightgrey);
    juce__textEditor->setText(juce::String());
    juce__textEditor->setBounds(210, 60, 540, 426);
    juce__textEditor->setText("Hi! ", juce::NotificationType::dontSendNotification);

    setSize (600, 400);
}

HelpForm::~HelpForm()
{
    juce__label = nullptr;
}

//==============================================================================
void HelpForm::paint (juce::Graphics& g)
{
    g.fillAll (juce::Colours::white);
    g.setFont(20.0f);
    g.drawText("Getting Started", 16, 16, 200, 20, 4);
}

void HelpForm::resized()
{
}

void HelpForm::buttonClicked(juce::Button* buttonThatWasClicked)
{
    if (buttonThatWasClicked == tutorialButton.get())
    {
        DBG("change label contents for tutorial");
    }
    if (buttonThatWasClicked == documentationButton.get())
    {
        DBG("change label contents for documentation");
    }
    if (buttonThatWasClicked == aboutButton.get())
    {
        DBG("change label contents for about");
    }
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="HelpForm" componentName=""
                 parentClasses="public juce::Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <LABEL name="new label" id="1a7bf12d8335aa53" memberName="juce__label"
         virtualName="" explicitFocusOrder="0" pos="16 16 600 456" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="This is the placeholder for the instructions of the HELP page."
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
         italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

