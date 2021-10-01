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
        int N, ans=1;
        cin >> N;
        if(N==0)
        cout << 1 << endl;
        else if(N==1 || N==2)
        cout<< 2 << endl;
        else
        {
            while(ans*2<=N)
                ans*=2;
            if(ans==N)
                cout << N << endl;
            else if(N==(2*ans-1))
                cout << N+1 << endl;
            else cout << ans << endl;
        }
    }
    return 0;
}

//423783