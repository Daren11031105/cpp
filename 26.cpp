#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[2][3];
	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 3; ++j) cin >> a[i][j];
	int b[3][2];
	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 3; ++j) b[j][i] = a[i][j];
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j) cout << b[i][j] << " ";
		cout << '\n';
	}
	return 0;
}