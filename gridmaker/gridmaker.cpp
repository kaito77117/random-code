#include <iostream>
#include <windows.h>
#include <vector>
#include <math.h>
#include <cstdio>
#include <string>


using namespace std;


void intro(){
    cout << "Welcome to gridmaker. You can choose your grids length, width, and what character is used to make your grid. \n";
}


int checkValidInt(int a){
    if(a > 0 && a < 101){
        return a;
    }else {
        cout << "The input you have inputed is invalid, and the program will now terminate. \n";
        exit(1);
        return(1);
    }
}

char checkValidChar(char k){
    if((k >= 65 && k <= 90)
    || (k >=97 && k <=122)){ //checking if the input is a char
        return k;
    }
    else if (k >= 48 && k <= 57){ //checking if the input is a digit
        cout << "The input you have inputed is invalid, and the program will now terminate. \n";
        exit(1);
        return(1);
    }
    else{ //special characters are allowed etc '#'
        return k;
    }
}


int enterLength(int x){
    cout << "Enter the grids length: (1-100) \n";
    cin >> x;
    checkValidInt(x);
    return(x);
}

int enterWidth(int y){
    cout << "Enter the grids width: \n";
    cin >> y;
    checkValidInt(y);
    return(y);
}

char enterTextType(char z){
    cout << "Enter what character you want the grid to be made out of: \n";
    cin >> z;
    checkValidChar(z);
    return(z);
}


void makeGrid(int g, int h, char i){
    for(int n = 0; n < g; n++){
        for(int m = 0; m < h; m++){
            cout << i;
        }
        cout <<i;
    }
}

int main(){

int gridLength;
int gridWidth;
char textType('x');

intro();
Sleep(1500);
enterLength(gridLength);
enterWidth(gridWidth);
enterTextType(textType);
cout << textType;
/*
makeGrid(gridLength, gridWidth, textType);
/**/
}