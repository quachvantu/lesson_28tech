#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    long long x;
    if (a >= b && b >= 1)
    {
        x = ((a + b - 1) / b) * b;
        cout << x;
    }
}