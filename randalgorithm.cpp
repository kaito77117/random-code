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
vector <char> chromosome;

void printvector(int &a){
    for(int i = 0; i<chromosome.size(); i++){
        cout << chromosome[i];
    }
    cout << a;
    a++;
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
    for (int i = 0; i<chromolength; i++){
        randomnum = (rand() % 26) + 1;
        chro.chromosome.push_back(chromostring[randomnum]);
    }


}

int main(){

chromo chro;
string targetchro;
int chrolen = 0;
int attemptnum = 0;

//for(int i = 0; i<2; i++){
    gettarget(targetchro, chrolen);
    setChromo(chro, chrolen);
    chro.printvector(attemptnum);
//}



}