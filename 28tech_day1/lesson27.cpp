#include <iostream>
using namespace std;
int main()
{
    int n, x, y, z;
    cin >> n;
    x = n / 365;
    y = (n - (x * 365)) / 30;
    z = n - x * 365 - y * 30;
    if (n >= 365)
    {
        cout << x << " " << y << " " << z;
    }
}