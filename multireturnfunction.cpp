#include <iostream>
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <cmath>
using namespace std;


void swap(int &a, int &b, int &c){
    //makes the list of variables backwards (switches the values of the integers)
    int d = c;
    c = b;
    b = a;
    a = d;
    
}

int main(){

    int first;
    int second;
    int third;


    cout << "enter three integers\n";
    cin >> first;
    cin >> second;
    cin >> third;


    swap(first, second, third);
    cout << first << " " << second << " " << third;

}