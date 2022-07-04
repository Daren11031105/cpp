#include <bits/stdc++.h>
using namespace std;
int a[3][3], b[3][3], c[3][3];
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j) cin >> a[i][j];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j) {b[i][j] = a[j][i]; c[i][j] = a[i][j] + b[i][j];}
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j) cout << b[i][j] << ' ';
        cout << '\n';
    }
    cout << '\n';
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j) cout << c[i][j] << ' ';
        cout << '\n';
    }
}
