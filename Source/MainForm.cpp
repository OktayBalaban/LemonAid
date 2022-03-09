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
#include "HabitForm.h"
//[/Headers]

#include "MainForm.h"

//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainForm::MainForm()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    juce__groupComponent2.reset(new juce::GroupComponent("new group",
        TRANS("Daily Tips")));
    addAndMakeVisible(juce__groupComponent2.get());
    juce__groupComponent2->setColour(juce::GroupComponent::textColourId, juce::Colours::black);

    juce__groupComponent2->setBounds(200, 344, 808, 248);

    juce__textButton.reset(new juce::TextButton("mainButton"));
    addAndMakeVisible(juce__textButton.get());
    juce__textButton->setButtonText(TRANS("MAIN PAGE"));
    juce__textButton->addListener(this);
    juce__textButton->setColour(juce::TextButton::textColourOffId, juce::Colours::black);
    juce__textButton->setColour(juce::TextButton::buttonColourId, juce::Colours::darkgoldenrod);
    juce__textButton->setBounds(0, 0, 176, 40);

    juce__textButton2.reset(new juce::TextButton("habitButton"));
    addAndMakeVisible(juce__textButton2.get());
    juce__textButton2->setButtonText(TRANS("MY HABITS"));
    juce__textButton2->addListener(this);
    juce__textButton2->setColour(juce::TextButton::textColourOffId, juce::Colours::black);
    juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));

    juce__textButton2->setBounds(0, 41, 176, 40);

    juce__textButton3.reset(new juce::TextButton("resourceButton"));
    addAndMakeVisible(juce__textButton3.get());
    juce__textButton3->setButtonText(TRANS("RESOURCES"));
    juce__textButton3->addListener(this);
    juce__textButton3->setColour(juce::TextButton::textColourOffId, juce::Colours::black);
    juce__textButton3->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));

    juce__textButton3->setBounds(0, 82, 176, 40);

    juce__textButton4.reset(new juce::TextButton("diaryButton"));
    addAndMakeVisible(juce__textButton4.get());
    juce__textButton4->setButtonText(TRANS("MY DIARY"));
    juce__textButton4->addListener(this);
    juce__textButton4->setColour(juce::TextButton::textColourOffId, juce::Colours::black);
    juce__textButton4->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));

    juce__textButton4->setBounds(0, 123, 176, 40);

    juce__textButton5.reset(new juce::TextButton("helpButton"));
    addAndMakeVisible(juce__textButton5.get());
    juce__textButton5->setButtonText(TRANS("HELP"));
    juce__textButton5->addListener(this);
    juce__textButton5->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
    juce__textButton5->setColour(juce::TextButton::textColourOffId, juce::Colours::black);

    juce__textButton5->setBounds(0, 164, 176, 40);

    juce__label.reset(new juce::Label("new label",
        TRANS("THIS IS WHERE THE LOGO GOES")));
    addAndMakeVisible(juce__label.get());
    juce__label->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label->setJustificationType(juce::Justification::centredLeft);
    juce__label->setEditable(false, false, false);
    juce__label->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label->setBounds(208, 8, 360, 72);

    juce__label2.reset(new juce::Label("new label",
        TRANS("RANDOM TIPS")));
    addAndMakeVisible(juce__label2.get());
    juce__label2->setFont(juce::Font("Arial", 23.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label2->setJustificationType(juce::Justification::centredTop);
    juce__label2->setEditable(false, false, false);
    juce__label2->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label2->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label2->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label2->setBounds(216, 368, 776, 208);

    juce__groupComponent.reset(new juce::GroupComponent("new group",
        TRANS("My Progress")));
    addAndMakeVisible(juce__groupComponent.get());
    juce__groupComponent->setColour(juce::GroupComponent::textColourId, juce::Colours::black);

    juce__groupComponent->setBounds(200, 88, 808, 248);

    juce__textButton6.reset(new juce::TextButton("habit1button"));
    addAndMakeVisible(juce__textButton6.get());
    juce__textButton6->setButtonText(TRANS("Habit 1"));
    juce__textButton6->addListener(this);
    juce__textButton6->setColour(juce::TextButton::buttonColourId, juce::Colours::goldenrod);
    juce__textButton6->setColour(juce::TextButton::textColourOffId, juce::Colours::black);
    juce__textButton6->setColour(juce::TextButton::textColourOnId, juce::Colours::black);

    juce__textButton6->setBounds(224, 120, 128, 20);

    juce__textButton7.reset(new juce::TextButton("habbit2button"));
    addAndMakeVisible(juce__textButton7.get());
    juce__textButton7->setButtonText(TRANS("Habit 2"));
    juce__textButton7->addListener(this);
    juce__textButton7->setColour(juce::TextButton::buttonColourId, juce::Colours::goldenrod);
    juce__textButton7->setColour(juce::TextButton::textColourOffId, juce::Colours::black);
    juce__textButton7->setColour(juce::TextButton::textColourOnId, juce::Colours::black);

    juce__textButton7->setBounds(224, 184, 128, 20);

    juce__textButton8.reset(new juce::TextButton("habit3button"));
    addAndMakeVisible(juce__textButton8.get());
    juce__textButton8->setButtonText(TRANS("Habit 3"));
    juce__textButton8->addListener(this);
    juce__textButton8->setColour(juce::TextButton::buttonColourId, juce::Colours::goldenrod);
    juce__textButton8->setColour(juce::TextButton::textColourOffId, juce::Colours::black);
    juce__textButton8->setColour(juce::TextButton::textColourOnId, juce::Colours::black);

    juce__textButton8->setBounds(224, 248, 128, 20);

    juce__label3.reset(new juce::Label("new label",
        TRANS("1")));
    addAndMakeVisible(juce__label3.get());
    juce__label3->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label3->setJustificationType(juce::Justification::centred);
    juce__label3->setEditable(false, false, false);
    juce__label3->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label3->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label3->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label3->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label3->setBounds(224, 144, 24, 24);

    juce__label4.reset(new juce::Label("new label",
        TRANS("2")));
    addAndMakeVisible(juce__label4.get());
    juce__label4->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label4->setJustificationType(juce::Justification::centred);
    juce__label4->setEditable(false, false, false);
    juce__label4->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label4->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label4->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label4->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label4->setBounds(248, 144, 24, 24);

    juce__label5.reset(new juce::Label("new label",
        TRANS("3")));
    addAndMakeVisible(juce__label5.get());
    juce__label5->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label5->setJustificationType(juce::Justification::centred);
    juce__label5->setEditable(false, false, false);
    juce__label5->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label5->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label5->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label5->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label5->setBounds(272, 144, 24, 24);

    juce__label6.reset(new juce::Label("new label",
        TRANS("4")));
    addAndMakeVisible(juce__label6.get());
    juce__label6->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label6->setJustificationType(juce::Justification::centred);
    juce__label6->setEditable(false, false, false);
    juce__label6->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label6->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label6->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label6->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label6->setBounds(296, 144, 24, 24);

    juce__label7.reset(new juce::Label("new label",
        TRANS("5")));
    addAndMakeVisible(juce__label7.get());
    juce__label7->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label7->setJustificationType(juce::Justification::centred);
    juce__label7->setEditable(false, false, false);
    juce__label7->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label7->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label7->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label7->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label7->setBounds(320, 144, 24, 24);

    juce__label8.reset(new juce::Label("new label",
        TRANS("6")));
    addAndMakeVisible(juce__label8.get());
    juce__label8->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label8->setJustificationType(juce::Justification::centred);
    juce__label8->setEditable(false, false, false);
    juce__label8->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label8->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label8->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label8->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label8->setBounds(344, 144, 24, 24);

    juce__label9.reset(new juce::Label("new label",
        TRANS("7")));
    addAndMakeVisible(juce__label9.get());
    juce__label9->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label9->setJustificationType(juce::Justification::centred);
    juce__label9->setEditable(false, false, false);
    juce__label9->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label9->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label9->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label9->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label9->setBounds(368, 144, 24, 24);

    juce__label10.reset(new juce::Label("new label",
        TRANS("8")));
    addAndMakeVisible(juce__label10.get());
    juce__label10->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label10->setJustificationType(juce::Justification::centred);
    juce__label10->setEditable(false, false, false);
    juce__label10->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label10->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label10->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label10->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label10->setBounds(398, 144, 24, 24);

    juce__label11.reset(new juce::Label("new label",
        TRANS("9")));
    addAndMakeVisible(juce__label11.get());
    juce__label11->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label11->setJustificationType(juce::Justification::centred);
    juce__label11->setEditable(false, false, false);
    juce__label11->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label11->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label11->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label11->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label11->setBounds(422, 144, 24, 24);

    juce__label12.reset(new juce::Label("new label",
        TRANS("10")));
    addAndMakeVisible(juce__label12.get());
    juce__label12->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label12->setJustificationType(juce::Justification::centred);
    juce__label12->setEditable(false, false, false);
    juce__label12->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label12->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label12->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label12->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label12->setBounds(446, 144, 24, 24);

    juce__label13.reset(new juce::Label("new label",
        TRANS("11")));
    addAndMakeVisible(juce__label13.get());
    juce__label13->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label13->setJustificationType(juce::Justification::centred);
    juce__label13->setEditable(false, false, false);
    juce__label13->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label13->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label13->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label13->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label13->setBounds(470, 144, 24, 24);

    juce__label14.reset(new juce::Label("new label",
        TRANS("12")));
    addAndMakeVisible(juce__label14.get());
    juce__label14->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label14->setJustificationType(juce::Justification::centred);
    juce__label14->setEditable(false, false, false);
    juce__label14->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label14->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label14->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label14->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label14->setBounds(494, 144, 24, 24);

    juce__label15.reset(new juce::Label("new label",
        TRANS("13")));
    addAndMakeVisible(juce__label15.get());
    juce__label15->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label15->setJustificationType(juce::Justification::centred);
    juce__label15->setEditable(false, false, false);
    juce__label15->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label15->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label15->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label15->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label15->setBounds(518, 144, 24, 24);

    juce__label16.reset(new juce::Label("new label",
        TRANS("14")));
    addAndMakeVisible(juce__label16.get());
    juce__label16->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label16->setJustificationType(juce::Justification::centred);
    juce__label16->setEditable(false, false, false);
    juce__label16->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label16->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label16->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label16->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label16->setBounds(542, 144, 24, 24);

    juce__label17.reset(new juce::Label("new label",
        TRANS("15")));
    addAndMakeVisible(juce__label17.get());
    juce__label17->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label17->setJustificationType(juce::Justification::centred);
    juce__label17->setEditable(false, false, false);
    juce__label17->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label17->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label17->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label17->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label17->setBounds(572, 144, 24, 24);

    juce__label18.reset(new juce::Label("new label",
        TRANS("16")));
    addAndMakeVisible(juce__label18.get());
    juce__label18->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label18->setJustificationType(juce::Justification::centred);
    juce__label18->setEditable(false, false, false);
    juce__label18->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label18->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label18->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label18->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label18->setBounds(596, 144, 24, 24);

    juce__label19.reset(new juce::Label("new label",
        TRANS("17")));
    addAndMakeVisible(juce__label19.get());
    juce__label19->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label19->setJustificationType(juce::Justification::centred);
    juce__label19->setEditable(false, false, false);
    juce__label19->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label19->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label19->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label19->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label19->setBounds(620, 144, 24, 24);

    juce__label20.reset(new juce::Label("new label",
        TRANS("18")));
    addAndMakeVisible(juce__label20.get());
    juce__label20->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label20->setJustificationType(juce::Justification::centred);
    juce__label20->setEditable(false, false, false);
    juce__label20->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label20->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label20->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label20->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label20->setBounds(644, 144, 24, 24);

    juce__label21.reset(new juce::Label("new label",
        TRANS("19")));
    addAndMakeVisible(juce__label21.get());
    juce__label21->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label21->setJustificationType(juce::Justification::centred);
    juce__label21->setEditable(false, false, false);
    juce__label21->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label21->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label21->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label21->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label21->setBounds(668, 144, 24, 24);

    juce__label22.reset(new juce::Label("new label",
        TRANS("20")));
    addAndMakeVisible(juce__label22.get());
    juce__label22->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label22->setJustificationType(juce::Justification::centred);
    juce__label22->setEditable(false, false, false);
    juce__label22->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label22->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label22->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label22->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label22->setBounds(692, 144, 24, 24);

    juce__label23.reset(new juce::Label("new label",
        TRANS("21")));
    addAndMakeVisible(juce__label23.get());
    juce__label23->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label23->setJustificationType(juce::Justification::centred);
    juce__label23->setEditable(false, false, false);
    juce__label23->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label23->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label23->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label23->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label23->setBounds(716, 144, 24, 24);

    juce__label24.reset(new juce::Label("new label",
        TRANS("22")));
    addAndMakeVisible(juce__label24.get());
    juce__label24->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label24->setJustificationType(juce::Justification::centred);
    juce__label24->setEditable(false, false, false);
    juce__label24->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label24->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label24->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label24->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label24->setBounds(746, 144, 24, 24);

    juce__label25.reset(new juce::Label("new label",
        TRANS("23")));
    addAndMakeVisible(juce__label25.get());
    juce__label25->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label25->setJustificationType(juce::Justification::centred);
    juce__label25->setEditable(false, false, false);
    juce__label25->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label25->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label25->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label25->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label25->setBounds(770, 144, 24, 24);

    juce__label26.reset(new juce::Label("new label",
        TRANS("24")));
    addAndMakeVisible(juce__label26.get());
    juce__label26->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label26->setJustificationType(juce::Justification::centred);
    juce__label26->setEditable(false, false, false);
    juce__label26->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label26->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label26->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label26->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label26->setBounds(794, 144, 24, 24);

    juce__label27.reset(new juce::Label("new label",
        TRANS("25")));
    addAndMakeVisible(juce__label27.get());
    juce__label27->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label27->setJustificationType(juce::Justification::centred);
    juce__label27->setEditable(false, false, false);
    juce__label27->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label27->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label27->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label27->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label27->setBounds(818, 144, 24, 24);

    juce__label28.reset(new juce::Label("new label",
        TRANS("26")));
    addAndMakeVisible(juce__label28.get());
    juce__label28->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label28->setJustificationType(juce::Justification::centred);
    juce__label28->setEditable(false, false, false);
    juce__label28->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label28->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label28->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label28->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label28->setBounds(842, 144, 24, 24);

    juce__label29.reset(new juce::Label("new label",
        TRANS("27")));
    addAndMakeVisible(juce__label29.get());
    juce__label29->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label29->setJustificationType(juce::Justification::centred);
    juce__label29->setEditable(false, false, false);
    juce__label29->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label29->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label29->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label29->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label29->setBounds(866, 144, 24, 24);

    juce__label30.reset(new juce::Label("new label",
        TRANS("28")));
    addAndMakeVisible(juce__label30.get());
    juce__label30->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label30->setJustificationType(juce::Justification::centred);
    juce__label30->setEditable(false, false, false);
    juce__label30->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label30->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label30->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label30->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label30->setBounds(890, 144, 24, 24);

    juce__label31.reset(new juce::Label("new label",
        TRANS("1")));
    addAndMakeVisible(juce__label31.get());
    juce__label31->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label31->setJustificationType(juce::Justification::centred);
    juce__label31->setEditable(false, false, false);
    juce__label31->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label31->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label31->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label31->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label31->setBounds(225, 208, 24, 24);

    juce__label32.reset(new juce::Label("new label",
        TRANS("2")));
    addAndMakeVisible(juce__label32.get());
    juce__label32->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label32->setJustificationType(juce::Justification::centred);
    juce__label32->setEditable(false, false, false);
    juce__label32->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label32->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label32->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label32->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label32->setBounds(249, 208, 24, 24);

    juce__label33.reset(new juce::Label("new label",
        TRANS("3")));
    addAndMakeVisible(juce__label33.get());
    juce__label33->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label33->setJustificationType(juce::Justification::centred);
    juce__label33->setEditable(false, false, false);
    juce__label33->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label33->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label33->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label33->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label33->setBounds(273, 208, 24, 24);

    juce__label34.reset(new juce::Label("new label",
        TRANS("4")));
    addAndMakeVisible(juce__label34.get());
    juce__label34->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label34->setJustificationType(juce::Justification::centred);
    juce__label34->setEditable(false, false, false);
    juce__label34->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label34->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label34->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label34->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label34->setBounds(297, 208, 24, 24);

    juce__label35.reset(new juce::Label("new label",
        TRANS("5")));
    addAndMakeVisible(juce__label35.get());
    juce__label35->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label35->setJustificationType(juce::Justification::centred);
    juce__label35->setEditable(false, false, false);
    juce__label35->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label35->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label35->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label35->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label35->setBounds(321, 208, 24, 24);

    juce__label36.reset(new juce::Label("new label",
        TRANS("6")));
    addAndMakeVisible(juce__label36.get());
    juce__label36->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label36->setJustificationType(juce::Justification::centred);
    juce__label36->setEditable(false, false, false);
    juce__label36->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label36->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label36->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label36->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label36->setBounds(345, 208, 24, 24);

    juce__label37.reset(new juce::Label("new label",
        TRANS("7")));
    addAndMakeVisible(juce__label37.get());
    juce__label37->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label37->setJustificationType(juce::Justification::centred);
    juce__label37->setEditable(false, false, false);
    juce__label37->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label37->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label37->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label37->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label37->setBounds(369, 208, 24, 24);

    juce__label38.reset(new juce::Label("new label",
        TRANS("8")));
    addAndMakeVisible(juce__label38.get());
    juce__label38->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label38->setJustificationType(juce::Justification::centred);
    juce__label38->setEditable(false, false, false);
    juce__label38->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label38->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label38->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label38->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label38->setBounds(399, 208, 24, 24);

    juce__label39.reset(new juce::Label("new label",
        TRANS("9")));
    addAndMakeVisible(juce__label39.get());
    juce__label39->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label39->setJustificationType(juce::Justification::centred);
    juce__label39->setEditable(false, false, false);
    juce__label39->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label39->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label39->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label39->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label39->setBounds(423, 208, 24, 24);

    juce__label40.reset(new juce::Label("new label",
        TRANS("10")));
    addAndMakeVisible(juce__label40.get());
    juce__label40->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label40->setJustificationType(juce::Justification::centred);
    juce__label40->setEditable(false, false, false);
    juce__label40->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label40->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label40->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label40->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label40->setBounds(447, 208, 24, 24);

    juce__label41.reset(new juce::Label("new label",
        TRANS("11")));
    addAndMakeVisible(juce__label41.get());
    juce__label41->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label41->setJustificationType(juce::Justification::centred);
    juce__label41->setEditable(false, false, false);
    juce__label41->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label41->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label41->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label41->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label41->setBounds(471, 208, 24, 24);

    juce__label42.reset(new juce::Label("new label",
        TRANS("12")));
    addAndMakeVisible(juce__label42.get());
    juce__label42->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label42->setJustificationType(juce::Justification::centred);
    juce__label42->setEditable(false, false, false);
    juce__label42->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label42->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label42->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label42->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label42->setBounds(495, 208, 24, 24);

    juce__label43.reset(new juce::Label("new label",
        TRANS("13")));
    addAndMakeVisible(juce__label43.get());
    juce__label43->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label43->setJustificationType(juce::Justification::centred);
    juce__label43->setEditable(false, false, false);
    juce__label43->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label43->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label43->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label43->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label43->setBounds(519, 208, 24, 24);

    juce__label44.reset(new juce::Label("new label",
        TRANS("14")));
    addAndMakeVisible(juce__label44.get());
    juce__label44->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label44->setJustificationType(juce::Justification::centred);
    juce__label44->setEditable(false, false, false);
    juce__label44->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label44->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label44->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label44->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label44->setBounds(543, 208, 24, 24);

    juce__label45.reset(new juce::Label("new label",
        TRANS("15")));
    addAndMakeVisible(juce__label45.get());
    juce__label45->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label45->setJustificationType(juce::Justification::centred);
    juce__label45->setEditable(false, false, false);
    juce__label45->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label45->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label45->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label45->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label45->setBounds(573, 208, 24, 24);

    juce__label46.reset(new juce::Label("new label",
        TRANS("16")));
    addAndMakeVisible(juce__label46.get());
    juce__label46->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label46->setJustificationType(juce::Justification::centred);
    juce__label46->setEditable(false, false, false);
    juce__label46->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label46->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label46->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label46->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label46->setBounds(597, 208, 24, 24);

    juce__label47.reset(new juce::Label("new label",
        TRANS("17")));
    addAndMakeVisible(juce__label47.get());
    juce__label47->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label47->setJustificationType(juce::Justification::centred);
    juce__label47->setEditable(false, false, false);
    juce__label47->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label47->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label47->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label47->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label47->setBounds(621, 208, 24, 24);

    juce__label48.reset(new juce::Label("new label",
        TRANS("18")));
    addAndMakeVisible(juce__label48.get());
    juce__label48->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label48->setJustificationType(juce::Justification::centred);
    juce__label48->setEditable(false, false, false);
    juce__label48->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label48->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label48->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label48->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label48->setBounds(645, 208, 24, 24);

    juce__label49.reset(new juce::Label("new label",
        TRANS("19")));
    addAndMakeVisible(juce__label49.get());
    juce__label49->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label49->setJustificationType(juce::Justification::centred);
    juce__label49->setEditable(false, false, false);
    juce__label49->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label49->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label49->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label49->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label49->setBounds(669, 208, 24, 24);

    juce__label50.reset(new juce::Label("new label",
        TRANS("20")));
    addAndMakeVisible(juce__label50.get());
    juce__label50->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label50->setJustificationType(juce::Justification::centred);
    juce__label50->setEditable(false, false, false);
    juce__label50->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label50->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label50->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label50->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label50->setBounds(693, 208, 24, 24);

    juce__label51.reset(new juce::Label("new label",
        TRANS("21")));
    addAndMakeVisible(juce__label51.get());
    juce__label51->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label51->setJustificationType(juce::Justification::centred);
    juce__label51->setEditable(false, false, false);
    juce__label51->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label51->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label51->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label51->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label51->setBounds(717, 208, 24, 24);

    juce__label52.reset(new juce::Label("new label",
        TRANS("22")));
    addAndMakeVisible(juce__label52.get());
    juce__label52->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label52->setJustificationType(juce::Justification::centred);
    juce__label52->setEditable(false, false, false);
    juce__label52->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label52->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label52->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label52->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label52->setBounds(747, 208, 24, 24);

    juce__label53.reset(new juce::Label("new label",
        TRANS("23")));
    addAndMakeVisible(juce__label53.get());
    juce__label53->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label53->setJustificationType(juce::Justification::centred);
    juce__label53->setEditable(false, false, false);
    juce__label53->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label53->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label53->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label53->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label53->setBounds(771, 208, 24, 24);

    juce__label54.reset(new juce::Label("new label",
        TRANS("24")));
    addAndMakeVisible(juce__label54.get());
    juce__label54->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label54->setJustificationType(juce::Justification::centred);
    juce__label54->setEditable(false, false, false);
    juce__label54->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label54->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label54->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label54->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label54->setBounds(795, 208, 24, 24);

    juce__label55.reset(new juce::Label("new label",
        TRANS("25")));
    addAndMakeVisible(juce__label55.get());
    juce__label55->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label55->setJustificationType(juce::Justification::centred);
    juce__label55->setEditable(false, false, false);
    juce__label55->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label55->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label55->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label55->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label55->setBounds(819, 208, 24, 24);

    juce__label56.reset(new juce::Label("new label",
        TRANS("26")));
    addAndMakeVisible(juce__label56.get());
    juce__label56->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label56->setJustificationType(juce::Justification::centred);
    juce__label56->setEditable(false, false, false);
    juce__label56->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label56->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label56->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label56->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label56->setBounds(843, 208, 24, 24);

    juce__label57.reset(new juce::Label("new label",
        TRANS("27")));
    addAndMakeVisible(juce__label57.get());
    juce__label57->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label57->setJustificationType(juce::Justification::centred);
    juce__label57->setEditable(false, false, false);
    juce__label57->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label57->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label57->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label57->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label57->setBounds(867, 208, 24, 24);

    juce__label58.reset(new juce::Label("new label",
        TRANS("28")));
    addAndMakeVisible(juce__label58.get());
    juce__label58->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label58->setJustificationType(juce::Justification::centred);
    juce__label58->setEditable(false, false, false);
    juce__label58->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label58->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label58->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label58->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label58->setBounds(891, 208, 24, 24);

    juce__label59.reset(new juce::Label("new label",
        TRANS("1")));
    addAndMakeVisible(juce__label59.get());
    juce__label59->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label59->setJustificationType(juce::Justification::centred);
    juce__label59->setEditable(false, false, false);
    juce__label59->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label59->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label59->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label59->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label59->setBounds(225, 272, 24, 24);

    juce__label60.reset(new juce::Label("new label",
        TRANS("2")));
    addAndMakeVisible(juce__label60.get());
    juce__label60->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label60->setJustificationType(juce::Justification::centred);
    juce__label60->setEditable(false, false, false);
    juce__label60->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label60->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label60->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label60->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label60->setBounds(249, 272, 24, 24);

    juce__label61.reset(new juce::Label("new label",
        TRANS("3")));
    addAndMakeVisible(juce__label61.get());
    juce__label61->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label61->setJustificationType(juce::Justification::centred);
    juce__label61->setEditable(false, false, false);
    juce__label61->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label61->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label61->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label61->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label61->setBounds(273, 272, 24, 24);

    juce__label62.reset(new juce::Label("new label",
        TRANS("4")));
    addAndMakeVisible(juce__label62.get());
    juce__label62->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label62->setJustificationType(juce::Justification::centred);
    juce__label62->setEditable(false, false, false);
    juce__label62->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label62->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label62->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label62->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label62->setBounds(297, 272, 24, 24);

    juce__label63.reset(new juce::Label("new label",
        TRANS("5")));
    addAndMakeVisible(juce__label63.get());
    juce__label63->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label63->setJustificationType(juce::Justification::centred);
    juce__label63->setEditable(false, false, false);
    juce__label63->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label63->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label63->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label63->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label63->setBounds(321, 272, 24, 24);

    juce__label64.reset(new juce::Label("new label",
        TRANS("6")));
    addAndMakeVisible(juce__label64.get());
    juce__label64->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label64->setJustificationType(juce::Justification::centred);
    juce__label64->setEditable(false, false, false);
    juce__label64->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label64->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label64->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label64->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label64->setBounds(345, 272, 24, 24);

    juce__label65.reset(new juce::Label("new label",
        TRANS("7")));
    addAndMakeVisible(juce__label65.get());
    juce__label65->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label65->setJustificationType(juce::Justification::centred);
    juce__label65->setEditable(false, false, false);
    juce__label65->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label65->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label65->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label65->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label65->setBounds(369, 272, 24, 24);

    juce__label66.reset(new juce::Label("new label",
        TRANS("8")));
    addAndMakeVisible(juce__label66.get());
    juce__label66->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label66->setJustificationType(juce::Justification::centred);
    juce__label66->setEditable(false, false, false);
    juce__label66->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label66->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label66->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label66->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label66->setBounds(399, 272, 24, 24);

    juce__label67.reset(new juce::Label("new label",
        TRANS("9")));
    addAndMakeVisible(juce__label67.get());
    juce__label67->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label67->setJustificationType(juce::Justification::centred);
    juce__label67->setEditable(false, false, false);
    juce__label67->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label67->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label67->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label67->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label67->setBounds(423, 272, 24, 24);

    juce__label68.reset(new juce::Label("new label",
        TRANS("10")));
    addAndMakeVisible(juce__label68.get());
    juce__label68->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label68->setJustificationType(juce::Justification::centred);
    juce__label68->setEditable(false, false, false);
    juce__label68->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label68->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label68->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label68->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label68->setBounds(447, 272, 24, 24);

    juce__label69.reset(new juce::Label("new label",
        TRANS("11")));
    addAndMakeVisible(juce__label69.get());
    juce__label69->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label69->setJustificationType(juce::Justification::centred);
    juce__label69->setEditable(false, false, false);
    juce__label69->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label69->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label69->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label69->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label69->setBounds(471, 272, 24, 24);

    juce__label70.reset(new juce::Label("new label",
        TRANS("12")));
    addAndMakeVisible(juce__label70.get());
    juce__label70->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label70->setJustificationType(juce::Justification::centred);
    juce__label70->setEditable(false, false, false);
    juce__label70->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label70->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label70->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label70->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label70->setBounds(495, 272, 24, 24);

    juce__label71.reset(new juce::Label("new label",
        TRANS("13")));
    addAndMakeVisible(juce__label71.get());
    juce__label71->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label71->setJustificationType(juce::Justification::centred);
    juce__label71->setEditable(false, false, false);
    juce__label71->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label71->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label71->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label71->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label71->setBounds(519, 272, 24, 24);

    juce__label72.reset(new juce::Label("new label",
        TRANS("14")));
    addAndMakeVisible(juce__label72.get());
    juce__label72->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label72->setJustificationType(juce::Justification::centred);
    juce__label72->setEditable(false, false, false);
    juce__label72->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label72->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label72->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label72->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label72->setBounds(543, 272, 24, 24);

    juce__label73.reset(new juce::Label("new label",
        TRANS("15")));
    addAndMakeVisible(juce__label73.get());
    juce__label73->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label73->setJustificationType(juce::Justification::centred);
    juce__label73->setEditable(false, false, false);
    juce__label73->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label73->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label73->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label73->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label73->setBounds(573, 272, 24, 24);

    juce__label74.reset(new juce::Label("new label",
        TRANS("16")));
    addAndMakeVisible(juce__label74.get());
    juce__label74->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label74->setJustificationType(juce::Justification::centred);
    juce__label74->setEditable(false, false, false);
    juce__label74->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label74->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label74->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label74->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label74->setBounds(597, 272, 24, 24);

    juce__label75.reset(new juce::Label("new label",
        TRANS("17")));
    addAndMakeVisible(juce__label75.get());
    juce__label75->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label75->setJustificationType(juce::Justification::centred);
    juce__label75->setEditable(false, false, false);
    juce__label75->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label75->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label75->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label75->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label75->setBounds(621, 272, 24, 24);

    juce__label76.reset(new juce::Label("new label",
        TRANS("18")));
    addAndMakeVisible(juce__label76.get());
    juce__label76->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label76->setJustificationType(juce::Justification::centred);
    juce__label76->setEditable(false, false, false);
    juce__label76->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label76->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label76->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label76->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label76->setBounds(645, 272, 24, 24);

    juce__label77.reset(new juce::Label("new label",
        TRANS("19")));
    addAndMakeVisible(juce__label77.get());
    juce__label77->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label77->setJustificationType(juce::Justification::centred);
    juce__label77->setEditable(false, false, false);
    juce__label77->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label77->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label77->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label77->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label77->setBounds(669, 272, 24, 24);

    juce__label78.reset(new juce::Label("new label",
        TRANS("20")));
    addAndMakeVisible(juce__label78.get());
    juce__label78->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label78->setJustificationType(juce::Justification::centred);
    juce__label78->setEditable(false, false, false);
    juce__label78->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label78->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label78->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label78->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label78->setBounds(693, 272, 24, 24);

    juce__label79.reset(new juce::Label("new label",
        TRANS("21")));
    addAndMakeVisible(juce__label79.get());
    juce__label79->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label79->setJustificationType(juce::Justification::centred);
    juce__label79->setEditable(false, false, false);
    juce__label79->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label79->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label79->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label79->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label79->setBounds(717, 272, 24, 24);

    juce__label80.reset(new juce::Label("new label",
        TRANS("22")));
    addAndMakeVisible(juce__label80.get());
    juce__label80->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label80->setJustificationType(juce::Justification::centred);
    juce__label80->setEditable(false, false, false);
    juce__label80->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label80->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label80->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label80->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label80->setBounds(747, 272, 24, 24);

    juce__label81.reset(new juce::Label("new label",
        TRANS("23")));
    addAndMakeVisible(juce__label81.get());
    juce__label81->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label81->setJustificationType(juce::Justification::centred);
    juce__label81->setEditable(false, false, false);
    juce__label81->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label81->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label81->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label81->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label81->setBounds(771, 272, 24, 24);

    juce__label82.reset(new juce::Label("new label",
        TRANS("24")));
    addAndMakeVisible(juce__label82.get());
    juce__label82->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label82->setJustificationType(juce::Justification::centred);
    juce__label82->setEditable(false, false, false);
    juce__label82->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label82->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label82->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label82->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label82->setBounds(795, 272, 24, 24);

    juce__label83.reset(new juce::Label("new label",
        TRANS("25")));
    addAndMakeVisible(juce__label83.get());
    juce__label83->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label83->setJustificationType(juce::Justification::centred);
    juce__label83->setEditable(false, false, false);
    juce__label83->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label83->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label83->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label83->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label83->setBounds(819, 272, 24, 24);

    juce__label84.reset(new juce::Label("new label",
        TRANS("26")));
    addAndMakeVisible(juce__label84.get());
    juce__label84->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label84->setJustificationType(juce::Justification::centred);
    juce__label84->setEditable(false, false, false);
    juce__label84->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label84->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label84->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label84->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label84->setBounds(843, 272, 24, 24);

    juce__label85.reset(new juce::Label("new label",
        TRANS("27")));
    addAndMakeVisible(juce__label85.get());
    juce__label85->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label85->setJustificationType(juce::Justification::centred);
    juce__label85->setEditable(false, false, false);
    juce__label85->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label85->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label85->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label85->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label85->setBounds(867, 272, 24, 24);

    juce__label86.reset(new juce::Label("new label",
        TRANS("28")));
    addAndMakeVisible(juce__label86.get());
    juce__label86->setFont(juce::Font(15.00f, juce::Font::plain).withTypefaceStyle("Regular"));
    juce__label86->setJustificationType(juce::Justification::centred);
    juce__label86->setEditable(false, false, false);
    juce__label86->setColour(juce::Label::backgroundColourId, juce::Colours::grey);
    juce__label86->setColour(juce::Label::textColourId, juce::Colours::black);
    juce__label86->setColour(juce::TextEditor::textColourId, juce::Colours::black);
    juce__label86->setColour(juce::TextEditor::backgroundColourId, juce::Colour(0x00000000));

    juce__label86->setBounds(891, 272, 24, 24);

    //[UserPreSize]
    //[/UserPreSize]

    setSize(600, 400);

    //[Constructor] You can add your own custom stuff here..
    //get tips from CSV file
    readRandomTips();
    //so it won't crash if the loading of random tips was unsuccessfull
    if (randomTips.size() > 0)
    {
        //get random tip from vector of strings
        int tipslength = randomTips.size();
        int tipID = rand() % tipslength;
        //std::string newText = "Daily Tip: \n" + randomTips[tipID];

        juce__label2->setText(randomTips[tipID], juce::NotificationType::dontSendNotification);
    }

    habitManager.init(); //Initializing the habitManager object

    setSize(1020, 620);
    newHelpWindow.reset(new HelpForm());
    newHelpWindow->setBounds(185, 90, 1020 - 185, 620 - 90);

    newHabitForm.reset(new HabitForm());
    newHabitForm->setBounds(185, 90, 1020 - 185, 620 - 90);

    newResourcesForm.reset(new ResourcesForm());
    newResourcesForm->setBounds(185, 90, 1020 - 185, 620 - 90);

    newDiaryForm.reset(new DiaryForm());
    newDiaryForm->setBounds(185, 90, 1020 - 185, 620 - 90);

    if (habitManager.habitsVector.size() == 0)
    {
        juce__textButton6->setVisible(false);
        juce__textButton7->setVisible(false);
        juce__textButton8->setVisible(false);

        colorLabels(0);
    }
    // According to the number of habits, add buttons. Assign habit names to buttons.
    else if (habitManager.habitsVector.size() == 1)
    {
        juce__textButton6->setVisible(true);
        juce__textButton6->setButtonText(TRANS(habitManager.habitsVector[0].name));
        juce__textButton7->setVisible(false);
        juce__textButton8->setVisible(false);

        colorLabels(1);
    }
    else if (habitManager.habitsVector.size() == 2)
    {
        juce__textButton6->setVisible(true);
        juce__textButton7->setVisible(true);
        juce__textButton8->setVisible(false);
        juce__textButton6->setButtonText(TRANS(habitManager.habitsVector[0].name));

        juce__textButton7->setButtonText(TRANS(habitManager.habitsVector[1].name));

        colorLabels(2);
    }
    else if (habitManager.habitsVector.size() == 3)
    {
        juce__textButton6->setVisible(true);
        juce__textButton7->setVisible(true);
        juce__textButton8->setVisible(true);
        juce__textButton6->setButtonText(TRANS(habitManager.habitsVector[0].name));

        juce__textButton7->setButtonText(TRANS(habitManager.habitsVector[1].name));

        juce__textButton8->setButtonText(TRANS(habitManager.habitsVector[2].name));

        colorLabels(3);
    }

    //colorLabels();

    //newHelpWindow
    //[/Constructor]
}

MainForm::~MainForm()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    juce__groupComponent2 = nullptr;
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
    juce__label3 = nullptr;
    juce__label4 = nullptr;
    juce__label5 = nullptr;
    juce__label6 = nullptr;
    juce__label7 = nullptr;
    juce__label8 = nullptr;
    juce__label9 = nullptr;
    juce__label10 = nullptr;
    juce__label11 = nullptr;
    juce__label12 = nullptr;
    juce__label13 = nullptr;
    juce__label14 = nullptr;
    juce__label15 = nullptr;
    juce__label16 = nullptr;
    juce__label17 = nullptr;
    juce__label18 = nullptr;
    juce__label19 = nullptr;
    juce__label20 = nullptr;
    juce__label21 = nullptr;
    juce__label22 = nullptr;
    juce__label23 = nullptr;
    juce__label24 = nullptr;
    juce__label25 = nullptr;
    juce__label26 = nullptr;
    juce__label27 = nullptr;
    juce__label28 = nullptr;
    juce__label29 = nullptr;
    juce__label30 = nullptr;
    juce__label31 = nullptr;
    juce__label32 = nullptr;
    juce__label33 = nullptr;
    juce__label34 = nullptr;
    juce__label35 = nullptr;
    juce__label36 = nullptr;
    juce__label37 = nullptr;
    juce__label38 = nullptr;
    juce__label39 = nullptr;
    juce__label40 = nullptr;
    juce__label41 = nullptr;
    juce__label42 = nullptr;
    juce__label43 = nullptr;
    juce__label44 = nullptr;
    juce__label45 = nullptr;
    juce__label46 = nullptr;
    juce__label47 = nullptr;
    juce__label48 = nullptr;
    juce__label49 = nullptr;
    juce__label50 = nullptr;
    juce__label51 = nullptr;
    juce__label52 = nullptr;
    juce__label53 = nullptr;
    juce__label54 = nullptr;
    juce__label55 = nullptr;
    juce__label56 = nullptr;
    juce__label57 = nullptr;
    juce__label58 = nullptr;
    juce__label59 = nullptr;
    juce__label60 = nullptr;
    juce__label61 = nullptr;
    juce__label62 = nullptr;
    juce__label63 = nullptr;
    juce__label64 = nullptr;
    juce__label65 = nullptr;
    juce__label66 = nullptr;
    juce__label67 = nullptr;
    juce__label68 = nullptr;
    juce__label69 = nullptr;
    juce__label70 = nullptr;
    juce__label71 = nullptr;
    juce__label72 = nullptr;
    juce__label73 = nullptr;
    juce__label74 = nullptr;
    juce__label75 = nullptr;
    juce__label76 = nullptr;
    juce__label77 = nullptr;
    juce__label78 = nullptr;
    juce__label79 = nullptr;
    juce__label80 = nullptr;
    juce__label81 = nullptr;
    juce__label82 = nullptr;
    juce__label83 = nullptr;
    juce__label84 = nullptr;
    juce__label85 = nullptr;
    juce__label86 = nullptr;

    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainForm::paint(juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll(juce::Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //draw LOGO
    juce::String filePath = juce::File::getCurrentWorkingDirectory().getFullPathName();
    filePath.toStdString();
    juce::File banner{ filePath + "logo.png"};
    juce::Image imageLoaded{ juce::ImageFileFormat::loadFrom(banner) };
    g.drawImageWithin(imageLoaded, 208, 8, 200, 80, 1, false);
    juce__label->setVisible(false);
    // g.fillAll (juce::Colours::darklightgrey);
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

void MainForm::buttonClicked(juce::Button* buttonThatWasClicked)
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

        juce__textButton->setColour(juce::TextButton::buttonColourId, juce::Colours::goldenrod);
        juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton3->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton4->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton5->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));

        //refresh the names of the habits when MAIN PAGE is clicked
        habitManager.init();
        if (habitManager.habitsVector.size() == 0)
        {
            juce__textButton6->setVisible(false);
            juce__textButton7->setVisible(false);
            juce__textButton8->setVisible(false);

            colorLabels(0);
        }
        // According to the number of habits, add buttons. Assign habit names to buttons.
        else if (habitManager.habitsVector.size() == 1)
        {
            juce__textButton6->setVisible(true);
            juce__textButton6->setButtonText(TRANS(habitManager.habitsVector[0].name));
            juce__textButton7->setVisible(false);
            juce__textButton8->setVisible(false);
            colorLabels(1);
        }
        else if (habitManager.habitsVector.size() == 2)
        {
            juce__textButton6->setVisible(true);
            juce__textButton7->setVisible(true);
            juce__textButton8->setVisible(false);
            juce__textButton6->setButtonText(TRANS(habitManager.habitsVector[0].name));

            juce__textButton7->setButtonText(TRANS(habitManager.habitsVector[1].name));

            colorLabels(2);
        }
        else if (habitManager.habitsVector.size() == 3)
        {
            juce__textButton6->setVisible(true);
            juce__textButton7->setVisible(true);
            juce__textButton8->setVisible(true);
            juce__textButton6->setButtonText(TRANS(habitManager.habitsVector[0].name));

            juce__textButton7->setButtonText(TRANS(habitManager.habitsVector[1].name));

            juce__textButton8->setButtonText(TRANS(habitManager.habitsVector[2].name));

            colorLabels(3);
        }

        //get new random tip
        if (randomTips.size() > 0)
        {
            int tipslength = randomTips.size();
            int tipID = rand() % tipslength;
            //std::string newText = "Daily Tip: \n" + randomTips[tipID];

            juce__label2->setText(randomTips[tipID], juce::NotificationType::dontSendNotification);
        }

        //[/UserButtonCode_juce__textButton]
    }
    else if (buttonThatWasClicked == juce__textButton2.get())
    {
        //[UserButtonCode_juce__textButton2] -- add your button handler code here..
        newHelpWindow->setVisible(false);
        newResourcesForm->setVisible(false);
        newDiaryForm->setVisible(false);

        addAndMakeVisible(newHabitForm.get());

        juce__textButton->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colours::goldenrod);
        juce__textButton3->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton4->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton5->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));

        //[/UserButtonCode_juce__textButton2]
    }
    else if (buttonThatWasClicked == juce__textButton3.get())
    {
        //[UserButtonCode_juce__textButton3] -- add your button handler code here..
        newHelpWindow->setVisible(false);
        newHabitForm->setVisible(false);
        newDiaryForm->setVisible(false);

        addAndMakeVisible(newResourcesForm.get());

        juce__textButton->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton3->setColour(juce::TextButton::buttonColourId, juce::Colours::goldenrod);
        juce__textButton4->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton5->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        //[/UserButtonCode_juce__textButton3]
    }
    else if (buttonThatWasClicked == juce__textButton4.get())
    {
        //[UserButtonCode_juce__textButton4] -- add your button handler code here..
        newHelpWindow->setVisible(false);
        newHabitForm->setVisible(false);
        newResourcesForm->setVisible(false);

        addAndMakeVisible(newDiaryForm.get());

        juce__textButton->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton3->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton4->setColour(juce::TextButton::buttonColourId, juce::Colours::goldenrod);
        juce__textButton5->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        //[/UserButtonCode_juce__textButton4]
    }
    else if (buttonThatWasClicked == juce__textButton5.get())
    {
        //[UserButtonCode_juce__textButton5] -- add your button handler code here..
        newHabitForm->setVisible(false);
        newResourcesForm->setVisible(false);
        newDiaryForm->setVisible(false);

        addAndMakeVisible(newHelpWindow.get());

        juce__textButton->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton3->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton4->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton5->setColour(juce::TextButton::buttonColourId, juce::Colours::goldenrod);

        //[/UserButtonCode_juce__textButton5]
    }
    else if (buttonThatWasClicked == juce__textButton6.get())
    {
        //[UserButtonCode_juce__textButton6] -- add your button handler code here..
        newHelpWindow->setVisible(false);
        newResourcesForm->setVisible(false);
        newDiaryForm->setVisible(false);

        addAndMakeVisible(newHabitForm.get());

        juce__textButton->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colours::goldenrod);
        juce__textButton3->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton4->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton5->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));

        //[/UserButtonCode_juce__textButton6]
    }
    else if (buttonThatWasClicked == juce__textButton7.get())
    {
        //[UserButtonCode_juce__textButton7] -- add your button handler code here..
        newHelpWindow->setVisible(false);
        newResourcesForm->setVisible(false);
        newDiaryForm->setVisible(false);

        addAndMakeVisible(newHabitForm.get());

        juce__textButton->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colours::goldenrod);
        juce__textButton3->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton4->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton5->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        //[/UserButtonCode_juce__textButton7]
    }
    else if (buttonThatWasClicked == juce__textButton8.get())
    {
        //[UserButtonCode_juce__textButton8] -- add your button handler code here..
        newHelpWindow->setVisible(false);
        newResourcesForm->setVisible(false);
        newDiaryForm->setVisible(false);

        addAndMakeVisible(newHabitForm.get());

        juce__textButton->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton2->setColour(juce::TextButton::buttonColourId, juce::Colours::goldenrod);
        juce__textButton3->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton4->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        juce__textButton5->setColour(juce::TextButton::buttonColourId, juce::Colour(0xfffdcb33));
        //[/UserButtonCode_juce__textButton8]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//

void MainForm::setDailyLabels(juce::Label* lbl, std::string dailyStatus)
{
    //addAndMakeVisible(btn);
    if (dailyStatus == "Yes")
    {
        lbl->setColour(juce::Label::backgroundColourId, juce::Colours::green);
    }
    else if (dailyStatus == "No")
    {
        lbl->setColour(juce::Label::backgroundColourId, juce::Colours::red);
    }
    else if (dailyStatus == "Unmarked")
    {
        lbl->setColour(juce::Label::backgroundColourId, juce::Colours::lightgrey);
    }

    //lbl->setBounds(bnd1, bnd2, bnd3, bnd4);
    //lbl->setLabelText(name);
    //btn->setClickingTogglesState(true);
}

void MainForm::colorLabels(int numberOfHabits)
{

    if (numberOfHabits == 0)
    {
        juce__label3->setVisible(false);
        juce__label13->setVisible(false);
        juce__label22->setVisible(false);
        juce__label4->setVisible(false);
        juce__label14->setVisible(false);
        juce__label23->setVisible(false);
        juce__label5->setVisible(false);
        juce__label15->setVisible(false);
        juce__label24->setVisible(false);
        juce__label6->setVisible(false);
        juce__label16->setVisible(false);
        juce__label25->setVisible(false);
        juce__label7->setVisible(false);
        juce__label17->setVisible(false);
        juce__label26->setVisible(false);
        juce__label8->setVisible(false);
        juce__label18->setVisible(false);
        juce__label27->setVisible(false);
        juce__label9->setVisible(false);
        juce__label19->setVisible(false);
        juce__label28->setVisible(false);
        juce__label10->setVisible(false);
        juce__label20->setVisible(false);
        juce__label29->setVisible(false);
        juce__label11->setVisible(false);
        juce__label21->setVisible(false);
        juce__label30->setVisible(false);
        juce__label12->setVisible(false);

        juce__label31->setVisible(false);
        juce__label32->setVisible(false);
        juce__label33->setVisible(false);
        juce__label34->setVisible(false);
        juce__label35->setVisible(false);
        juce__label36->setVisible(false);
        juce__label37->setVisible(false);
        juce__label38->setVisible(false);
        juce__label39->setVisible(false);
        juce__label40->setVisible(false);
        juce__label41->setVisible(false);
        juce__label42->setVisible(false);
        juce__label43->setVisible(false);
        juce__label44->setVisible(false);
        juce__label45->setVisible(false);
        juce__label46->setVisible(false);
        juce__label47->setVisible(false);
        juce__label48->setVisible(false);
        juce__label49->setVisible(false);
        juce__label50->setVisible(false);
        juce__label51->setVisible(false);
        juce__label52->setVisible(false);
        juce__label53->setVisible(false);
        juce__label54->setVisible(false);
        juce__label55->setVisible(false);
        juce__label56->setVisible(false);
        juce__label57->setVisible(false);
        juce__label58->setVisible(false);

        juce__label59->setVisible(false);
        juce__label69->setVisible(false);
        juce__label78->setVisible(false);
        juce__label60->setVisible(false);
        juce__label70->setVisible(false);
        juce__label79->setVisible(false);
        juce__label61->setVisible(false);
        juce__label71->setVisible(false);
        juce__label80->setVisible(false);
        juce__label62->setVisible(false);
        juce__label72->setVisible(false);
        juce__label81->setVisible(false);
        juce__label63->setVisible(false);
        juce__label73->setVisible(false);
        juce__label82->setVisible(false);
        juce__label64->setVisible(false);
        juce__label74->setVisible(false);
        juce__label83->setVisible(false);
        juce__label65->setVisible(false);
        juce__label75->setVisible(false);
        juce__label84->setVisible(false);
        juce__label66->setVisible(false);
        juce__label76->setVisible(false);
        juce__label85->setVisible(false);
        juce__label67->setVisible(false);
        juce__label77->setVisible(false);
        juce__label86->setVisible(false);
        juce__label68->setVisible(false);
    }

    if (numberOfHabits == 1)
    {
        //try {
        //    // Block of code to try
        //    throw exception; // Throw an exception when a problem arise
        //}
        //catch () {
        //    // Block of code to handle errors
        //}

        juce::String filePath = juce::File::getCurrentWorkingDirectory().getFullPathName();
        filePath.toStdString();

        juce::File habitsFile1(filePath + "\\HabitsFiles\\DailyTrack0.csv");
        juce::File habitsFile2(filePath + "\\HabitsFiles\\DailyTrack1.csv");
        juce::File habitsFile3(filePath + "\\HabitsFiles\\DailyTrack2.csv");

        if (habitsFile1.exists())
        {
            trackerEntriesVector = CSVOperator::readDailyTrackerCSV(0);
        }
        else if (habitsFile2.exists())
        {
            trackerEntriesVector = CSVOperator::readDailyTrackerCSV(1);
        }
        else if (habitsFile3.exists())
        {
            trackerEntriesVector = CSVOperator::readDailyTrackerCSV(2);
        }
        //trackerEntriesVector = CSVOperator::readDailyTrackerCSV(0);
        std::vector<std::string> statusVector = CSVOperator::returnDailyStatusVector(trackerEntriesVector);

        juce__label3->setVisible(true);
        juce__label13->setVisible(true);
        juce__label22->setVisible(true);
        juce__label4->setVisible(true);
        juce__label14->setVisible(true);
        juce__label23->setVisible(true);
        juce__label5->setVisible(true);
        juce__label15->setVisible(true);
        juce__label24->setVisible(true);
        juce__label6->setVisible(true);
        juce__label16->setVisible(true);
        juce__label25->setVisible(true);
        juce__label7->setVisible(true);
        juce__label17->setVisible(true);
        juce__label26->setVisible(true);
        juce__label8->setVisible(true);
        juce__label18->setVisible(true);
        juce__label27->setVisible(true);
        juce__label9->setVisible(true);
        juce__label19->setVisible(true);
        juce__label28->setVisible(true);
        juce__label10->setVisible(true);
        juce__label20->setVisible(true);
        juce__label29->setVisible(true);
        juce__label11->setVisible(true);
        juce__label21->setVisible(true);
        juce__label30->setVisible(true);
        juce__label12->setVisible(true);

        //std::string cont = statusVector[0];

        setDailyLabels(juce__label3.get(), statusVector[0]);
        setDailyLabels(juce__label4.get(), statusVector[1]);
        setDailyLabels(juce__label5.get(), statusVector[2]);
        setDailyLabels(juce__label6.get(), statusVector[3]);
        setDailyLabels(juce__label7.get(), statusVector[4]);
        setDailyLabels(juce__label8.get(), statusVector[5]);
        setDailyLabels(juce__label9.get(), statusVector[6]);
        setDailyLabels(juce__label10.get(), statusVector[7]);
        setDailyLabels(juce__label11.get(), statusVector[8]);
        setDailyLabels(juce__label12.get(), statusVector[9]);
        setDailyLabels(juce__label13.get(), statusVector[10]);
        setDailyLabels(juce__label14.get(), statusVector[11]);
        setDailyLabels(juce__label15.get(), statusVector[12]);
        setDailyLabels(juce__label16.get(), statusVector[13]);
        setDailyLabels(juce__label17.get(), statusVector[14]);
        setDailyLabels(juce__label18.get(), statusVector[15]);
        setDailyLabels(juce__label19.get(), statusVector[16]);
        setDailyLabels(juce__label20.get(), statusVector[17]);
        setDailyLabels(juce__label21.get(), statusVector[18]);
        setDailyLabels(juce__label22.get(), statusVector[19]);
        setDailyLabels(juce__label23.get(), statusVector[20]);
        setDailyLabels(juce__label24.get(), statusVector[21]);
        setDailyLabels(juce__label25.get(), statusVector[22]);
        setDailyLabels(juce__label26.get(), statusVector[23]);
        setDailyLabels(juce__label27.get(), statusVector[24]);
        setDailyLabels(juce__label28.get(), statusVector[25]);
        setDailyLabels(juce__label29.get(), statusVector[26]);
        setDailyLabels(juce__label30.get(), statusVector[27]);

        juce__label31->setVisible(false);
        juce__label32->setVisible(false);
        juce__label33->setVisible(false);
        juce__label34->setVisible(false);
        juce__label35->setVisible(false);
        juce__label36->setVisible(false);
        juce__label37->setVisible(false);
        juce__label38->setVisible(false);
        juce__label39->setVisible(false);
        juce__label40->setVisible(false);
        juce__label41->setVisible(false);
        juce__label42->setVisible(false);
        juce__label43->setVisible(false);
        juce__label44->setVisible(false);
        juce__label45->setVisible(false);
        juce__label46->setVisible(false);
        juce__label47->setVisible(false);
        juce__label48->setVisible(false);
        juce__label49->setVisible(false);
        juce__label50->setVisible(false);
        juce__label51->setVisible(false);
        juce__label52->setVisible(false);
        juce__label53->setVisible(false);
        juce__label54->setVisible(false);
        juce__label55->setVisible(false);
        juce__label56->setVisible(false);
        juce__label57->setVisible(false);
        juce__label58->setVisible(false);

        juce__label59->setVisible(false);
        juce__label69->setVisible(false);
        juce__label78->setVisible(false);
        juce__label60->setVisible(false);
        juce__label70->setVisible(false);
        juce__label79->setVisible(false);
        juce__label61->setVisible(false);
        juce__label71->setVisible(false);
        juce__label80->setVisible(false);
        juce__label62->setVisible(false);
        juce__label72->setVisible(false);
        juce__label81->setVisible(false);
        juce__label63->setVisible(false);
        juce__label73->setVisible(false);
        juce__label82->setVisible(false);
        juce__label64->setVisible(false);
        juce__label74->setVisible(false);
        juce__label83->setVisible(false);
        juce__label65->setVisible(false);
        juce__label75->setVisible(false);
        juce__label84->setVisible(false);
        juce__label66->setVisible(false);
        juce__label76->setVisible(false);
        juce__label85->setVisible(false);
        juce__label67->setVisible(false);
        juce__label77->setVisible(false);
        juce__label86->setVisible(false);
        juce__label68->setVisible(false);
    }

    if (numberOfHabits == 2)
    {
        juce::String filePath = juce::File::getCurrentWorkingDirectory().getFullPathName();
        filePath.toStdString();

        juce::File habitsFile1(filePath + "\\HabitsFiles\\DailyTrack0.csv");
        juce::File habitsFile2(filePath + "\\HabitsFiles\\DailyTrack1.csv");
        juce::File habitsFile3(filePath + "\\HabitsFiles\\DailyTrack2.csv");

        if (!habitsFile1.exists())
        {
            trackerEntriesVector = CSVOperator::readDailyTrackerCSV(1);
            trackerEntriesVector2 = CSVOperator::readDailyTrackerCSV(2);
        }
        else if (!habitsFile2.exists())
        {
            trackerEntriesVector = CSVOperator::readDailyTrackerCSV(0);
            trackerEntriesVector2 = CSVOperator::readDailyTrackerCSV(2);
        }
        else if (!habitsFile3.exists())
        {
            trackerEntriesVector = CSVOperator::readDailyTrackerCSV(0);
            trackerEntriesVector2 = CSVOperator::readDailyTrackerCSV(1);
        }

        std::vector<std::string> statusVector = CSVOperator::returnDailyStatusVector(trackerEntriesVector);

        std::vector<std::string> statusVector2 = CSVOperator::returnDailyStatusVector(trackerEntriesVector2);

        juce__label3->setVisible(true);
        juce__label13->setVisible(true);
        juce__label22->setVisible(true);
        juce__label4->setVisible(true);
        juce__label14->setVisible(true);
        juce__label23->setVisible(true);
        juce__label5->setVisible(true);
        juce__label15->setVisible(true);
        juce__label24->setVisible(true);
        juce__label6->setVisible(true);
        juce__label16->setVisible(true);
        juce__label25->setVisible(true);
        juce__label7->setVisible(true);
        juce__label17->setVisible(true);
        juce__label26->setVisible(true);
        juce__label8->setVisible(true);
        juce__label18->setVisible(true);
        juce__label27->setVisible(true);
        juce__label9->setVisible(true);
        juce__label19->setVisible(true);
        juce__label28->setVisible(true);
        juce__label10->setVisible(true);
        juce__label20->setVisible(true);
        juce__label29->setVisible(true);
        juce__label11->setVisible(true);
        juce__label21->setVisible(true);
        juce__label30->setVisible(true);
        juce__label12->setVisible(true);

        juce__label31->setVisible(true);
        juce__label32->setVisible(true);
        juce__label33->setVisible(true);
        juce__label34->setVisible(true);
        juce__label35->setVisible(true);
        juce__label36->setVisible(true);
        juce__label37->setVisible(true);
        juce__label38->setVisible(true);
        juce__label39->setVisible(true);
        juce__label40->setVisible(true);
        juce__label41->setVisible(true);
        juce__label42->setVisible(true);
        juce__label43->setVisible(true);
        juce__label44->setVisible(true);
        juce__label45->setVisible(true);
        juce__label46->setVisible(true);
        juce__label47->setVisible(true);
        juce__label48->setVisible(true);
        juce__label49->setVisible(true);
        juce__label50->setVisible(true);
        juce__label51->setVisible(true);
        juce__label52->setVisible(true);
        juce__label53->setVisible(true);
        juce__label54->setVisible(true);
        juce__label55->setVisible(true);
        juce__label56->setVisible(true);
        juce__label57->setVisible(true);
        juce__label58->setVisible(true);

        //std::string cont = statusVector[0];

        setDailyLabels(juce__label3.get(), statusVector[0]);
        setDailyLabels(juce__label4.get(), statusVector[1]);
        setDailyLabels(juce__label5.get(), statusVector[2]);
        setDailyLabels(juce__label6.get(), statusVector[3]);
        setDailyLabels(juce__label7.get(), statusVector[4]);
        setDailyLabels(juce__label8.get(), statusVector[5]);
        setDailyLabels(juce__label9.get(), statusVector[6]);
        setDailyLabels(juce__label10.get(), statusVector[7]);
        setDailyLabels(juce__label11.get(), statusVector[8]);
        setDailyLabels(juce__label12.get(), statusVector[9]);
        setDailyLabels(juce__label13.get(), statusVector[10]);
        setDailyLabels(juce__label14.get(), statusVector[11]);
        setDailyLabels(juce__label15.get(), statusVector[12]);
        setDailyLabels(juce__label16.get(), statusVector[13]);
        setDailyLabels(juce__label17.get(), statusVector[14]);
        setDailyLabels(juce__label18.get(), statusVector[15]);
        setDailyLabels(juce__label19.get(), statusVector[16]);
        setDailyLabels(juce__label20.get(), statusVector[17]);
        setDailyLabels(juce__label21.get(), statusVector[18]);
        setDailyLabels(juce__label22.get(), statusVector[19]);
        setDailyLabels(juce__label23.get(), statusVector[20]);
        setDailyLabels(juce__label24.get(), statusVector[21]);
        setDailyLabels(juce__label25.get(), statusVector[22]);
        setDailyLabels(juce__label26.get(), statusVector[23]);
        setDailyLabels(juce__label27.get(), statusVector[24]);
        setDailyLabels(juce__label28.get(), statusVector[25]);
        setDailyLabels(juce__label29.get(), statusVector[26]);
        setDailyLabels(juce__label30.get(), statusVector[27]);

        //std::string cont = statusVector[0];

        setDailyLabels(juce__label31.get(), statusVector2[0]);
        setDailyLabels(juce__label45.get(), statusVector2[14]);
        setDailyLabels(juce__label32.get(), statusVector2[1]);
        setDailyLabels(juce__label46.get(), statusVector2[15]);
        setDailyLabels(juce__label33.get(), statusVector2[2]);
        setDailyLabels(juce__label47.get(), statusVector2[16]);
        setDailyLabels(juce__label34.get(), statusVector2[3]);
        setDailyLabels(juce__label48.get(), statusVector2[17]);
        setDailyLabels(juce__label35.get(), statusVector2[4]);
        setDailyLabels(juce__label49.get(), statusVector2[18]);
        setDailyLabels(juce__label36.get(), statusVector2[5]);
        setDailyLabels(juce__label50.get(), statusVector2[19]);
        setDailyLabels(juce__label37.get(), statusVector2[6]);
        setDailyLabels(juce__label51.get(), statusVector2[20]);
        setDailyLabels(juce__label38.get(), statusVector2[7]);
        setDailyLabels(juce__label52.get(), statusVector2[21]);
        setDailyLabels(juce__label39.get(), statusVector2[8]);
        setDailyLabels(juce__label53.get(), statusVector2[22]);
        setDailyLabels(juce__label40.get(), statusVector2[9]);
        setDailyLabels(juce__label54.get(), statusVector2[23]);
        setDailyLabels(juce__label41.get(), statusVector2[10]);
        setDailyLabels(juce__label55.get(), statusVector2[24]);
        setDailyLabels(juce__label42.get(), statusVector2[11]);
        setDailyLabels(juce__label56.get(), statusVector2[25]);
        setDailyLabels(juce__label43.get(), statusVector2[12]);
        setDailyLabels(juce__label57.get(), statusVector2[26]);
        setDailyLabels(juce__label44.get(), statusVector2[13]);
        setDailyLabels(juce__label58.get(), statusVector2[27]);

        juce__label59->setVisible(false);
        juce__label69->setVisible(false);
        juce__label78->setVisible(false);
        juce__label60->setVisible(false);
        juce__label70->setVisible(false);
        juce__label79->setVisible(false);
        juce__label61->setVisible(false);
        juce__label71->setVisible(false);
        juce__label80->setVisible(false);
        juce__label62->setVisible(false);
        juce__label72->setVisible(false);
        juce__label81->setVisible(false);
        juce__label63->setVisible(false);
        juce__label73->setVisible(false);
        juce__label82->setVisible(false);
        juce__label64->setVisible(false);
        juce__label74->setVisible(false);
        juce__label83->setVisible(false);
        juce__label65->setVisible(false);
        juce__label75->setVisible(false);
        juce__label84->setVisible(false);
        juce__label66->setVisible(false);
        juce__label76->setVisible(false);
        juce__label85->setVisible(false);
        juce__label67->setVisible(false);
        juce__label77->setVisible(false);
        juce__label86->setVisible(false);
        juce__label68->setVisible(false);
    }
    if (numberOfHabits == 3)
    {
        trackerEntriesVector = CSVOperator::readDailyTrackerCSV(0);
        std::vector<std::string> statusVector = CSVOperator::returnDailyStatusVector(trackerEntriesVector);

        trackerEntriesVector2 = CSVOperator::readDailyTrackerCSV(1);
        std::vector<std::string> statusVector2 = CSVOperator::returnDailyStatusVector(trackerEntriesVector2);

        trackerEntriesVector3 = CSVOperator::readDailyTrackerCSV(2);
        std::vector<std::string> statusVector3 = CSVOperator::returnDailyStatusVector(trackerEntriesVector3);

        juce__label3->setVisible(true);
        juce__label13->setVisible(true);
        juce__label22->setVisible(true);
        juce__label4->setVisible(true);
        juce__label14->setVisible(true);
        juce__label23->setVisible(true);
        juce__label5->setVisible(true);
        juce__label15->setVisible(true);
        juce__label24->setVisible(true);
        juce__label6->setVisible(true);
        juce__label16->setVisible(true);
        juce__label25->setVisible(true);
        juce__label7->setVisible(true);
        juce__label17->setVisible(true);
        juce__label26->setVisible(true);
        juce__label8->setVisible(true);
        juce__label18->setVisible(true);
        juce__label27->setVisible(true);
        juce__label9->setVisible(true);
        juce__label19->setVisible(true);
        juce__label28->setVisible(true);
        juce__label10->setVisible(true);
        juce__label20->setVisible(true);
        juce__label29->setVisible(true);
        juce__label11->setVisible(true);
        juce__label21->setVisible(true);
        juce__label30->setVisible(true);
        juce__label12->setVisible(true);

        juce__label31->setVisible(true);
        juce__label32->setVisible(true);
        juce__label33->setVisible(true);
        juce__label34->setVisible(true);
        juce__label35->setVisible(true);
        juce__label36->setVisible(true);
        juce__label37->setVisible(true);
        juce__label38->setVisible(true);
        juce__label39->setVisible(true);
        juce__label40->setVisible(true);
        juce__label41->setVisible(true);
        juce__label42->setVisible(true);
        juce__label43->setVisible(true);
        juce__label44->setVisible(true);
        juce__label45->setVisible(true);
        juce__label46->setVisible(true);
        juce__label47->setVisible(true);
        juce__label48->setVisible(true);
        juce__label49->setVisible(true);
        juce__label50->setVisible(true);
        juce__label51->setVisible(true);
        juce__label52->setVisible(true);
        juce__label53->setVisible(true);
        juce__label54->setVisible(true);
        juce__label55->setVisible(true);
        juce__label56->setVisible(true);
        juce__label57->setVisible(true);
        juce__label58->setVisible(true);

        juce__label59->setVisible(true);
        juce__label69->setVisible(true);
        juce__label78->setVisible(true);
        juce__label60->setVisible(true);
        juce__label70->setVisible(true);
        juce__label79->setVisible(true);
        juce__label61->setVisible(true);
        juce__label71->setVisible(true);
        juce__label80->setVisible(true);
        juce__label62->setVisible(true);
        juce__label72->setVisible(true);
        juce__label81->setVisible(true);
        juce__label63->setVisible(true);
        juce__label73->setVisible(true);
        juce__label82->setVisible(true);
        juce__label64->setVisible(true);
        juce__label74->setVisible(true);
        juce__label83->setVisible(true);
        juce__label65->setVisible(true);
        juce__label75->setVisible(true);
        juce__label84->setVisible(true);
        juce__label66->setVisible(true);
        juce__label76->setVisible(true);
        juce__label85->setVisible(true);
        juce__label67->setVisible(true);
        juce__label77->setVisible(true);
        juce__label86->setVisible(true);
        juce__label68->setVisible(true);

        //std::string cont = statusVector[0];

        setDailyLabels(juce__label3.get(), statusVector[0]);
        setDailyLabels(juce__label4.get(), statusVector[1]);
        setDailyLabels(juce__label5.get(), statusVector[2]);
        setDailyLabels(juce__label6.get(), statusVector[3]);
        setDailyLabels(juce__label7.get(), statusVector[4]);
        setDailyLabels(juce__label8.get(), statusVector[5]);
        setDailyLabels(juce__label9.get(), statusVector[6]);
        setDailyLabels(juce__label10.get(), statusVector[7]);
        setDailyLabels(juce__label11.get(), statusVector[8]);
        setDailyLabels(juce__label12.get(), statusVector[9]);
        setDailyLabels(juce__label13.get(), statusVector[10]);
        setDailyLabels(juce__label14.get(), statusVector[11]);
        setDailyLabels(juce__label15.get(), statusVector[12]);
        setDailyLabels(juce__label16.get(), statusVector[13]);
        setDailyLabels(juce__label17.get(), statusVector[14]);
        setDailyLabels(juce__label18.get(), statusVector[15]);
        setDailyLabels(juce__label19.get(), statusVector[16]);
        setDailyLabels(juce__label20.get(), statusVector[17]);
        setDailyLabels(juce__label21.get(), statusVector[18]);
        setDailyLabels(juce__label22.get(), statusVector[19]);
        setDailyLabels(juce__label23.get(), statusVector[20]);
        setDailyLabels(juce__label24.get(), statusVector[21]);
        setDailyLabels(juce__label25.get(), statusVector[22]);
        setDailyLabels(juce__label26.get(), statusVector[23]);
        setDailyLabels(juce__label27.get(), statusVector[24]);
        setDailyLabels(juce__label28.get(), statusVector[25]);
        setDailyLabels(juce__label29.get(), statusVector[26]);
        setDailyLabels(juce__label30.get(), statusVector[27]);

        //std::string cont = statusVector[0];

        setDailyLabels(juce__label31.get(), statusVector2[0]);
        setDailyLabels(juce__label45.get(), statusVector2[14]);
        setDailyLabels(juce__label32.get(), statusVector2[1]);
        setDailyLabels(juce__label46.get(), statusVector2[15]);
        setDailyLabels(juce__label33.get(), statusVector2[2]);
        setDailyLabels(juce__label47.get(), statusVector2[16]);
        setDailyLabels(juce__label34.get(), statusVector2[3]);
        setDailyLabels(juce__label48.get(), statusVector2[17]);
        setDailyLabels(juce__label35.get(), statusVector2[4]);
        setDailyLabels(juce__label49.get(), statusVector2[18]);
        setDailyLabels(juce__label36.get(), statusVector2[5]);
        setDailyLabels(juce__label50.get(), statusVector2[19]);
        setDailyLabels(juce__label37.get(), statusVector2[6]);
        setDailyLabels(juce__label51.get(), statusVector2[20]);
        setDailyLabels(juce__label38.get(), statusVector2[7]);
        setDailyLabels(juce__label52.get(), statusVector2[21]);
        setDailyLabels(juce__label39.get(), statusVector2[8]);
        setDailyLabels(juce__label53.get(), statusVector2[22]);
        setDailyLabels(juce__label40.get(), statusVector2[9]);
        setDailyLabels(juce__label54.get(), statusVector2[23]);
        setDailyLabels(juce__label41.get(), statusVector2[10]);
        setDailyLabels(juce__label55.get(), statusVector2[24]);
        setDailyLabels(juce__label42.get(), statusVector2[11]);
        setDailyLabels(juce__label56.get(), statusVector2[25]);
        setDailyLabels(juce__label43.get(), statusVector2[12]);
        setDailyLabels(juce__label57.get(), statusVector2[26]);
        setDailyLabels(juce__label44.get(), statusVector2[13]);
        setDailyLabels(juce__label58.get(), statusVector2[27]);

        setDailyLabels(juce__label59.get(), statusVector3[0]);
        setDailyLabels(juce__label73.get(), statusVector3[14]);
        setDailyLabels(juce__label60.get(), statusVector3[1]);
        setDailyLabels(juce__label74.get(), statusVector3[15]);
        setDailyLabels(juce__label61.get(), statusVector3[2]);
        setDailyLabels(juce__label75.get(), statusVector3[16]);
        setDailyLabels(juce__label62.get(), statusVector3[3]);
        setDailyLabels(juce__label76.get(), statusVector3[17]);
        setDailyLabels(juce__label63.get(), statusVector3[4]);
        setDailyLabels(juce__label77.get(), statusVector3[18]);
        setDailyLabels(juce__label64.get(), statusVector3[5]);
        setDailyLabels(juce__label78.get(), statusVector3[19]);
        setDailyLabels(juce__label65.get(), statusVector3[6]);
        setDailyLabels(juce__label79.get(), statusVector3[20]);
        setDailyLabels(juce__label66.get(), statusVector3[7]);
        setDailyLabels(juce__label80.get(), statusVector3[21]);
        setDailyLabels(juce__label67.get(), statusVector3[8]);
        setDailyLabels(juce__label81.get(), statusVector3[22]);
        setDailyLabels(juce__label68.get(), statusVector3[9]);
        setDailyLabels(juce__label82.get(), statusVector3[23]);
        setDailyLabels(juce__label69.get(), statusVector3[10]);
        setDailyLabels(juce__label83.get(), statusVector3[24]);
        setDailyLabels(juce__label70.get(), statusVector3[11]);
        setDailyLabels(juce__label84.get(), statusVector3[25]);
        setDailyLabels(juce__label71.get(), statusVector3[12]);
        setDailyLabels(juce__label85.get(), statusVector3[26]);
        setDailyLabels(juce__label72.get(), statusVector3[13]);
        setDailyLabels(juce__label86.get(), statusVector3[27]);
    }
}

void MainForm::readRandomTips()
{

    juce::String directoryPath = juce::File::getCurrentWorkingDirectory().getFullPathName();
    std::string drcPathAsStdStr = directoryPath.toStdString();

    std::string filepath = drcPathAsStdStr + "\\HabitsFiles\\randomtips.csv";

    std::ifstream csvFile(filepath);
    std::string line;

    if (csvFile.is_open())
    {
        while (std::getline(csvFile, line))
        {
            randomTips.push_back(line);
        }
    }

    //juce::String fileNameWithoutExtension{ file.getFileNameWithoutExtension() };
    //MusicFile newMusicFile{ file };
    //juce::URL audioURL{ file };

    //player->loadURL(audioURL);
    //double lengthInSeconds{ player->getlength() };

    //juce::String calcMinutes{ std::to_string(int(std::round(lengthInSeconds)) / 60) };
    //juce::String calcSeconds{ std::to_string(int(std::round(lengthInSeconds)) % 60) };

    //newMusicFile.length = juce::String{ calcMinutes + ":" + calcSeconds };
    ////use this URL on deck to load music
    //newMusicFile.fileURL = audioURL;
    ////juce::String musiclink = juce::String{ newMusicFile.fileURL };
    //songsInLibrary.push_back(newMusicFile);
    //trackTitles.push_back(newMusicFile.title.toStdString());
}

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
  <BACKGROUND backgroundColour="ffffffff"/>
  <GROUPCOMPONENT name="new group" id="3ca1d68f09255a95" memberName="juce__groupComponent2"
                  virtualName="" explicitFocusOrder="0" pos="200 344 808 248" textcol="ff000000"
                  title="Daily Tips"/>
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
         virtualName="" explicitFocusOrder="0" pos="216 368 776 208" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="RANDOM TIPS" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="23.0" kerning="0.0" bold="0" italic="0" justification="12"/>
  <GROUPCOMPONENT name="new group" id="c79ae34d045a566a" memberName="juce__groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="200 88 808 248" textcol="ff000000"
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
  <LABEL name="new label" id="3af49acce2d806b6" memberName="juce__label3"
         virtualName="" explicitFocusOrder="0" pos="224 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="11dd464b10841a5d" memberName="juce__label4"
         virtualName="" explicitFocusOrder="0" pos="248 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="2" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="639588f0652f4196" memberName="juce__label5"
         virtualName="" explicitFocusOrder="0" pos="272 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="3" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="134cd32e8f8a587d" memberName="juce__label6"
         virtualName="" explicitFocusOrder="0" pos="296 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="4" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="d26f44fc3b661d9d" memberName="juce__label7"
         virtualName="" explicitFocusOrder="0" pos="320 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="5" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="35844aff392769a1" memberName="juce__label8"
         virtualName="" explicitFocusOrder="0" pos="344 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="6" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="6c37723f09ad0af7" memberName="juce__label9"
         virtualName="" explicitFocusOrder="0" pos="368 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="7" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="7aec5785de6db9a9" memberName="juce__label10"
         virtualName="" explicitFocusOrder="0" pos="398 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="8" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="41b4b0a91638d612" memberName="juce__label11"
         virtualName="" explicitFocusOrder="0" pos="422 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="9" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="6266205fdf2838ef" memberName="juce__label12"
         virtualName="" explicitFocusOrder="0" pos="446 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="10" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="70bbf4cf3f2abbc9" memberName="juce__label13"
         virtualName="" explicitFocusOrder="0" pos="470 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="11" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="8af60e4a785e485f" memberName="juce__label14"
         virtualName="" explicitFocusOrder="0" pos="494 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="12" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="33f54f0e51363d84" memberName="juce__label15"
         virtualName="" explicitFocusOrder="0" pos="518 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="13" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="ef118b7c67188d" memberName="juce__label16"
         virtualName="" explicitFocusOrder="0" pos="542 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="14" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="b242a543a27af4e7" memberName="juce__label17"
         virtualName="" explicitFocusOrder="0" pos="572 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="15" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="f0f4c18ce88b6d4e" memberName="juce__label18"
         virtualName="" explicitFocusOrder="0" pos="596 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="16" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="e65fd9e02efeef19" memberName="juce__label19"
         virtualName="" explicitFocusOrder="0" pos="620 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="17" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="ecc6b4465896548e" memberName="juce__label20"
         virtualName="" explicitFocusOrder="0" pos="644 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="18" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="b0d412d526555cb2" memberName="juce__label21"
         virtualName="" explicitFocusOrder="0" pos="668 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="19" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="dc1d1a7b82646e7e" memberName="juce__label22"
         virtualName="" explicitFocusOrder="0" pos="692 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="20" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="7b4d6b8ddf860b06" memberName="juce__label23"
         virtualName="" explicitFocusOrder="0" pos="716 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="21" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="d929f79c13db4d56" memberName="juce__label24"
         virtualName="" explicitFocusOrder="0" pos="746 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="22" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="ba894386981e70e8" memberName="juce__label25"
         virtualName="" explicitFocusOrder="0" pos="770 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="23" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="f1be52375abf492e" memberName="juce__label26"
         virtualName="" explicitFocusOrder="0" pos="794 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="24" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="8d7b97a2c71ae296" memberName="juce__label27"
         virtualName="" explicitFocusOrder="0" pos="818 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="25" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="523130e61ff7250e" memberName="juce__label28"
         virtualName="" explicitFocusOrder="0" pos="842 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="26" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="a01142cb9d45fa3" memberName="juce__label29"
         virtualName="" explicitFocusOrder="0" pos="866 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="27" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="3b70ed77340ffd4c" memberName="juce__label30"
         virtualName="" explicitFocusOrder="0" pos="890 144 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="28" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="7b9c666f487441bd" memberName="juce__label31"
         virtualName="" explicitFocusOrder="0" pos="225 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="fde4f2df98fecbcf" memberName="juce__label32"
         virtualName="" explicitFocusOrder="0" pos="249 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="2" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="c331ca8d85ab3e3e" memberName="juce__label33"
         virtualName="" explicitFocusOrder="0" pos="273 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="3" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="9287cff449bde90e" memberName="juce__label34"
         virtualName="" explicitFocusOrder="0" pos="297 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="4" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="cbf566ae01eacc1d" memberName="juce__label35"
         virtualName="" explicitFocusOrder="0" pos="321 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="5" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="c7c1ae7d3e04eca1" memberName="juce__label36"
         virtualName="" explicitFocusOrder="0" pos="345 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="6" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="c125e136d05b7793" memberName="juce__label37"
         virtualName="" explicitFocusOrder="0" pos="369 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="7" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="1eec45ec5ec109aa" memberName="juce__label38"
         virtualName="" explicitFocusOrder="0" pos="399 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="8" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="6eed68d0123409d3" memberName="juce__label39"
         virtualName="" explicitFocusOrder="0" pos="423 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="9" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="1846e69a22b05141" memberName="juce__label40"
         virtualName="" explicitFocusOrder="0" pos="447 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="10" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="1552eb809d59f492" memberName="juce__label41"
         virtualName="" explicitFocusOrder="0" pos="471 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="11" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="db8cd8fc4be0f399" memberName="juce__label42"
         virtualName="" explicitFocusOrder="0" pos="495 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="12" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="b11f2af76b9e71c9" memberName="juce__label43"
         virtualName="" explicitFocusOrder="0" pos="519 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="13" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="c035fc15a480ef61" memberName="juce__label44"
         virtualName="" explicitFocusOrder="0" pos="543 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="14" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="600e42293e475bb9" memberName="juce__label45"
         virtualName="" explicitFocusOrder="0" pos="573 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="15" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="7c7e572b3beed36c" memberName="juce__label46"
         virtualName="" explicitFocusOrder="0" pos="597 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="16" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="2a1b701d3eff012f" memberName="juce__label47"
         virtualName="" explicitFocusOrder="0" pos="621 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="17" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="cae892bd30e27693" memberName="juce__label48"
         virtualName="" explicitFocusOrder="0" pos="645 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="18" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="e83e3c03c7367a09" memberName="juce__label49"
         virtualName="" explicitFocusOrder="0" pos="669 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="19" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="8ba8cb3d18ec9da" memberName="juce__label50"
         virtualName="" explicitFocusOrder="0" pos="693 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="20" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="46cd468bfdba3ff8" memberName="juce__label51"
         virtualName="" explicitFocusOrder="0" pos="717 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="21" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="9c327bd7250c28d1" memberName="juce__label52"
         virtualName="" explicitFocusOrder="0" pos="747 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="22" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="a02c5c73cff10f86" memberName="juce__label53"
         virtualName="" explicitFocusOrder="0" pos="771 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="23" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="7a265683cc6ccc3c" memberName="juce__label54"
         virtualName="" explicitFocusOrder="0" pos="795 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="24" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="18b09e625d39555a" memberName="juce__label55"
         virtualName="" explicitFocusOrder="0" pos="819 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="25" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="7fa6709c7bd342f5" memberName="juce__label56"
         virtualName="" explicitFocusOrder="0" pos="843 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="26" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="87fed1f42759abbb" memberName="juce__label57"
         virtualName="" explicitFocusOrder="0" pos="867 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="27" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="505784be1efd1511" memberName="juce__label58"
         virtualName="" explicitFocusOrder="0" pos="891 208 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="28" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="44c79cb87f31f542" memberName="juce__label59"
         virtualName="" explicitFocusOrder="0" pos="225 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="9d734492197c9a33" memberName="juce__label60"
         virtualName="" explicitFocusOrder="0" pos="249 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="2" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="a0448d3a04aa247b" memberName="juce__label61"
         virtualName="" explicitFocusOrder="0" pos="273 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="3" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="eae7b2ed5ec1a81e" memberName="juce__label62"
         virtualName="" explicitFocusOrder="0" pos="297 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="4" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="aaf1f8cde984ebd9" memberName="juce__label63"
         virtualName="" explicitFocusOrder="0" pos="321 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="5" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="21b4f470a921df01" memberName="juce__label64"
         virtualName="" explicitFocusOrder="0" pos="345 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="6" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="86480e02029250c1" memberName="juce__label65"
         virtualName="" explicitFocusOrder="0" pos="369 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="7" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="25bb63840562e8c1" memberName="juce__label66"
         virtualName="" explicitFocusOrder="0" pos="399 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="8" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="2f0374eea0c16745" memberName="juce__label67"
         virtualName="" explicitFocusOrder="0" pos="423 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="9" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="7f682842a5f24339" memberName="juce__label68"
         virtualName="" explicitFocusOrder="0" pos="447 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="10" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="63221fd51f36e6cb" memberName="juce__label69"
         virtualName="" explicitFocusOrder="0" pos="471 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="11" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="640dda4a19769f82" memberName="juce__label70"
         virtualName="" explicitFocusOrder="0" pos="495 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="12" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="440ff3247c25e4f0" memberName="juce__label71"
         virtualName="" explicitFocusOrder="0" pos="519 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="13" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="8444ebd4d8817174" memberName="juce__label72"
         virtualName="" explicitFocusOrder="0" pos="543 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="14" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="f7e178a407bedaa9" memberName="juce__label73"
         virtualName="" explicitFocusOrder="0" pos="573 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="15" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="3b7f3204994b736d" memberName="juce__label74"
         virtualName="" explicitFocusOrder="0" pos="597 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="16" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="1faa11ec532757ab" memberName="juce__label75"
         virtualName="" explicitFocusOrder="0" pos="621 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="17" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="f2db1e8195cf2250" memberName="juce__label76"
         virtualName="" explicitFocusOrder="0" pos="645 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="18" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="47de5e184baf080d" memberName="juce__label77"
         virtualName="" explicitFocusOrder="0" pos="669 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="19" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="c4f87e47344075d0" memberName="juce__label78"
         virtualName="" explicitFocusOrder="0" pos="693 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="20" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="98ac6b7ea9cf02a" memberName="juce__label79"
         virtualName="" explicitFocusOrder="0" pos="717 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="21" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="aa59d1bcec1158ee" memberName="juce__label80"
         virtualName="" explicitFocusOrder="0" pos="747 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="22" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="23316809523a02cc" memberName="juce__label81"
         virtualName="" explicitFocusOrder="0" pos="771 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="23" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="fafa920136a6a6c0" memberName="juce__label82"
         virtualName="" explicitFocusOrder="0" pos="795 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="24" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="8da1c869336c7586" memberName="juce__label83"
         virtualName="" explicitFocusOrder="0" pos="819 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="25" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="c373f78b42d9af73" memberName="juce__label84"
         virtualName="" explicitFocusOrder="0" pos="843 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="26" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="5f5013082e897760" memberName="juce__label85"
         virtualName="" explicitFocusOrder="0" pos="867 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="27" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="ff8f15f1a99e8992" memberName="juce__label86"
         virtualName="" explicitFocusOrder="0" pos="891 272 24 24" bkgCol="ff808080"
         edTextCol="ff000000" edBkgCol="0" labelText="28" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//[EndFile] You can add extra defines here...
//[/EndFile]
