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
    juce__textButton1->setButtonText (TRANS("NEW ENTRY"));
    juce__textButton1->addListener (this);
    juce__textButton1->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));

    juce__textButton1->setBounds (512, 56, 168, 32);

    juce__label.reset (new juce::Label ("new label",
                                        TRANS("DATE: DD/MM/YYYY ")));
    addAndMakeVisible (juce__label.get());
    juce__label->setFont (juce::Font (20.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label->setJustificationType (juce::Justification::centredLeft);
    juce__label->setEditable (false, false, false);
    juce__label->setColour (juce::Label::backgroundColourId, juce::Colour (0x00000000));
    juce__label->setColour (juce::Label::textColourId, juce::Colours::black);
    juce__label->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label->setBounds (512, 16, 150, 32);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

DiaryForm::~DiaryForm()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    juce__textButton1 = nullptr;
    juce__label = nullptr;


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
        //[/UserButtonCode_juce__textButton1]
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

<JUCER_COMPONENT documentType="Component" className="DiaryForm" componentName=""
                 parentClasses="public juce::Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffdeb887"/>
  <TEXTBUTTON name="newEntryButton" id="f1dc085719bb76aa" memberName="juce__textButton1"
              virtualName="" explicitFocusOrder="0" pos="512 56 168 32" bgColOff="ff156f1a"
              buttonText="NEW ENTRY" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="f95564c788d4080f" memberName="juce__label"
         virtualName="" explicitFocusOrder="0" pos="512 16 150 32" bkgCol="0"
         textCol="ff000000" edTextCol="ff000000" edBkgCol="0" labelText="DATE: DD/MM/YYYY "
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="20.0" kerning="0.0" bold="0"
         italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

