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

#include "ResourcesForm.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
ResourcesForm::ResourcesForm ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    juce__label2.reset (new juce::Label ("new label",
                                         TRANS("Placeholder (Preview of Resource)")));
    addAndMakeVisible (juce__label2.get());
    juce__label2->setFont (juce::Font (20.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label2->setJustificationType (juce::Justification::topLeft);
    juce__label2->setEditable (false, false, false);
    juce__label2->setColour (juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label2->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label2->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label2->setBounds (40, 64, 640, 352);

    juce__textButton1.reset (new juce::TextButton ("previousButton"));
    addAndMakeVisible (juce__textButton1.get());
    juce__textButton1->setButtonText (TRANS("PREVIOUS"));
    juce__textButton1->addListener (this);
    juce__textButton1->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));

    juce__textButton1->setBounds (40, 432, 168, 32);

    juce__textButton2.reset (new juce::TextButton ("nextButton"));
    addAndMakeVisible (juce__textButton2.get());
    juce__textButton2->setButtonText (TRANS("NEXT"));
    juce__textButton2->addListener (this);
    juce__textButton2->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff156f1a));

    juce__textButton2->setBounds (512, 432, 168, 32);

    juce__comboBox.reset (new juce::ComboBox ("resourceType"));
    addAndMakeVisible (juce__comboBox.get());
    juce__comboBox->setEditableText (false);
    juce__comboBox->setJustificationType (juce::Justification::centredLeft);
    juce__comboBox->setTextWhenNothingSelected (TRANS("VIDEO or WEBSITES (dropdown menu)"));
    juce__comboBox->setTextWhenNoChoicesAvailable (TRANS("VIDEO or WEBSITES"));
    juce__comboBox->addListener (this);

    juce__comboBox->setBounds (40, 24, 312, 24);

    juce__comboBox2.reset (new juce::ComboBox ("resourceCategory"));
    addAndMakeVisible (juce__comboBox2.get());
    juce__comboBox2->setEditableText (false);
    juce__comboBox2->setJustificationType (juce::Justification::centredLeft);
    juce__comboBox2->setTextWhenNothingSelected (TRANS("CATEGORIES (dropdown menu)"));
    juce__comboBox2->setTextWhenNoChoicesAvailable (TRANS("CATEGORIES"));
    juce__comboBox2->addListener (this);

    juce__comboBox2->setBounds (368, 24, 312, 24);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]

    juce__comboBox->addItem("Videos", 1);
    juce__comboBox->addItem("Websites", 2);
    juce__comboBox2->addItem("Researches", 1);
    juce__comboBox2->addItem("Opinions", 2);
    juce__comboBox2->addItem("Experiences", 3);

    

}

ResourcesForm::~ResourcesForm()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    juce__label2 = nullptr;
    juce__textButton1 = nullptr;
    juce__textButton2 = nullptr;
    juce__comboBox = nullptr;
    juce__comboBox2 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ResourcesForm::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colours::burlywood);

    juce::File image1{ "C:\\Users\\YL\\Desktop\\4_stages_of_habit.png" };
    juce::Image imageLoaded{ juce::ImageFileFormat::loadFrom(image1) };
    g.drawImageWithin(imageLoaded, 40, 80,640, 352, 4,  false);
    juce__label2->setVisible(false);
    g.drawFittedText("Title",40,64,640,20,4,1);
    //g.drawRoundedRectangle;
    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ResourcesForm::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void ResourcesForm::buttonClicked (juce::Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == juce__textButton1.get())
    {
        //[UserButtonCode_juce__textButton1] -- add your button handler code here..
        //[/UserButtonCode_juce__textButton1]
    }
    else if (buttonThatWasClicked == juce__textButton2.get())
    {
        //[UserButtonCode_juce__textButton2] -- add your button handler code here..
        //[/UserButtonCode_juce__textButton2]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void ResourcesForm::comboBoxChanged (juce::ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == juce__comboBox.get())
    {
        //[UserComboBoxCode_juce__comboBox] -- add your combo box handling code here..
        //[/UserComboBoxCode_juce__comboBox]
    }
    else if (comboBoxThatHasChanged == juce__comboBox2.get())
    {
        //[UserComboBoxCode_juce__comboBox2] -- add your combo box handling code here..
        //[/UserComboBoxCode_juce__comboBox2]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="ResourcesForm" componentName=""
                 parentClasses="public juce::Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffdeb887"/>
  <LABEL name="new label" id="f55f427d84137a4f" memberName="juce__label2"
         virtualName="" explicitFocusOrder="0" pos="40 64 640 352" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="Placeholder (Preview of Resource)"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
         italic="0" justification="9"/>
  <TEXTBUTTON name="previousButton" id="f1dc085719bb76aa" memberName="juce__textButton1"
              virtualName="" explicitFocusOrder="0" pos="40 432 168 32" bgColOff="ff156f1a"
              buttonText="PREVIOUS" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="previousButton" id="3419626979f213f9" memberName="juce__textButton2"
              virtualName="" explicitFocusOrder="0" pos="512 432 168 32" bgColOff="ff156f1a"
              buttonText="NEXT" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="resourceType" id="96b8979b29ec554" memberName="juce__comboBox"
            virtualName="" explicitFocusOrder="0" pos="40 24 312 24" editable="0"
            layout="33" items="" textWhenNonSelected="VIDEO or WEBSITES (dropdown menu)"
            textWhenNoItems="VIDEO or WEBSITES"/>
  <COMBOBOX name="resourceCategory" id="744cae66f7d976d9" memberName="juce__comboBox2"
            virtualName="" explicitFocusOrder="0" pos="368 24 312 24" editable="0"
            layout="33" items="" textWhenNonSelected="CATEGORIES (dropdown menu)"
            textWhenNoItems="CATEGORIES"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

