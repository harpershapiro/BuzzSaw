/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
ThaiBasilAudioProcessorEditor::ThaiBasilAudioProcessorEditor (ThaiBasilAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    subharmonicComponent= std::make_unique<SubharmonicComponent>(p.getVTS());
 
    addAndMakeVisible(*subharmonicComponent);

    setSize(400, 500);
}

ThaiBasilAudioProcessorEditor::~ThaiBasilAudioProcessorEditor()
{
}

//==============================================================================
void ThaiBasilAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);

    subharmonicComponent->paint(g);
}

void ThaiBasilAudioProcessorEditor::resized()
{
    subharmonicComponent->setBounds(0, 0, getWidth(), getHeight());
}

void ThaiBasilAudioProcessorEditor::sliderValueChanged(Slider* slider)
{

}