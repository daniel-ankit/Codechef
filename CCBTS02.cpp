#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int
#define PB push_back
#define PP pop_back
#define MP make_pair
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);

void solve()
{
    int N;
    cin >> N;
    string S[N];
    for(int i=0; i<N; i++)
        cin >> S[i];
    if(S[0]=="stop"){cout << 404 << endl; return;}
    for(int i=0; i<N-1; i++)
    {
        if((S[i]=="stop" && S[i+1]=="stop"))
        {cout << 404 << endl; return;}
    }
    cout << 200 << endl;
}

int main()
{
    Radhe Krishna
    TEST
        solve();
    return 0;
}