#include <string.h>
#include <3ds.h>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//var
	string txt;
	int n = 0;
	string text;
	string final_text;

	gfxInitDefault();
	//gfxSet3D(true); //Uncomment if using stereoscopic 3D
	consoleInit(GFX_BOTTOM, NULL); //Change this line to consoleInit(GFX_BOTTOM, NULL) if using the bottom screen.
	cout << "V0.1" << endl;
	cout << "This isn't perfect yet. But ima release it anyway, updates coming." << endl;
	cout << "Press B to cycle between letters (ignore the b at the start), press A to type the letter." << endl;
	cout << "Press select to reset." << endl;

	// Main loop
	while (aptMainLoop())
	{
		gspWaitForVBlank();
		hidScanInput();

		//Your code goes here

		u32 kDown = hidKeysDown();
		if (kDown & KEY_START)
			break; //Break in order to return to hbmenu

		// Flush and swap frame-buffers
		gfxFlushBuffers();
		gfxSwapBuffers();

		if (kDown & KEY_SELECT)
		{
			final_text = " ";
			text = " ";
			txt = " ";
			n = 0;
		}

		if (kDown & KEY_A)
		{
			        printf("\e[1;1H\e[2J");
				final_text += text;
				cout << final_text << endl;
		}


		if (kDown & KEY_B)
		{
			//a b c d e f g h i j k l m n o p q r s t u v w x y z
			n++;
			
			if (n == 1)
			{
				printf("\e[1;1H\e[2J");
				text = "a";
				cout << txt;
				cout << text << endl;
			}
			if (n == 2)
			{
				printf("\e[1;1H\e[2J");
				txt = "b";
				cout << txt;
				cout << text << endl;
			}
			if (n == 3)
			{
				printf("\e[1;1H\e[2J");
				text = "c";
				cout << txt;
				cout << text << endl;
			}
			if (n == 4)
			{
				printf("\e[1;1H\e[2J");
				text = "d";
				cout << txt;
				cout << text << endl;
			}
if (n == 5)
{
printf("\e[1;1H\e[2J");
text = "e";
cout << txt;
cout << text << endl;
}
//a b c d e f g h i j k l m n o p q r s t u v w x y z
                        if (n == 6)
{
	printf("\e[1;1H\e[2J");
	text = "f";
	cout << txt;
	cout << text << endl;
}
if (n == 7)
{
	printf("\e[1;1H\e[2J");
	text = "g";
	cout << txt;
	cout << text << endl;
}
if (n == 8)
{
	printf("\e[1;1H\e[2J");
	text = "h";
	cout << txt;
	cout << text << endl;
}
if (n == 9)
{
	printf("\e[1;1H\e[2J");
	text = "i";
	cout << txt;
	cout << text << endl;
}
if (n == 10)
{
	printf("\e[1;1H\e[2J");
	text = "j";
	cout << txt;
	cout << text << endl;
}
if (n == 11)
{
	printf("\e[1;1H\e[2J");
	text = "k";
	cout << txt;
	cout << text << endl;
}
//a b c d e f g h i j k l m n o p q r s t u v w x y z
if (n == 12)
{
	printf("\e[1;1H\e[2J");
	text = "l";
	cout << txt;
	cout << text << endl;
}
if (n == 13)
{
	printf("\e[1;1H\e[2J");
	text = "m";
	cout << txt;
	cout << text << endl;
}
if (n == 14)
{
	printf("\e[1;1H\e[2J");
	text = "n";
	cout << txt;
	cout << text << endl;
}
if (n == 15)
{
	printf("\e[1;1H\e[2J");
	text = "o";
	cout << txt;
	cout << text << endl;
}
if (n == 16)
{
	printf("\e[1;1H\e[2J");
	text = "p";
	cout << txt;
	cout << text << endl;
}
if (n == 17)
{
	printf("\e[1;1H\e[2J");
	text = "q";
	cout << txt;
	cout << text << endl;
}
//a b c d e f g h i j k l m n o p q r s t u v w x y z
if (n == 18)
{
	printf("\e[1;1H\e[2J");
	text = "r";
	cout << txt;
	cout << text << endl;
}
if (n == 19)
{
	printf("\e[1;1H\e[2J");
	text = "s";
	cout << txt;
	cout << text << endl;
}
if (n == 20)
{
	printf("\e[1;1H\e[2J");
	text = "t";
	cout << txt;
	cout << text << endl;
}
if (n == 21)
{
	printf("\e[1;1H\e[2J");
	text = "u";
	cout << txt;
	cout << text << endl;
}
if (n == 22)
{
	printf("\e[1;1H\e[2J");
	text = "v";
	cout << txt;
	cout << text << endl;
}
if (n == 23)
{
	printf("\e[1;1H\e[2J");
	text = "w";
	cout << txt;
	cout << text << endl;
}
//a b c d e f g h i j k l m n o p q r s t u v w x y z
if (n == 24)
{
	printf("\e[1;1H\e[2J");
	text = "x";
	cout << txt;
	cout << text << endl;
}
if (n == 25)
{
	printf("\e[1;1H\e[2J");
	text = "y";
	cout << txt;
	cout << text << endl;
}
if (n == 26)
{
	printf("\e[1;1H\e[2J");
	text = "z";
	cout << txt;
	cout << text << endl;
	n = 0;
}



		}
	}

	gfxExit();
	return 0;
}
