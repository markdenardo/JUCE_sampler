cmake_minimum_required(VERSION 3.28)
project(JUCE_sampler)

set(CMAKE_CXX_STANDARD 17)

add_executable(JUCE_sampler main.cpp
        Source/PluginProcessor.h
        Source/PluginProcessor.cpp
        Source/PluginEditor.h
        Source/PluginEditor.cpp)

# cmake_minimum_required(VERSION 3.15)

# project(MySampler VERSION 0.0.1)

# set(CMAKE_CXX_STANDARD 17)

# Path to JUCE
set(JUCE_DIR "/Users/mdn/Desktop/c++_nu_projects/sampler/JUCE")

add_subdirectory(${JUCE_DIR} JUCE)

juce_add_plugin(JUCE_sampler
        COMPANY_NAME "MDN"
        IS_SYNTH TRUE
        NEEDS_MIDI_INPUT TRUE
        NEEDS_MIDI_OUTPUT FALSE
        IS_MIDI_EFFECT FALSE
        EDITOR_WANTS_KEYBOARD_FOCUS FALSE
        PLUGIN_MANUFACTURER_CODE Juce
        PLUGIN_CODE MSmr
        FORMATS VST3
        PRODUCT_NAME "JUCE_sampler")

target_sources(JUCE_sampler PRIVATE
        Source/PluginProcessor.cpp
        Source/PluginEditor.cpp)

target_compile_definitions(JUCE_sampler PRIVATE
        JUCE_WEB_BROWSER=0
        JUCE_USE_CURL=0)

target_link_libraries(JUCE_sampler PRIVATE
        juce::juce_audio_utils
        juce::juce_dsp)
