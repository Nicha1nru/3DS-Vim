#include <string.h>
#include <3ds.h>
#include <iostream>
using namespace std;

int main()
{
	gfxInitDefault();
	//gfxSet3D(true); //Uncomment if using stereoscopic 3D
	consoleInit(GFX_BOTTOM, NULL);	//Change this line to consoleInit(GFX_BOTTOM, NULL) if using the bottom screen.
	//var
	int n = 0;
	string txt;
	string text;

	//input menu
	cout << "a b c d e f g h i j k l m n o p q r s t u v w x y z" << endl;

	// Main loop
	while (aptMainLoop())
	{
		gspWaitForVBlank();
		hidScanInput();

		u32 kDown = hidKeysDown();

		//Your code goes here
		

		if (kDown & KEY_START)
			break;
		

		// Flush and swap frame-buffers
		gfxFlushBuffers();
		gfxSwapBuffers();

	      	
                //input
		if (kDown & KEY_RIGHT)
		{
			n = n + 1;
		}

		if (kDown & KEY_LEFT)
		{
			n = n - 1;
		}

		if (kDown & KEY_B)
		{
			consoleInit(GFX_TOP, NULL);
			text = " ";
			txt += text;
			cout << txt << endl;
			consoleInit(GFX_BOTTOM, NULL);
		}

		if (kDown & KEY_SELECT)
		{
			txt = " ";
		}

if (n == 1)
{
printf("\e[1;1H\e[2J");
cout << "<a> b c d e f g h i j k l m n o p q r s t u v w x y z" << endl;
if (kDown & KEY_A)
{
consoleInit(GFX_TOP, NULL);
text = "a";
txt += text;
cout << txt << endl;
consoleInit(GFX_BOTTOM, NULL);
}
}

if (n == 2)
{
	printf("\e[1;1H\e[2J");
	cout << "a< b> c d e f g h i j k l m n o p q r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "b";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 3)
{
	printf("\e[1;1H\e[2J");
	cout << "a b <c> d e f g h i j k l m n o p q r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "c";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 4)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c <d> e f g h i j k l m n o p q r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "d";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 5)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d <e> f g h i j k l m n o p q r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "e";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 6)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e <f> g h i j k l m n o p q r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "f";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 7)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f <g> h i j k l m n o p q r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "g";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 8)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g <h> i j k l m n o p q r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "h";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 9)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h <i> j k l m n o p q r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "i";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 10)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i <j> k l m n o p q r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "j";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 11)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i j <k> l m n o p q r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "k";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 12)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i j k <l> m n o p q r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "l";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 13)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i j k l <m> n o p q r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "m";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 14)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i j k l m <n> o p q r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "n";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 15)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i j k l m n <o> p q r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "o";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 16)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i j k l m n o <p> q r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "p";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 17)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i j k l m n o p <q> r s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "q";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 18)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i j k l m n o p q <r> s t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "r";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 19)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i j k l m n o p q r <s> t u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "s";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 20)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i j k l m n o p q r s <t> u v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "t";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 21)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i j k l m n o p q r s t <u> v w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "u";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 22)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i j k l m n o p q r s t u <v> w x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "v";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 23)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i j k l m n o p q r s t u v <w> x y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "w";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 24)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i j k l m n o p q r s t u v w <x> y z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "x";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 25)
{
	printf("\e[1;1H\e[2J");
	cout << "<a> b c d e f g h i j k l m n o p q r s t u v w x <y> z" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "y";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}
if (n == 26)
{
	printf("\e[1;1H\e[2J");
	cout << "a b c d e f g h i j k l m n o p q r s t u v w x y <z>" << endl;
	if (kDown & KEY_A)
	{
		consoleInit(GFX_TOP, NULL);
		text = "z";
		txt += text;
		cout << txt << endl;
		consoleInit(GFX_BOTTOM, NULL);
	}
}




		//n value check
		if (n > 26)
		{
			n = 26;
		}

		if (n < 0)
		{
			n = 0;
		}
	}


	gfxExit();
	return 0;
}
