/*
3.2: Write a function that creates a vector of user given size M using new operator.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
int M;
int *v;
cout<<"Enter vector size : "<<endl;
cin>>M;
v = new int [M];

cout<<"To check your performance insert "<<M<<" integer value"<<endl;
for(int i=0;i<M;i++)
{
cin>>v[i];
}
cout<<"Given integer value are :"<<endl;
for(int i=0;i<M;i++)
{
if(i==M-1)
cout<<v[i];
else
cout<<v[i]<<",";
}
cout<<endl;
return 0;
}

    
