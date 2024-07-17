//
// Created by MDN on 7/17/24.
//
#include "PluginProcessor.h"
#include "PluginEditor.h"

MySamplerAudioProcessor::MySamplerAudioProcessor() {
    // Constructor code here
}

MySamplerAudioProcessor::~MySamplerAudioProcessor() {
    // Destructor code here
}

void MySamplerAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock) {
    // Prepare to play code here
}

void MySamplerAudioProcessor::releaseResources() {
    // Release resources code here
}

void MySamplerAudioProcessor::processBlock (juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages) {
    // Process block code here
}

juce::AudioProcessorEditor* MySamplerAudioProcessor::createEditor() {
    return new MySamplerAudioProcessorEditor (*this);
}

bool MySamplerAudioProcessor::hasEditor() const {
    return true;
}

const juce::String MySamplerAudioProcessor::getName() const {
    return JucePlugin_Name;
}

bool MySamplerAudioProcessor::acceptsMidi() const {
    return true;
}

bool MySamplerAudioProcessor::producesMidi() const {
    return false;
}

bool MySamplerAudioProcessor::isMidiEffect() const {
    return false;
}

double MySamplerAudioProcessor::getTailLengthSeconds() const {
    return 0.0;
}

int MySamplerAudioProcessor::getNumPrograms() {
    return 1;
}

int MySamplerAudioProcessor::getCurrentProgram() {
    return 0;
}

void MySamplerAudioProcessor::setCurrentProgram (int index) {
    // Set current program code here
}

const juce::String MySamplerAudioProcessor::getProgramName (int index) {
    return {};
}

void MySamplerAudioProcessor::changeProgramName (int index, const juce::String& newName) {
    // Change program name code here
}

void MySamplerAudioProcessor::getStateInformation (juce::MemoryBlock& destData) {
    // Get state information code here
}

void MySamplerAudioProcessor::setStateInformation (const void* data, int sizeInBytes) {
    // Set state information code here
}
