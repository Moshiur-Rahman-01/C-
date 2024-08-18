#include<bits/stdc++.h>
using namespace std;
int res[1000005];
int main(){
    long long t;
    cin>>t;
    long long c=0;
    for(int i=0; i<t; i++){
        long long a,b;
        cin>>a>>b;
        if(a*(b+1)/2<b){
            cout<<"-1";
        }
        else{
            long long sum=0;

            for(int z=a;z>=1;z--){
                if(sum+z <= b){
                    sum += z;
                    res[c] = z;
                    c++;
                }
                if(sum==b) break;
            }
        }
        for(int x=0; x<c; x++){
            cout<<res[x]<<" ";
        }
        cout<<endl;
        c=0;
    }
}
//problem