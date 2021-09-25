#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y, N, M, A, B;
        cin >> N >> M >> X >> Y;
        if (N == 1)
            cout << (M - 1) * X << endl;
        else if (M == 1)
            cout << (N - 1) * X << endl;
        else
        {
            int MIN = min(M - 1, N - 1), MAX = max(M - 1, N - 1);
            A = MIN * Y + (MAX - MIN) * X;
            B = (M + N - 2) * X;
            cout << min(A, B) << endl;
        }
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

struct mycmp
{
    bool operator()(pair<int, int> a, pair<int, int> b) const
    {
        return (a.first < b.first) || (a.first == b.first && a.second > b.second);
    }
};
int main()
{
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        if (n == 1)
            cout << (m - 1) * x << "\n";
        else if (m == 1)
            cout << (n - 1) * x << "\n";
        else
        {
            int ans = (n - 1 + m - 1) * x;
            int x1 = min(n, m);
            int p = min(x, y);
            int h = (n - x1 + m - x1);
            if (h & 1)
                ans = min(ans, (x1 - 1) * y + (n - x1 + m - x1 - 1) * p + x);
            else
                ans = min(ans, (x1 - 1) * y + (n - x1 + m - x1) * p);
            cout << ans << "\n";
        }
    }
}
*/