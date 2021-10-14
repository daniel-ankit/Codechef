#include <bits/stdc++.h>
#include <algorithm>
#include <bitset>
#include <cstdlib>
#include <iomanip>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define int long long
#define PB push_back
#define PP pop_back
#define MP make_pair
#define MOD(n) n % 1000000007
#define VLL vector<long long>
#define FOR(i, n) for (long long i = 0; i < n; i++)
#define SORT(Series) sort(Series.begin(), Series.end());
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);

int32_t main()
{
    Radhe Krishna
    TEST
    {
        int N, A, B;
        cin >> N >> A >> B;
        int O = 0, E = 0, ans = 0;
        for (int i=2; i*i<=N; i++)
        {
            while (N % i == 0)
            {
                N /= i;
                (i % 2)?(O++):(E++);
            }
        }
        if (N > 1)
            (N % 2)?(O++):(E++);
        if (A >= 0 && B >= 0)
        {
            cout << A*E + B*O << endl;
            continue;
        }
        else if (A >= 0 && B < 0)
        {
            if (E)
                ans = A * E;
            else if (O)
                ans = B;
        }
        else if (A < 0 && B >= 0)
        {
            ans = B * O;
            if (E)
                ans += A;
        }
        else if (A < 0 && B < 0)
        {
            if (E)
                ans += A;
            else if (O)
                ans += B;
        }
        cout << ans << endl;
    }
    return 0;
}