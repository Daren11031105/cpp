#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[30], avg = 0;
	for (int i = 0; i < 30; ++i) cin >> a[i], avg += a[i];
	sort(a, a + 30);
	cout << a[29] << " " << a[0] << " " << avg / 30 << "\n";
	return 0;
}