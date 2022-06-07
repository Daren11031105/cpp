#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    while (cin >> a >> b >> c)
    {
        if (c == '+')
            cout << a + b << '\n';
        else if (c == '-')
            cout << a - b << '\n';
        else if (c == '*')
            cout << a * b << '\n';
        else if (c == '/')
            cout << a / b << '\n';
    }
}