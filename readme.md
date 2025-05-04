# SU9MI Macro Pad

Handwired 3 by 3 macro pad, As a token of appreciation and community spirit, this macropad was crafted to celebrate our shared journey in the Web3 space along with [https://twitter.com/su](https://x.com/surgence_io) members.

![SU9MI](https://github.com/user-attachments/assets/71580ed6-ad20-492a-b03b-88f0fe15f70d)

✨ Features
Fully customizable keymap via QMK/[Vial](https://vial.rocks/)/[VIA](https://usevia.app/)

USB-C connectivity

* Keyboard Maintainer: [KryptNit](https://github.com/KryptNit)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make su9mi:default

Flashing example for this keyboard:

    make su9mi:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
