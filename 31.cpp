#include <iostream>
#include <vector>
using namespace std;
int n;
void sol()
{
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    cout << '\n';
    for (int i = 0; i < n; ++i) swap(a[i], b[i]);
    cout << "After swaped:\nA:";
    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    cout << "\nB:";
    for (int i = 0; i < n; ++i) cout << b[i] << " ";
    cout << '\n';
}
int main()
{
    sol();
}