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
        int A, B;
        cin >> A>> B;
        if(abs(A)==abs(B) || (A%2==0 && B%2==0) || (A%2!=0 && B%2!=0))
        cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}