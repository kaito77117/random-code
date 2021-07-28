#include <iostream>
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <cmath>
#include <string>
#include <cstring>
using namespace std;


int viewOrEdit(int a){
    string firstInput;
    while (a == 0){
    cout << "Do you want to view or edit the data? Or quit?(view, edit, quit): \n";
    cin >> firstInput;
        if (firstInput == "view"){
        a = 1;
    }else if(firstInput == "edit"){
        a = 2;
    }else if (firstInput == "quit"){
        a = 3;
    }else{
        a = 0;
        cout << "invalid input\n";
    }
    }
    return a;
}

string viewLogOptions(string word){
    int vors = 0;  
    int keyortitle = 0;  
    while (vors != 1 || 2){
        cout << "Sheets view (1) or search (2)\n";
        cin >> vors;
        if (vors == 1){
            word = "SHETS";
            return word;
        }else if (vors == 2){
            while (keyortitle != 1 || 2){
                cout << "Keyword (1) or Multiple-Word Title (2)\n";
                cin >> keyortitle;
                if (keyortitle == 1){
                    cout << "Search: ";
                    cin >> word;
                    return word;
                }else if( keyortitle == 2){
                    cout << "Search: ";
                    cin.ignore();
                    getline (cin, word);
                    //optional: getline (cin >> ws, word);
                    return word;
                }else{
                    cout << "Please input 1 or 2\n";
                }
            }  
        }else{
            cout << "Please input 1 or 2\n";
        }
    }
}

void viewSheet(vector <string> w, vector <string> x, vector <string> y, vector <string> z, int num){
    int titleNum = 0;
    int descriptionNum = 0;
    int informationNum = 0;
    int deadlineNum = 0;
    if (num == 0){
        cout << "There are no entries\n";
    }else{
        for (int i = 0; i<num; i++){
        cout << w[titleNum] << " || " << x[descriptionNum] << " || " << y[informationNum] << " ||| " << z[deadlineNum] << endl;
        titleNum++;
        descriptionNum++;
        informationNum++;
        deadlineNum++;
    }
    }
}

int logSearch(string ser, vector <string> ttle){
    int sgt;
    int k = 1;
    for(auto g = ttle.begin(); g != ttle.end(); ++g){
        k++;
        if (ser == *g){
            sgt = ttle.size() - k;
            cout << sgt;
            cout << ttle.size();
            cout << k;
            return sgt;
        }
    }
    sgt = 2147483647;
    return sgt;
}

int main(){

//inputs: entry number title description information deadline
int voe = 0;
int numOfEntries = 0;
int num = 0;
char addDelete = 'Z';
int searchGoTo = 0;
vector <int> logNum;
vector <string> title;
vector <string> description;
vector <string> information;
vector <string> deadline;
string funTitle;
string funDescription;
string funInformation;
string funDeadline;
string search;


//voe 1 = view voe 2 = edit voe 3 = quit voe else = redo
while(voe != 3){
voe = viewOrEdit(voe);
if(voe == 1){
    search = viewLogOptions(search);
    if (search == "SHETS"){
        viewSheet(title, description, information, deadline, numOfEntries);
    }else{
        searchGoTo = logSearch(search, title);
        if(searchGoTo == 2147483647){
            cout << "There were no results\n";
        }else{
            cout << title[searchGoTo] << " || " << description[searchGoTo] << " || " << information[searchGoTo] << " || " << deadline[searchGoTo] << endl;
        }
    }
    voe = 0;
    continue;
}else if(voe == 2){
    addDelete = 'Z';
    while ((addDelete == 'Z')){
        cout << "Do you want to add (A) or delete (D) an entry? ";
        cin >> addDelete;
        if ((addDelete == 'A') || (addDelete == 'D') || (addDelete == 'a') || (addDelete == 'd')){
            if ((addDelete == 'A') || (addDelete == 'a')){
            numOfEntries++;
            logNum.push_back(numOfEntries);
            cout << "Enter the entry title: ";
            cin >> funTitle;
            title.push_back(funTitle);

            cout << "Enter the entry description: ";
            cin.ignore();
            getline(cin, funDescription);
            description.push_back(funDescription);

            cout << "Enter the entry information: ";
            getline(cin, funInformation);
            information.push_back(funInformation);

            cout << "Enter the entry deadline: ";
            getline(cin, funDeadline);
            deadline.push_back(funDeadline);

            voe = 0;
            continue;
            }else if ((addDelete == 'D') || (addDelete == 'd')){

                voe = 0;
                continue;
            }
        }else if ((addDelete != 'A') || (addDelete != 'D') || (addDelete != 'a') || (addDelete != 'd')){
            cout << "Please enter a valid input\n";
            addDelete = 'Z';
            continue;
        }
    }
    
    //add deleting entries too
 
}
}



}
