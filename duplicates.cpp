#include <iostream>
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <cmath>
using namespace std;


int main() {

    vector<int> list;
    int x;
    int numOfRepeats = 0;
    bool checkDuplicate = false;
    cout << "enter how many values you want to put into the vector \n";
    cin >> numOfRepeats;
    while(numOfRepeats < 2){
        cout << "enter a value that is greater than or equal to 2\n";
        cin >> numOfRepeats;
    }
    while(numOfRepeats > 100){
        cout << "enter a value that is less than or equal to 100\n";
        cin >> numOfRepeats;
    }
    for (int k = 0; k < numOfRepeats; k++){
    cout << "enter list values \n";
    cin >> x;
    list.push_back(x);
    }
    for (auto i = list.begin(); i != list.end(); i++){
        cout << *i << " ";
    }
    cout << "do you want to check if there are any duplicates? (answer yes or no)\n";
    string response;
    cin >> response;
    if (response == "yes"){
        //do duplicating thing
        for(int i = 0; list.size() > i; i++){
            for (auto k = list.begin(); k != list.end(); ++k){
                if (list.begin() == k){
                    cout << "there is a duplicate" << endl;
                    cout << *list.begin();
                    list.erase(list.begin());
                    cout << *list.begin();
                }else{
                    list.erase(list.begin());
                }
            }
        }
    }else if (response == "no"){
        cout << "ok program will terminate \n";
    }else{
        cout << "invalid response \n";
    }


}