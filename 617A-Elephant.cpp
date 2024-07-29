#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,rem,div=0;
    cin>>n;
    for(int i=5;i>=1;i--){
        rem=n%i;
        div=div+n/i;
        n=rem;
    }
    cout<<div;
}