#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0,i;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int min = a[0];
    for(int i=0; i<n; i++){
        if(min>a[i]){
            min=a[i];
            c=i;
        } 
    }
    cout<<min<<" "<<c+1;
}