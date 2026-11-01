#pragma once

#include <juce_audio_processors/juce_audio_processors.h>

namespace gui
{
    class MyLookAndFeel : public juce::LookAndFeel_V4
    {
    public:
        MyLookAndFeel();

        void drawLabel(juce::Graphics& g, juce::Label& label) override;
    };
}
