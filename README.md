# Assembly Bootloader Project

<img src="./images/bochs.svg" width="30">

Welcome to my Assembly Bootloader project! This project demonstrates the creation of a simple bootloader written in assembly language that outputs "Bruce" to the console when run in the Bochs emulator.

### Project Structure

- boot.asm: This is the assembly source file that contains the code for the bootloader
- main.c: C program that writes the complied bootloader to a disk image(a.img)
- bochsrc: Configuration file for Bochs emulator to specify how the emulator should run the disk image

### How It Works

The bootloader is a very basic program written in assembly that, when executed, will display the text "Bruce" on the screen. This is useful for understanding how low-level interactions with hardware can be accomplished directly through assembly language

## Setup and Requirements

To run this project, you will need:
- **NASM**: For assembling the bootloader
- **GCC**: For compiling the C program that writes the bootloader to the disk image
- **Bochs**: For emulating an x86 environment to test the bootloader