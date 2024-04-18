#include <iostream>
using namespace std;
int main()
{
    float a, b, c, d, diemTong;
    cin >> a >> b >> c >> d;
    diemTong = (a + b + (c * 2) + (d * 3)) / 7;
    if (diemTong >= 8)
    {
        cout << "GIỎI";
    }
    else if (diemTong < 8 && diemTong >= 6.5)
    {
        cout << "KHÁ";
    }
    else if (diemTong < 6.5 && diemTong >= 5)
    {
        cout << "TRUNG BÌNH";
    }
    else
    {
        cout << "YẾU";
    }
}