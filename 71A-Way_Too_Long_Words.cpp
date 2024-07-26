#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,i;
    string word;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>word;
        int length = word.length();
        if(length<=10){
            cout<<word<<endl;
        }
        else{
            cout<<word[0]<<length-2<<word[length-1]<<endl;
        }
    }
}