#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    long long s=0;
    for(int i=0;i<n;i++){
        s += a[i] - '0';
    }
    cout<<s;
}