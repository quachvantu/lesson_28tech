#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long long n;
    float Sn;
    cin >> n;
    Sn = 1 - 1.0 / (n + 1);
    if (n >= 1)
    {
        cout << fixed << setprecision(2) << Sn;
    }
}