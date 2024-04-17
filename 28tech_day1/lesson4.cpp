#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a,b,tong,hieu;
    long long tich;
    float thuong;
    cin >> a >> b;
    tong = a + b;
    thuong =(float) a / b;
    tich = 1ll* a * b;
    hieu = a - b;
    cout << tong << " "<< hieu << " " << tich << " " << fixed << setprecision(2)<< thuong;
}