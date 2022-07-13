#include <bits/stdc++.h>
#define int long long
#define v vector<int>
using namespace std;
v F(int n)
{
    assert(n >= 0 && n <= 10000);
    v ans;
    ans.push_back(1);
    for (int i = 1; i <= n; ++i)
    {
        int b = 0;
        for (auto &c : ans)
        {
            int product = c * i + b;
            c = product % 10000;
            b = product / 10000;
        }
        if (b > 0)
        {
            ans.push_back(b);
        }
    }
    return ans;
}
void print(const v &num)
{
    if (num.empty())
        puts("0");
    else
    {
        cout << num.back();
        for (auto it = num.rbegin() + 1; it != num.rend(); ++it)
            printf("%04lld", *it);
        cout << '\n';
    }
}
signed main()
{
    v ans = F(200);
    print(ans);
}