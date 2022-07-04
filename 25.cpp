#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[5];
	for (int i = 0; i < 5; ++i) cin >> a[i];
	for (int i = 0; i <= 5 / 2; ++i) swap(a[i], a[5-i-1]);
	for (int i = 0; i < 5; ++i) cout << a[i] << " ";
	cout << "\n";
	return 0;
}