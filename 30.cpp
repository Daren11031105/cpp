#include <bits/stdc++.h>
using namespace std;
int a[5][3], sum;
int main()
{
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 3; ++j) {cin >> a[i][j]; sum += a[i][j];}
    cout << sum << '\n';
    return 0;
}