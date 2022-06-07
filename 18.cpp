#include <iostream>
using namespace std;
int main()
{
    double a[21] = {0};
    a[0] = 1, a[1] = 2;
    for (int i = 2; i < 21; i++)
        a[i] = a[i - 1] + a[i - 2];
    double fraction[20], ans=0.0;
    for (int i = 1; i < 21; i++)
        fraction[i-1] = a[i] / a[i - 1];
    for(int i=0; i<20; i++) /*cout<<fraction[i]<<' ',*/ans+=fraction[i];
    /*cout<<endl;
    for (int i = 0; i < 21; i++)
        cout << a[i] << " ";
    cout << endl;*/
    cout<<ans<<'\n';
}