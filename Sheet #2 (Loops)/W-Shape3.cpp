#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r,c,i;
    cin>>n;

    for(r=1; r<=n; r++){
        for(c=1; c<=n-r; c++){
            cout<<" ";
        }
        for(c=1; c<=r; c++){
            cout<<"*";
        }
        for(c=1; c<=r-1; c++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(r=n; r>=1; r--){
        for(c=1; c<=n-r; c++){
            cout<<" ";
        }
        for(c=1; c<=r; c++){
            cout<<"*";
        }
        for(c=1; c<=r-1; c++){
            cout<<"*";
        }
        cout<<endl;
    }
}