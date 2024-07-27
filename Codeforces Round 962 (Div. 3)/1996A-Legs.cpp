#include<iostream>
using namespace std;

int main(){
    int n,a;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        int count=0;
        while(a!=0){
            if(a>=4){
                a=a-4;
                count++;
            } 
            else{
                a=a-2;
                count++;
            }
        }
        cout<<count<<endl;
    }
}