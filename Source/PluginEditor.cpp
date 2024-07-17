//
// Created by MDN on 7/17/24.
//
#include "PluginEditor.h"
#include "PluginProcessor.h"

MySamplerAudioProcessorEditor::MySamplerAudioProcessorEditor (MySamplerAudioProcessor& p)
        : AudioProcessorEditor (&p), processor (p) {
    setSize (400, 300);
}

MySamplerAudioProcessorEditor::~MySamplerAudioProcessorEditor() {
}

void MySamplerAudioProcessorEditor::paint (juce::Graphics& g) {
    g.fillAll (juce::Colours::black);
    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

void MySamplerAudioProcessorEditor::resized() {
    // Resize code here
}
