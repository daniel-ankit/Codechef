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
#define LONGINT << fixed << setprecision(0)
#define FOR(i, n) for(long long i=0; i<n; i++)
#define SORT(Series) sort(Series.begin(), Series.end());
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);

int32_t main()
{
    Radhe Krishna
    TEST
    {
        int A[5], num=0, nE=0, nI=0;
        for(int i=0; i<5; i++)
        {
            cin >> num;
            if(num==1) nI++;
            else if(num==2) nE++;
        }
            if(nI>nE) cout << "INDIA" << endl;
            else if(nI<nE) cout << "ENGLAND" << endl;
            else cout << "DRAW"<< endl;
    }
    return 0;
}