# dalws

A portable handheld device.

<img src="/images/dalws_prototype.jpeg" width="192" height="256">

This project is my attempt to learn about microcontroller and PCB design. Now I realize that making a full, complete
electronic project is **super** hard. I made all the steps in this project, from designing the PCB to program the firmware. To be honest, the PCB design process is harder. Choose components, read the datasheets and lots of schematics, make a design, review and fix errors, quite a lot of work. But it's worth all the pennies and efforts I spent for this project.

## Features

- [x] The MCU: STM32F411CEU6.
- [x] Display the time/date(you can change it of course) on a ST7735's 80x160 screen. The UI is achieved using [LVGL](https://lvgl.io) and [SquareLine's Studio](https://squareline.io)
- [x] Time of day alarm
- [x] Pomodoro timer(I use this a lot. Now only support 25/5/15 format)
- [x] Multiple power source(either USB-C or a LiPo battery. When USB-C and LiPo battery is both present, the USB-C will be chosen. If needed the system will charge the battery, taking power from the USB-C.)

## Demo

See [this](https://www.youtube.com/watch?v=NqJrIAqNZZg)

## How to compile and flash

### Hardware requirements

See [BOM](/docs/bom.xls). The BOM doesn't contain ST7735's LCD screen and buttons.

### Software

 * [SquareLine Studio](https://squareline.io/downloads). It's free for personal use.
 * arm-none-eabi-gcc(my version is 10.3.1)
 * make

You can install above dependencies by using these commands(Ubuntu/any Debian based Linux distro):

    $ sudo apt update
    $ sudo apt install arm-none-eabi-gcc build-essential

### Compiling

    $ git clone --recurse-submodules https://github.com/anhldptit2610/dalws.git
    $ cd dalws/firmware/dalws
    $ make

Use the ST's STM32CubeProgrammer to flash the binary.

## TODO

- [ ] Reduce the size of the PCB(still quite big)
- [ ] Bigger screen so I can have more fun
- [ ] Raise to wake
- [ ] Design a reset mechanism(I whacked a prototype and can't recover just because the design doesn't have a way to reset...)
- [ ] Maybe some games?