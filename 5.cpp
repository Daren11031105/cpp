#include <bits/stdc++.h>
using namespace std;
int F(int x)
{
    if (x < 0) return 1;
    else if (x == 0) return 3;
    else return 5;
}
int main()
{
    int x;
    cin >> x;
    cout << F(x) << '\n';
}