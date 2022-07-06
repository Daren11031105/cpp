#include <bits/stdc++.h>
using namespace std;
bool num(int n)
{
    bool b = true;
    for (int i = 2; i <= (int)sqrt(n); i+=(i == 2 ? 1 : 2))
    {
        if (!(n % i))
        {
            b = false;
            break;
        }
    }
    return b;
}
int main()
{
    int n;
    while (cin >> n)
    {
        if (num(n)) cout << "Yes\n";
        else cout << "No\n";
    }
}