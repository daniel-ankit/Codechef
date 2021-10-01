#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    TEST
    {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        if(A+B+C<=D) cout << 1;
        else if(A+B<=D || B+C<=D || A+C<=D) cout << 2;
        else cout << 3;
        cout << endl;
    }
    return 0;
}