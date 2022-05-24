#include <bits/stdc++.h>
using namespace std;
int main()
{
    int income;
    while (cin >> income)
    {
        if (income < 0) break;
        else
        {
            int tax;
                 if ((1000 < income) && (income <= 2000)){tax = income * 0.05;}
            else if ((2000 < income) && (income<= 3000)) {tax = income * 0.1 ;}
            else if ((3000 < income) && (income<= 6000)) {tax = income * 0.15;}
            else if (6000 < income)                      {tax = income * 0.2 ;}
            cout << "tax:" << tax << '\n';
            cout << "left:" << income - tax << '\n';
        }
    }
}