#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a;
    cin >> t;
    for(int i=0; i<t; i++){
        int n,s=0,s1=0,s2=0;
        cin >> n;
        for(int j=0; j<n; j++){
            cin >> a;
            if(j%2==0) s1 += a;
            else s2 += a;
        }
        s = s1-s2;
        cout << s << "\n";
    }
}