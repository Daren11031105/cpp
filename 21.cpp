#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[3][3];
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j) cin >> a[i][j];
	int ans = 0;
	for (int i = 0; i < 3; ++i)
		ans += a[i][2-i] + a[i][i];
	cout << ans - a[3/2][3/2] << '\n';
	return 0;
}
