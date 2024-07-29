#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,k,n,w,sum=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++){
        sum=sum+k*i;
    }
    if(sum>n){
        cout<<sum-n;
    }
    else cout<<"0";
}