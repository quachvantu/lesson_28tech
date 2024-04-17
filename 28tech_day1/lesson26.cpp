#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b)
    {
        if (a == b && a == c && b == c)
        {
            cout << 1;
        }
        else
        {
            if (a == b || a == c || b == c)
            {
                cout << 2;
            }
            else if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
            {
                cout << 3;
            }
            else
            {
                cout << 4;
            }
        }
    }
    else
    {
        cout << "INVALID";
    }
}
