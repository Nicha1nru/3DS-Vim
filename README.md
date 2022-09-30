# 3DS-Vim
Vim is a pretty amazing text editor for linux/windows, and i'm trying to port my own version of it to the 3DS.
It is completely open source. Just keep in mind that its in early development and has not been fully completed yet. I'm uploading this to hopefully get some critism!
![Image_2](https://user-images.githubusercontent.com/89216946/193259107-11f7effa-8e01-4aaa-aa51-a395b0dd4dee.jpeg)

# How it works
Use the D Pad to cycle between letters, press A to type them, press B to type a space and press select to rewrite everything.

# How to launch it in your 3DS
You need a jailbroken 3DS with homebrew to launch it. Put the SD card from your 3DS in your computer, put the .3dsx file and the .smdh file into the 3ds folder in your SD card. Then, put it back in your 3DS and launch the program with homebrew.

# How to edit the source code and compile it
You have my full permission to edit the source code in any way you see fit, simply edit the main.cpp file in the sourceCode folder. To compile it, install devkitpro (if your on linux, make sure to install 3ds-dev as well). And in the terminal/command prompt, go to the directory the files are stored in (not the sourceCode directory) and type "make". This will compile it.

# Change logs
Completely rewrote the program in V1.0, you can download it in the V2.1 branch.
