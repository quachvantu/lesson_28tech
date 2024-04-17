// #include <iostream>
// #include <math.h>

// using namespace std;
// int main()
// {
//     double a, b;
//     cin >> a >> b;
//     int result;
//     int x = ceil(a);
//     int y = floor(b);
//     result = max(0, y - x + 1);
//     cout << result;
// }

#include <iostream>
#include <math.h>

using namespace std;

int result(double a, double b)
{
    int x = ceil(a);
    int y = floor(b);
    int z = max(0, y - x + 1);
    return z;
}

int main()
{
    double a, b;
    cin >> a >> b;
    int tinhSoNguyen = result(a, b);
    cout << "So nguyen la : " << tinhSoNguyen;
}
