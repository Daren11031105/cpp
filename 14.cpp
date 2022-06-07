#include <iostream>
using namespace std;
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    int b = 0, c = 0, d = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > 0)
            b++;
        else if (a[i] < 0)
            c++;
        else
            d++;
    }
    cout << "plus: " << b << '\n';
    cout << "minus: " << c << '\n';
    cout << "zero: " << d << '\n';
}