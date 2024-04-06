#include <iostream>
#include <math.h>
using namespace std;
int main(){
    long long x;
    long long A;
    cout << "Nhap x ";
    cin >> x;
    if (x>0 && x<=10^5){
        A = pow(x,3) + 3*pow(x,2) + x + 1;
        cout << A;
    }
}
// #include <iostream>
// #include <cmath> // Thêm thư viện cmath

// using namespace std;

// int main() {
//     int x;
//     cout << "Nhập giá trị của x: ";
//     cin >> x;

//     // Tính giá trị của biểu thức A(x)
//     int result = pow(x, 3) + 3 * pow(x, 2) + x + 1;

//     cout << "Kết quả của biểu thức A(x) là: " << result << endl;

//     return 0;
// }
