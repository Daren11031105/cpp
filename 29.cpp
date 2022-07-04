#include <bits/stdc++.h>
using namespace std;
int score[10];
int main()
{
    for (int i = 0; i < 10; ++i) cin >> score[i];
    sort(score, score + 10);
    for (int i = 0; i < 10; ++i) cout << score[i] << " ";
    cout << '\n';
}