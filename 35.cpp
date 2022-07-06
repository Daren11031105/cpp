#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        char aa[(int)a.size()], bb[(int)b.size()];
        for (int i = 0; i < (int)a.size(); i++) aa[i] = a[i];
        for (int i = 0; i < (int)b.size(); i++) bb[i] = b[i];
        char ab[(int)a.size() + (int)b.size()];
        for (int i = 0; i < (int)a.size(); i++) ab[i] = aa[i];
        for (int i = 0; i < (int)b.size(); i++) ab[i + (int)a.size()] = bb[i];
        for (int i = 0; i < (int)a.size() + (int)b.size(); i++) cout << ab[i];
        cout << endl;
    }
}