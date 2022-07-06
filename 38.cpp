#include <bits/stdc++.h>
using namespace std;
int main()
{
    int max = 0, min = INT_MAX, avg = 0;
    int num,i = 0;
    while (cin >> num && (num > 0))
    {
        i++;
        if (num > max) max = num;
        if (num < min) min = num;
        avg += num;
    }
    cout << "Max: " << max << ".\nMin: " << min << ".\nAvg: " << avg / i << ".\n";
}