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

int32_t main()
{
    Radhe Krishna
    TEST
    {
        string S1, S2;
        cin >> S1 >> S2;
        int BB=0, BO=0, B0 = 0, BS0=0;
        int N = S1.length();
        for(int i=0; i<N; i++)
        {
            if(S1[i]=='?' && S2[i]=='?')
                BB++;
            else if(S1[i]=='?' || S2[i]=='?')
                BO++;
            else if(S1[i]!='?' && S2[i]!='?' && S1[i]==S2[i])
                BS0++;
            else B0++;
        }
        cout << min(N-BS0-BB, B0) << " " << BB+BO+B0 << endl;
    }
    return 0;
}