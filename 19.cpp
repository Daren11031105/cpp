#include <iostream>
using namespace std;
int main()
{
    int a[5], avg=0;
    for(int i=0; i<5; i++) cin >> a[i], avg+=a[i];
    cout<<avg/5<<'\n';
}