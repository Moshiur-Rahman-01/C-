#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        int s=0;
        while(n){
            s += n%10;
            n = n/10;
        }
        cout<<s<<endl;
    }
}