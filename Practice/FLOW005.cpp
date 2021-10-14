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
        if(N>=100)
        {
            count = N/100;
            N%=100;
        }
        if(N>=50)
        {
            count++;
            N%=50;
        }
        if(N>=10)
        {
            count+=N/10;
            N%=10;
        }
        if(N>=5)
        {
            count++;
            N%=5;
        }
        if(N>=2)
        {
            count+=N/2;
            N%=2;
        }
        count+=N;
        cout << count << endl;
    }
    return 0;
}