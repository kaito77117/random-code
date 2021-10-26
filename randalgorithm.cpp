#include <iostream>
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <cmath>
#include <string>
#include <cstring>
#include <ctime>


using namespace std;


#define MAX_RANDOM_NUM 26
#define MIN_RANDOM_NUM 1 



class chromo{

public: 
vector <string> chromosome;
vector <char> chromosomechar;

int repeatNum = 0;

void printvector(int &a){
    for(int i = 0; i<chromosome.size(); i++){
        cout << chromosome[i];
    }
    cout << a << endl;
    a++;
}


void remix(string b){
    
    for (int c = 0; c<chromosome.size(); c++){
        //chromosomechar.push_back(chromosome[c]);
    }
    /*if(chromosome[c] == b[c]){
            
        }*/
}



};


void gettarget(string &a, int &b){

    cout << "Enter a string including only lowercase alphabet letters.\n";
    getline (cin >> ws, a);
    for(int i = 0; i<a.length(); i++){
        b++;
    }


}

int random (int low, int high) {
    if (low > high) return high;
    return low + (rand() % (high - low + 1));
}

void setChromo(chromo &chro, int chromolength){
    srand(time(NULL));
    int randomnum;
    const string chromostring{"abcdefghijklmnopqrstuvwxyz"};
    vector <char> chromostring1;
    for (int i = 0; i<chromolength; i++){
        randomnum = (rand() % 26) + 1;
        chromostring1.push_back(chromostring[randomnum]);
    }
    string addToVector(chromostring1.begin(), chromostring1.end());
    chro.chromosome.push_back(addToVector);

}

void remix(vector <char> &chromo){
    
}

int main(){

chromo chro;
string targetchro;
int chroleng = 0;
int attemptnum = 0;
bool numMatch = false;
vector <chromo> chromoArray;
int i = 0;
int l = 0;

gettarget(targetchro, chroleng);




while(!numMatch){
    for (int j = 0; j<5; j++){
            chromoArray.push_back(chro);
    }
    
        setChromo(chromoArray[i], chroleng);
        chromoArray[i].printvector(attemptnum);
        chromoArray[i].remix(targetchro);
        
    
    if(chromoArray[i].chromosome[l] == targetchro){
        numMatch = true;    
    }

}



}