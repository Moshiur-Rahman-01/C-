#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    while(1){
        int gn,rn;
        cout<< "Enter your guess number between 1 to 5 : ";
        cin>> gn;

        rn = rand()%5 + 1;

        if(rn == gn){
            cout<< "You have won !!!";
            break;
        }
        else{
            cout<<"You have lost. Try again..."<< endl;
            cout<< "Random number was = " << rn << endl;
        }
    }
}