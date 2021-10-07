#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>

#define f(i, s, e) for (long long int i = s; i < e; i++)
void solve()
{
    ll n;
    cin >> n;
    vll arr(n);
    f(i, 0, n) cin >> arr[i];
    if (n > 4)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    f(i, 0, n)
    {
        if (i % 4 == 0)
            cout << arr[i] << " 0\n";
        else if (i % 4 == 1)
            cout << "0 " << arr[i] << endl;
        else if (i % 4 == 2)
            cout << -arr[i] << " 0\n";
        else
            cout << "0 " << -arr[i] << endl;
    }
}
int main()
{

    ll T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}