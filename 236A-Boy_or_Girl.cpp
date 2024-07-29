#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,count=0;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++){
        int cc=0;
        for(j=i;j<s.size();j++){
            if(s[i]==s[j+1]){
                cc=1;
                continue;
            } 
        }
        if(cc==0) count++;
    }
    if(count%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
}