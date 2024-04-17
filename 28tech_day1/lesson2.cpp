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

