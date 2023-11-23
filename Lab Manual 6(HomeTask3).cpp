#include <iostream>
using namespace std;
int main() 
{
    int n,result; 
    //n is the User input number of rows
     cout<<"Enter the number of rows for the pattern"<<endl;
     cin>>n;
    for (int i = 1; i <= n; ++i) 
    {
        for (int j = 1; j <= i * 2; ++j) 
        {
            cout <<result<<" ";
        }
        result*= 2;
        cout<<endl;
    }
    return 0;
}