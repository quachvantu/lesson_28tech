#include <iostream>
using namespace std;
int main()
{
    long long n, Sn;
    cin >> n;
    Sn = 1ll * (n * (n + 1) * (2 * n + 1) / 6);
    if (n >= 0)
    {
        cout << Sn;
    }
}