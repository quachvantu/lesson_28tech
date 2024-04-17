#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    int r;
    cin >> r;
    float C = (float)2 * r * 3.14;
    float S = (float)3.14 * pow(r, 2);

    if (r >= 1)
    {
        cout << fixed << setprecision(2) << C << " " << S;
    }
}