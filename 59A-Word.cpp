#include<bits/stdc++.h>
using namespace std;

int main(){
    int upr=0,lwr=0;
    string s,f;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90){
            upr++;
        }
        else lwr++;
    }
    f = s;
    for(int i=0;i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] += 32;
        }
        if(f[i]>='a' && f[i]<='z'){
            f[i] -= 32;
        }
    }

    if(upr>lwr) cout<<f<<endl;
    else cout<<s<<endl;
}