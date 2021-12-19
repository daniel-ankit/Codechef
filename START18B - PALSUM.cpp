/*
┌─────────────────────────────────────────────────────────────────────┐
│                                                                     │
└─────────────────────────────────────────────────────────────────────┘
*/
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
#define M make_pair
#define MOD(n) n%1000000007
#define VII vector <pair<int, int>>
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VB vector<bool>
#define FF first
#define SS second
#define LONGINT << fixed << setprecision(0)
#define FOR(i, n) for(long long i=0; i<n; i++)
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL); cout.tie(NULL);
#define VIN(X, N) for(int i=0; i<N; i++){int V; cin >> V; H.push_back(V);};
#define VOUT(x,X) for(auto x:X) cout << x << " ";
#define SORT(V) sort(V.begin(), V.end())
#define REVERSE(V) reverse(V.begin(), V.end())
#define ADD(V) accumulate(V.begin(), V.end(), 0)
#define PI 3.1415926535897932384626433832795

int isprime(int n){if(n==1) return 0;for(int i = 2; i <= sqrt(n); i++){if(n % i == 0)return 0;}return 1;}
long long lcm(int a, int b) {return (a / __gcd(a, b)) * b;}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
int maxfreqof(vector<int>& nums) { int count=0, ans=0; for(int n:nums) { if(count==0) ans = n; (n==ans) ? (count++) : (count--); } return ans; }
int MEX(set <int> V){ set<int> :: iterator j; int i=0; for (j=V.begin(); j!=V.end(); j++, i++) if(*j!=i) return i; return *(V.end())+1; }
int maxfreq(vector<int> V) { int C=1, MAX=0; SORT(V); int pivot = V[0]; for(int i=1; i<V.size(); i++) { if(V[i]!=pivot) { pivot = V[i]; C=0; } C++; MAX = max(MAX, C); } return MAX; }

int32_t main()
{
    Radhe Krishna
    vector<int>A = {975, 951, 903, 891, 843, 819, 771, 765, 717, 693, 645 ,633, 585, 561, 513, 511, 495,
    471, 455, 443, 427, 403, 387, 381, 365, 341, 325, 313, 297, 273, 257, 255, 231, 219, 195, 189, 165, 153,129, 127,119 ,107, 99,
    93, 85, 73, 65, 63, 51, 45, 33, 31, 27, 21, 17, 15, 9, 7, 5 ,3, 1};
    TEST
    {
        int n;
        cin>>n;
        int m=A.size(), rem=n, ans=0;
        map<int,int>M;
        bool pass = true;
        for(int i=0; i<m; i++)
        {
            if(A[i] == 0) continue;
            int possible = rem/A[i];
            if(possible == 0) continue;
            M[A[i]] += possible;
            ans += possible;
            rem = rem-(possible*A[i]);
            if(ans>12)
            {
                pass = false;
                break;
            }
            if(rem <= 0)break;
        }
        if(pass)
        {
            vector<int> result;
            for(auto &p:M)
            {
                int times=p.second;
                while(times--) result.push_back(p.first);
            }
            cout << result.size() << endl;
            for(int i:result)
                cout << i << " ";
            cout << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}