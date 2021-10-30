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
#define VIN(x,X) for(auto &x:X) cin >> x; 
#define VOUT(x,X) for(auto x:X) cout << x << " ";
#define SORT(V) sort(V.begin(), V.end())
#define REVERSE(V) reverse(V.begin(), V.end())
#define ADD(V) accumulate(V.begin(), V.end(), 0)
#define PI 3.1415926535897932384626433832795
VI storeprime(10000000, 1);
VI storeval(10000000, 0);

int isprime(int n){if(n==1) return 0;for(int i = 2; i <= sqrt(n); i++){if(n % i == 0)return 0;}return 1;}
long long lcm(int a, int b) {return (a / __gcd(a, b)) * b;}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
int maxfreqof(vector<int> V) { int res = 0, count = 1, n=V.size(); for(int i = 1; i < n; i++) { if(V[i] == V[res]) count++; else count--; if(count == 0) { res = i; count = 1; } } return V[res]; }
int maxfreq(vector<int> V) { int C=1, MAX=0; SORT(V); int pivot = V[0]; for(int i=1; i<V.size(); i++) { if(V[i]!=pivot) { pivot = V[i]; C=0; } C++; MAX = max(MAX, C); } return MAX; }
void isPrime(){ int c=0; for(int i=2; i*i<=10000000; i++) if (storeprime[i]==1) for(int j=i*2; j<=10000000; j+=i) storeprime[j]=0; for(int i=2; i<=10000000; i++) storeval[i] = storeval[i-1] + storeprime[i]; }

void solve()
{
    int A, B;
    cin >> A >> B;
    if((A==1 && B==2) || (A==2 && B==3))
    {
        cout << 1 << endl;
        return;
    }
    if(A==1 && B==3) 
    {
        cout << 2 << endl;
        return;
    }
    int X = storeval[A+1], Y = storeval[B];
    int count= (B-A)-(Y-X);
    cout << count << endl;
}

int32_t main()
{
    Radhe Krishna
    isPrime(); // Prime Gen
    TEST 
    solve();
    return 0;
}