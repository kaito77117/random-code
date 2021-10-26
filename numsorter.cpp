#include <iostream>
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <cmath>
#include <string>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
#include <cstdio>
#include <stdio.h>
#include <cassert>
#include <assert.h>
#include <cctype>
#include <ctime>

using namespace std;




class numberstring{
    public:
        vector <int> nums;
};

int askForNumOfEntries(int a){
    cout << "How many entries do you want to put in?\n";
    cin >> a;
    return a;
    //automate this later to detect how many entries r put in
}


int main(){
    int numOfEntries = 0;
    int placeholder = 0;
    numberstring numstr;
    vector <numberstring> numstrArray;

    numOfEntries = askForNumOfEntries(numOfEntries);
    for(int i = 0; i<numOfEntries; i++){
        numstrArray.push_back(numstr);
    }
    //intialize how many entries r gonna be put in, and create <num of entries> arrays

}





//181
//564
//191
//564

