#include<iostream>
using namespace std;
int main()
{
int n; //n is the user input number of rows 
cout<<"Enter the number of rows for the pattern."<<endl;
cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}