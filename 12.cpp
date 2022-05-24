#include <bits/stdc++.h>
using namespace std;
int main()
{
    int score;
    while (cin >> score)
    {
        if           (score >= 90) puts("A");
        else if ((80 <= score) && (score < 90)) puts("B");
        else if ((70 <= score) && (score < 80)) puts("C");
        else if ((60 <= score) && (score < 70)) puts("D");
        else if       (score < 60) puts("E");
    }
    
}