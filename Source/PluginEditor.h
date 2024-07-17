//
// Created by MDN on 7/17/24.
//

#ifndef JUCE_SAMPLER_PLUGINEDITOR_H
#define JUCE_SAMPLER_PLUGINEDITOR_H

#endif //JUCE_SAMPLER_PLUGINEDITOR_H

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

class MySamplerAudioProcessorEditor : public juce::AudioProcessorEditor {
public:
    MySamplerAudioProcessorEditor (MySamplerAudioProcessor&);
    ~MySamplerAudioProcessorEditor() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    MySamplerAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MySamplerAudioProcessorEditor)
};
