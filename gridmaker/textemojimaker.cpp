//Idea for my text emoji maker

/*
1. Asks user how many characters they want to use
2. Asks user what characters they want to use to make their text emoji
3. Asks user what the length of the emoji should be
4. Asks user what the width of the emoji should be
5. Asks user what emoji they want to make and customize
6. Ask which characters the user wants to use for each part of the emoji
7. Ask which shapes and how they want to form each part of the emoji
8. Loading sign(optional)
9. Copy and paste the following pop up
10. Display the final emoji creation
/**/

//Code structure

/*
Functions:
Ask user how many chars they want to use

Ask what chars they want to use

Ask for the length

Ask for the width

Ask what emoji they want to make and customize:
options: 
    Smile face
    Sad face
    Mad face
    Surprised face
    Heart eyes face
    Side eye face
    Eyes
    Flushed face
    Thinking face 
    Sweat face
    Laughing face
    Sunglasses face
    Zipped up face
    Rolling eyes face
    Straight face
    Sleeping face
    Tear face
    Silly face
    Cowboy face
    Sticking toungue out face

Ask which characters the user wants to use for each part of the emoji

Ask which shapes and how they want to form each part of the emoji
options:
style numbers: 
1.    Blocky
2.  8-bit ish
3.  Realistic
4.  Smooth
5.  Round
6.  Sharp
7.  Spiky
8.  Original

Show loading screen function:
Probably will look like:

_________________________________________
|      ____ ____ ____ _____       _____  |
| |   |    |    |    |  |  |\    |       |
| |   |    |    |    |  |  | \   |       |
| |   |    |____|    |  |  |  \  |_____  |
| |   |    |    |    |  |  |   \ |    |  |
| |___|____|    |____|__|__|    \|____|  |
|________________________________________|


Show copy and paste prompt

Display emoji creation



Main: 
    Variables:
    How many characters
    What characters (vector? or multiple variables)
    What emoji: (variable for each type)
    Emoji type variables:
        What character to use for each part
        Shape style emoji




Declare variables

Call first function
Call second function
Call third function
Call fourth function
Call fifth function
Call sixth function
Call seventh function
Call eigth function
While eigth function is running = make emoji
Depending on the what type 
Call ninth function
Call tenth function


/**/



#include <iostream>
#include <windows.h>
#include <vector>
#include <math.h>
#include <cstdio>
#include <string>


using namespace std;

void intro(){
    cout << "Welcome to Text Emoji Maker. You will need to answer a few prompts to customize your emoji, and in the end, you will be able to copy and paste your final emoji creation \n";
}

int main(){

//variables:

int difchars(0);
vector<char> chartypes;
//emojis:
bool smile = false;
bool sad = false;
bool mad = false;
bool surprised = false;
bool heartEyes = false;
bool sideEye = false;
bool eyes = false;
bool flushed = false;
bool thinking = false;
bool sweat = false;
bool laughing = false;
bool sungalsses = false;
bool zippedUp = false;
bool RollingEyes =  false;
bool straight = false;
bool sleeping = false;
bool tear = false;
bool silly = false;
bool cowboy = false;
bool tongue = false;
int styleNum = 1; //1-8
char eyes = 'x';
char eyes1 = 'x';
char face = 'x';
char mouth = 'x';
char teeth = 'x';
char eyebrow = 'x';
char special = 'x';



intro();






}