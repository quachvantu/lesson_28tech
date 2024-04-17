#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int C;
    double F;
    cin >> C;
    if (C > 0)
    {
        F = ((double)C * 9 / 5) + 32;
        cout << fixed << setprecision(2) << F;
    }
}