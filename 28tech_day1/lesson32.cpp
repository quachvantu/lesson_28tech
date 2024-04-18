#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int arr[] = {a, b, c, d, e};
    sort(arr, arr + 5);
    int num = arr[1];
    cout << num;
    return 0;
}