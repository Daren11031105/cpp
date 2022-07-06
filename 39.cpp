#include <bits/stdc++.h>
using namespace std;
int F(int n)
{
    if (n == 1) return 1;
    else return n * F(n - 1);
}
int main()
{
    int m, k;
    while (cin >> m >> k)
    {
        cout << F(k) / F(m - k) << '\n';
    }
    
}