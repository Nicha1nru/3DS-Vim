# 3DS-Vim
Vim is a pretty amazing text editor for linux/windows, and i'm trying to port my own version of it to the 3DS.
It is completely open source. Just keep in mind that its in early development and has not been fully completed yet. I'm uploading this to hopefully get some critism!
![Image](https://user-images.githubusercontent.com/89216946/193067540-d667a6f4-d586-4305-98e3-65be2a055eb8.jpeg)
# How it works
Press B to cycle between letters, press A to type the letter. Ignore the letter B at the start, it is a bug im trying to fix.
Press select to reset, press start to exit.

# How to launch it in your 3DS
You need a jailbroken 3DS with homebrew to launch it. Put the SD card in your computer, put the .3dsx file and the .smdh file into the 3ds folder in your SD card. Then, put it back in your 3DS and launch the program with homebrew.

# How to edit the source code and compile it
You have my full permission to edit the source code in any way you see fit, simply edit the main.cpp file in the sourceCode folder. To compile it, install devkitpro (if your on linux, make sure to install 3ds-dev as well). And in the terminal/command prompt, go to the directory the files are stored in (not the sourceCode directory) and type "make". This will compile it.
