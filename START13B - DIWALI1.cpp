#include <iostream>
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int P, A, B, C, X, Y;
        cin >> P >> A >> B >> C >> X >> Y;
        long long int ans = min((X*A+B), (Y*A+C));
        ans = P/ans;
        cout << ans << endl;
    }
    return 0;
}