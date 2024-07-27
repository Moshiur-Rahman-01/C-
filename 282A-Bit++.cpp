#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,result=0;
    string x;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        if(x[1]=='+') result++;
        else result--; 
    }
    cout<<result<<endl; 
}