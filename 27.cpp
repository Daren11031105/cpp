#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << __gcd(a, b) << ' ' << a * b / __gcd(a, b) << '\n';
    }
    
    return 0;
}
