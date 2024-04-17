#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    float a, b, c, delta, x1, x2;
    cin >> a >> b >> c;
    delta = (b * b) - (4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    if (a == 0 && b == 0 && c == 0)
    {
        cout << "INF";
    }
    else
    {
        if (delta < 0)
        {
            cout << "NO";
        }
        else if (delta == 0)
        {
            cout << fixed << setprecision(2) << x1 << " " << x2;
        }
        else
        {
            cout << fixed << setprecision(2) << x1 << " " << x2;
        }
    }
}