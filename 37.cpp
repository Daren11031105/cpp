#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int tmp = a;
    a = b, b = tmp;
}
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        swap(a, b);
        cout << "After swaped:\n" << a << ' ' << b << '\n';
    }
}