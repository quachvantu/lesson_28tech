#include <iostream>
using namespace std;
int main()
{
    int a, b;
    long long x;
    cin >> a >> b;
    if (a >= b && b >= 1)
    {
        x = (a / b) * b;
        cout << x;
    }
}