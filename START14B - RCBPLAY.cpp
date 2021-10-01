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
        int X, Y, Z;
        cin >> X>> Y >>Z;
        if(X+Z*2>=Y) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}