#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,temp;
    string s;
    cin>>s;
    int size=s.length();
    for(i=0;i<size-1;i+=2){
        bool swap=false;
       for(j=0;j<size-1-i;j+=2){
        if(s[j]>s[j+2]){
            temp=s[j];
            s[j]=s[j+2];
            s[j+2]=temp;
            swap=true;
        }
       }
        if(!swap) break;
    }
    for(i=0;i<size;i++){ 
        cout<<s[i];
    }
}