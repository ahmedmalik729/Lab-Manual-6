#include<iostream>
using namespace std;
int main()
{
    cout<<"1"<<endl;
    for (int i = 1; i <=6; i += 1)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i%2!=0)
                continue;
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}