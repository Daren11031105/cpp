#include <bits/stdc++.h>
using namespace std;
#define op ios_base::sync_with_stdio(0); cin.tie(NULL);
#pragma GCC optimize("Ofast")
int a[4][3];
void sol()
{
    int min = -1e5;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            if (min > a[i][j]) min = a[i][j];
        }
    }
    cout << min << a[3][2] << '\n';
}
signed main()
{
    op
    sol();
}