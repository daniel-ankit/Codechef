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
#define FF first
#define SS second
#define MOD(n) n%1000000007
#define VLL vector <long long>
#define LONGINT << fixed << setprecision(0)
#define FOR(i, n) for(long long i=0; i<n; i++)
#define SORT(Series) sort(Series.begin(), Series.end());
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);

long long lcm(int a, int b) {return (a / __gcd(a, b)) * b;}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}

int32_t main()
{
    Radhe Krishna
    TEST
    {
        int N, num=0;
        cin >> N;
        vector <pair <int, int>> V;
        for(int i=1; i<=N; i++)
        {
            cin >> num;
            V.PB(MP(num, i));
        }
        SORT(V);
        int j=0;
        FOR(i, N)
        {
            if(V[i].first>j)
            {
                V[i].first = j;
                j++;
            }
        }
        sort(V.begin(), V.end(), sortbysec);
        FOR(i, N)
        cout << V[i].first << " ";
        cout << endl;
    }
    return 0;
}