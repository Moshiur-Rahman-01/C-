#include<bits/stdc++.h>
using namespace std;

int main(){
    double X,Y;
    cin>>X>>Y;
    if(X>0 && Y>0) cout<<"Q1";
    else if(X<0 && Y>0) cout<<"Q2";
    else if(X<0 && Y<0) cout<<"Q3";
    else if(X>0 && Y<0) cout<<"Q4";
    if(X==0 && Y==0) cout<<"Origem";
    if((X>0 || X<0) && Y==0) cout<<"Eixo X";
    if(X==0 && (Y>0 || Y<0)) cout<<"Eixo Y";
}