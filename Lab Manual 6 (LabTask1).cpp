//Program for Fibonacci Series
#include <iostream>
using namespace std;

int main()
{
    int n,temp,a=0,b=1;
    //n is the user input number of terms
    cout<<"Enter no. of terms"<<endl;
    cin>>n;

    cout<<a<<" ";
    cout<<b<<" ";
    for(int count=1; count<=(n-2) ; count++)
    {
        temp=b;
        b+=a;
        a= temp;

        cout<< b<<" ";
    }

    return 0;
}