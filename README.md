# Plugin Synchronizer

This is an audio plugin that hosts other audio plugins and keeps them synchronized across multiple instances. Also supports MIDI and sidechain inputs.

Download from the [releases page](https://github.com/luismrguimaraes/PluginSynchronizer/releases).

So far, **VST3** is the most tested format and VST3 (Plugin Synchronizer) hosting VST3 (other plugins) is the most stable combination.

This is **NOT** a vibe-coded plugin, a lot of care is being taken to develop and test the plugin.

### Demo

https://github.com/user-attachments/assets/190259d7-bc91-40b7-aa4d-21faa4f29f0a

### How to make macOS trust the plugin

- open Terminal
- write (without running): `sudo xattr -rd com.apple.quarantine`
- drag and drop the plugin into the terminal
- press Enter, enter your password, then press Enter again

## Notes for developers

### Code style conventions

- member_variable\_
- a_regular_variable
- functionParameter
- kSomeConstantThatRemainsUnchangedDuringRuntime
- free_function()

### For template updates

Check [this link](https://melatonin.dev/manuals/pamplejuce/life-with-pamplejuce/how-to-update-my-project/).
