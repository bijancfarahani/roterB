/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
RotarBAudioProcessorEditor::RotarBAudioProcessorEditor (RotarBAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    auto& waveVisualizer = audioProcessor.getWaveVisualizer();
    addAndMakeVisible(waveVisualizer);
    waveVisualizer.setColours(juce::Colours::black, juce::Colours::whitesmoke.withAlpha(0.5f));

    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
}

RotarBAudioProcessorEditor::~RotarBAudioProcessorEditor()
{
}

//==============================================================================
void RotarBAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

void RotarBAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..

    audioProcessor.getWaveVisualizer().setBounds(getLocalBounds().withSizeKeepingCentre(getWidth() / 2, getHeight() / 2));
}
