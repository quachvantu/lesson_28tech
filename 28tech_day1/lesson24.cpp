#include <iostream>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if (x >= 65 && x <= 89)
    {
        x += 33;
        cout << x;
    }
    else if (x == 90)
    {
        cout << "a";
    }
    else if (x >= 97 && x <= 122)
    {
        x += 1;
        cout << x;
    }
    else
    {
        cout << "INVALID";
    }
}