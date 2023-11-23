//Program to print sum of Prime Numbers from 1 to 50
#include<iostream>
using namespace std;
int main()
{
    int n=2,sum=0;
    bool prime_n;
    while (n<=50)
    {
        bool prime_n=true;
        for (int i=2; i<=n/2; i++)
        {
            if (n%i==0)
            {   
            prime_n=false;
            break;
            }
        }
        if (prime_n)
        {
            sum+=n;
        }
        n++;
    }
    cout<<"The sum of Prime Numbers from 1 to 50 is "<<sum<<endl;
}