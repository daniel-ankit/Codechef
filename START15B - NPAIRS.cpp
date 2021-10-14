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
        int N, count=0;
        cin >> N;
        string S;
        cin >> S;
        for(int i=0; i<N-1; i++)
        {
            for(int j=i+1; j<i+11; j++)
            {
                if(abs(S[j]-S[i])==j-i)
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}