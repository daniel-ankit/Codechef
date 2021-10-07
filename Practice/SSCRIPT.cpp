#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int
#define PB push_back
#define PP pop_back
#define MP make_pair
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);
#define SORT(SEQUENCE) sort(SEQUENCE.begin(), SEQUENCE.end());

void solve()
{
    int N, K, nstar=0;
    cin >> N >> K;
    string S;
    cin >> S;
    for(int i=0; i<N; i++)
    {
        if(S[i]=='*') nstar++;
        if(nstar==K)
        {
            cout << "YES" << endl;
            return;
        }
        if(S[i]!='*') nstar=0;
    }
    cout << "NO" << endl;
}

int main()
{
    Radhe Krishna
    TEST
    {
        solve();
    }
    return 0;
}