#include <iostream>
#include <assert.h>
#include <vector>
#pragma GCC optimize("Ofast")
#define int long long
#define pb push_back
#define v vector<int>
#define endl '\n'
#define op ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
v F(int n)
{
    assert(n >= 0 && n <= 200);
    v ans;
    ans.pb(1);
    for (int i = 1; i <= n; ++i)
    {
        int b = 0;
        for (auto &c : ans)
        {
            int product = c * i + b;
            c = product % 1000;
            b = product / 1000;
        }
        if (b > 0)
        {
            ans.pb(b);
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
            printf("%03lld", *it);
        cout << endl;
    }
}
signed main()
{
    op
    v ans = F(200);
    print(ans);
}