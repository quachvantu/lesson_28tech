#include <iostream>
using namespace std;
int main()
{
    int n;
    long long Sn;
    cin >> n;
    Sn = 1ll * n * (n + 1) / 2;
    if (n >= 0)
    {
        cout << Sn;
    }
}