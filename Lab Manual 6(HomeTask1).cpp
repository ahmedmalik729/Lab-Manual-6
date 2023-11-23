#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 2; i <= 50; ++i)
    {
        bool isPrime=true;
        for (int j=2; j<=i/2; ++j) {
            if (i % j == 0)
            {
                isPrime=false;
                break;
            }
        }
        if (isPrime) {
            sum += i;
        }
    }
    cout << "Sum of prime numbers from 1 to 50: "<<sum<<endl;
    return 0;
}