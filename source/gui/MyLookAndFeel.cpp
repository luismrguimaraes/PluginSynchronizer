#include "MyLookAndFeel.hpp"

namespace gui
{
    MyLookAndFeel::MyLookAndFeel()
    {
        const juce::Colour kBackground { 0xFF2a2e41 };
        const juce::Colour kButton { 0xFF7e6207 };

        setColour(juce::ResizableWindow::backgroundColourId, kBackground);
        setColour(juce::ListBox::backgroundColourId, kBackground);
        setColour(juce::ComboBox::backgroundColourId, kBackground);
        setColour(juce::TextButton::buttonColourId, kButton);
        setColour(juce::TextButton::buttonOnColourId, kButton.brighter());
    }

    void MyLookAndFeel::drawLabel(juce::Graphics& g, juce::Label& label)
    {
        auto* combo_box = dynamic_cast<juce::ComboBox*>(label.getParentComponent());
        if (combo_box == nullptr || combo_box->getName() != "Group" || label.isBeingEdited())
        {
            juce::LookAndFeel_V4::drawLabel(g, label);
            return;
        }

        const auto selected_id = combo_box->getSelectedId();
        const auto text = selected_id > 0 ? "Group " + juce::String(selected_id) : label.getText();
        const auto alpha = label.isEnabled() ? 1.0f : 0.5f;
        const auto text_area = getLabelBorderSize(label).subtractedFrom(label.getLocalBounds());

        g.fillAll(label.findColour(juce::Label::backgroundColourId));
        g.setColour(label.findColour(juce::Label::textColourId).withMultipliedAlpha(alpha));
        g.setFont(getLabelFont(label));
        g.drawFittedText(text, text_area, label.getJustificationType(), 1, label.getMinimumHorizontalScale());
        g.setColour(label.findColour(juce::Label::outlineColourId).withMultipliedAlpha(alpha));
        g.drawRect(label.getLocalBounds());
    }
}
