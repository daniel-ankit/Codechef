#include<bits/stdc++.h>
#include<algorithm>
#include<bitset>
#include<cstdlib>
#include<iomanip>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define int long long 
#define PB push_back
#define PP pop_back
#define MP make_pair
#define MOD(n) n%1000000007
#define VLL vector <long long>
#define FOR(i, n) for(long long i=0; i<n; i++)
#define SORT(Series) sort(Series.begin(), Series.end());
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);

void solve()
{
    int N;
    cin >> N;
    string S = to_string(N);
    int L = S.length();
    for(int i=0, j=L-1; i<L/2-1, j>=L/2; i++, j--)
    {
        if(S[i]!=S[j])
        {
            cout << "loses" << endl;
            return;
        }
    }
    cout << "wins" << endl;
    return;
}

int32_t main()
{
    Radhe Krishna
    TEST
    solve();
    return 0;
}