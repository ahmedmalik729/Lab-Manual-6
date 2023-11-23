//Program to make Floyd's Triangle 
#include<iostream>
using namespace std;
int main(){
int n,sum=1;
//n is the user input number of rows
cout<<"Enter the number of rows for your Floyd's Triangle"<<endl;
cin>>n;
for (int i=1;i<=n;i++)  //i controls the number rows in Floyd's Triangle 
{
for (int j=1;j<=i;j++)  //j controls spacing in-between rows and number display
{
cout<<sum<<" ";
sum++;
}
cout<<endl;
}
}