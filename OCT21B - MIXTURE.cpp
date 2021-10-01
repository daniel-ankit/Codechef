#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int
void solve()
{
    int A, B;
    cin >> A >> B;
    if(A==0 && B!=0) cout << "Liquid";
    else if(A!=0 && B==0) cout << "Solid";
    else cout << "Solution";
    cout << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    TEST
    solve();
    return 0;
}