#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

void solve()
{
    int N, M=1;
    cin >> N;
    if(N==1) cout << 1 << endl;
    else if((N != 0) && ((N &(N - 1)) == 0))
    cout << N/2 << endl;
    else 
    {
    while(N>M)
        M*=2;
    cout << max(N-M/2+1, M/2-M/4) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    TEST
    solve();
    return 0;
}