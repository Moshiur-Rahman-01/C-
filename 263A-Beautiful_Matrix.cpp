#include<bits/stdc++.h>
using namespace std;

int main(){
    int mat[5][5],i,j,a,b;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>mat[i][j];
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(mat[i][j]==1){
                a=abs(2-i);
                b=abs(2-j);
                cout<<a+b;
                break;
            }
        }
    }
}