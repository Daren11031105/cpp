#include <bits/stdc++.h>
using namespace std;
int main() {
    int r;
    cin >> r;
    if (r >= 0)
    {
        cout << "圓面積：" << r * r * M_PI << '\n';
        cout << "圓周長：" << r * 2 * M_PI << '\n';
    }
    else
    {
        cout << "r需>=0\n";
    }
    
}