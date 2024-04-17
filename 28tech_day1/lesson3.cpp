#include <iostream>
using namespace std;
int main(){
    long long a,b,c,S;
    cin >> a >> b >> c;
    if (a,b,c > 0){
        S = a*(c+b) + b*(a+c);
        cout << S;
    }
}