# SU9MI Macro Pad

Handwired 3 by 3 macro pad, As a token of appreciation and community spirit, this macropad was crafted to celebrate our shared journey in the Web3 space along with [Surgence](https://x.com/surgence_io) members.

![SU9MI](https://github.com/user-attachments/assets/71580ed6-ad20-492a-b03b-88f0fe15f70d)

✨ Features

Fully customizable keymap via QMK/[Vial](https://vial.rocks/)/[VIA](https://usevia.app/)

USB-C connectivity

BOM
- Mx Switches x 9
- Diode 1N4148 x 9
- RP2040 Zero x 1
- Copper Wire
- Heat Shrink Tube
- AWG26 Wire
- 3D Printed Switch Plate x 1
- 3D Printed Case x 1
- Bolt M2x4 x 4

Assembly Steps
1) Install MX Switches to Switch Plate & Solder 1 pin of each switch to copper wire (in vertical - column)
![1](https://github.com/user-attachments/assets/08763fdd-fc7a-4cb3-8109-8cc05d4dfce5)

2) Solder diode on another pin of each switch
![2](https://github.com/user-attachments/assets/cc3bc226-fc39-450e-9be5-c0df07c41cbe)

3) Solder the other end of diode to copper wire (in horizontal - row) & use the heat shrink tube to prevent short circuit between column and row copper wire
![3](https://github.com/user-attachments/assets/71650a3d-b61b-4469-961a-6220de677f73)

4) Solder AWG26 to each copperwire and other ends to RP2040 Zero with following pin
   Col 0 GP12
   Col 1 GP11
   Col 2 GP10
   Row 0 GP29
   Row 1 GP28
   Row 2 GP27
![4](https://github.com/user-attachments/assets/62b4f66d-0de5-4411-9de1-c7b0e371ff90)

5) Install RP2040 Zero into the case, connect the USB-C and load with uf2 file. Once it's done you can install the plate to case and tighten with M2 screws.

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
