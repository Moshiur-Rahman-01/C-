#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,temp=0,max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        temp = temp + b - a;
        if(max<temp){
            max=temp;
        }
    }
    cout<<max;
}