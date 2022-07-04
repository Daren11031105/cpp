#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	while (cin >> n)
	{
		for (int i = 1; i <= n; ++i)
		{
			for (int num = 1; num <= i*2-1; ++num)
				cout<<"* ";
			cout<<'\n';
		}
	}
	return 0;
}