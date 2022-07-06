#include <bits/stdc++.h>
using namespace std;
#define op ios::sync_with_stdio(0); cin.tie(NULL);
#pragma GCC optimize("Ofast")
vector<int> score;
vector<int> mergesort(vector<int> arr)
{
    int n = (int)arr.size();
    //邊界條件：陣列長度等於1
    if (n == 1) return arr;
    //遞迴排序左半邊與右半邊
    int mid = n / 2;
    vector<int> left, right;
    for (int i = 0; i < n; i++)
    {
        if (i < mid) left.push_back(arr[i]);
        else right.push_back(arr[i]);
    }
    left = mergesort(left);
    right = mergesort(right);
    //合併左右兩半邊
    vector<int> sorted;
    int Lptr = 0, Rptr = 0;
    while (Lptr < (int)left.size() && Rptr < (int)right.size())
    {
        if (left[Lptr] < right[Rptr])
        {
            sorted.push_back(left[Lptr]);
            Lptr++;
        }
        else
        {
            sorted.push_back(right[Rptr]);
            Rptr++;
        }
    }
    while (Lptr < (int)left.size())
    {
        sorted.push_back(left[Lptr]);
        Lptr++;
    }
    while (Rptr < (int)right.size())
    {
        sorted.push_back(right[Rptr]);
        Rptr++;
    }
    return sorted;
}
signed main()
{
    op
    int num;
    for (int i = 0; i < 10; i++) {cin >> num; score.push_back(num);}
    score = mergesort(score);
    for (auto i : score) cout << score[i] << " ";
    cout << '\n';
}