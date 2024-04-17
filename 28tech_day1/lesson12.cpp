#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long Sn;
    if (n % 2 == 0)
    {
        Sn = n / 2;
        cout << Sn;
    }
    else
    {
        Sn = ((n - 1) / 2) - n;
        cout << Sn;
    }
}