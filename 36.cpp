#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int ans = rand() % 1000 + 1;
    int guess, num = 0;
    do
    {
        num++;
        cin >> guess;
        if (guess == ans)
        {
            cout << "You got it! Guess time:" << num << ".\n";
            break; 
        }
        else if (guess > ans) {cout << "Too big!\n";}
        else if (guess < ans) {cout << "Too small!\n";}
    } while (1);
    
}