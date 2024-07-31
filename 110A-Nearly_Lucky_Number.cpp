#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n,rem,c1=0;
    cin>>n;
    
    while(n!=0){
        rem=n%10;
        if(rem==4 || rem==7){
            c1++;
        }
        n=n/10;
    }
    if(c1==4 || c1==7 ) cout<<"YES";
    else cout<<"NO";
}