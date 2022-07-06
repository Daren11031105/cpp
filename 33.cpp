#include <bits/stdc++.h>
using namespace std;
#define op ios::sync_with_stdio(0); cin.tie(NULL);
#pragma GCC optimize("Ofast")
string s;
void sol()
{
    cin >> s;
    int upper = 0, lower = 0, other = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') upper++;
        else if (s[i] >= 'a' && s[i] <= 'z') lower++;
        else other++;
    }
    cout << "Upper: " << upper << '\n';
    cout << "Lower: " << lower << '\n';
    cout << "Other: " << other << '\n';
}
signed main()
{
    op
    sol();
}