#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    int s = a.compare(b);
    if(s<=0) cout<<a;
    else cout<<b;
}