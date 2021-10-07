#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int
#define PB push_back
#define PP pop_back
#define MP make_pair
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);

int main()
{
    Radhe Krishna
    TEST
    {
        set <int> S;
        array <int, 4> A;
        for(int i=0; i<4; i++)
        {
            cin >> A[i];
            S.insert(A[i]);
        }
        sort(A.begin(), A.end());
        if(S.size()==4 || S.size()==3) cout << 2;
        else if(S.size()==2)
        {
            if(A[0]==A[1] && A[1]==A[2] || A[1]==A[2] && A[2]==A[3]) cout << 1;
            else cout<< 2;
        }
        else cout << 0;
        cout << endl;
    }
    return 0;
}