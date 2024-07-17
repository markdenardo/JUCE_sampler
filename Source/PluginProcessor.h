//
// Created by MDN on 7/17/24.
//

#ifndef JUCE_SAMPLER_PLUGINPROCESSOR_H
#define JUCE_SAMPLER_PLUGINPROCESSOR_H

#endif //JUCE_SAMPLER_PLUGINPROCESSOR_H

#pragma once

#include <JuceHeader.h>

class MySamplerAudioProcessor : public juce::AudioProcessor {
public:
    MySamplerAudioProcessor();
    ~MySamplerAudioProcessor() override;

    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

    void processBlock (juce::AudioBuffer<float>&, juce::MidiBuffer&) override;

    juce::AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    const juce::String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool isMidiEffect() const override;
    double getTailLengthSeconds() const override;

    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const juce::String getProgramName (int index) override;
    void changeProgramName (int index, const juce::String& newName) override;

    void getStateInformation (juce::MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MySamplerAudioProcessor)
};
