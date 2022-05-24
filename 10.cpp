#include <bits/stdc++.h>
using namespace std;
int main()
{
    double time;
    cout << "time(min):";
    cin >> time;
    double a = time * 0.6, b = 50.0 + time * 0.4;
    if (a <= b) cout << "神州行較合適\n";
    else cout << "全球通較合適\n";
}