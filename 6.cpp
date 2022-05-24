#include <bits/stdc++.h>
using namespace std;
int F(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << F(a, b) << '\n';
}