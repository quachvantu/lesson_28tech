#include <iostream>
using namespace std;
int main()
{
    int n;
    long long Sn;
    cin >> n;
    if (n >= 1)
    {
        Sn = 1ll * n * (n + 1);
        cout << Sn;
    }
}