#include <bits/stdc++.h>
using namespace std;
int f(int x)
{
    if (x < 0) return 2 * x + 1;
    else if (x == 0) return 0;
    else return 2 * x - 1;
}
int main()
{
    int x;
    cin >> x;
    cout << f(x) << '\n';
}