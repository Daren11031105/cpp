#include <iostream>
using namespace std;
int main()
{
    int a[10], sum = 0;
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    for (int i = 0; i < 10; i++)
        sum += a[i];
    cout << sum / 10 << '\n';
}