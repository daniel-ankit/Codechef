#include<bits/stdc++.h>
#include<string.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int
#define PB push_back
#define PP pop_back
#define MP make_pair
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);
#define SORT(SEQUENCE) sort(SEQUENCE.begin(), SEQUENCE.end());

int main()
{
    Radhe Krishna
    TEST
    {
        int N, P=0, E=0, PuE=0, PnE=0, A=0, temp=0;
        cin >> N;
        string S, T;
        cin >> S >> T;
        for(int i=0; i<N; i++)
        {
            if(S[i]=='1' && T[i]=='1') PuE++;
            else if(S[i]=='1' && T[i]=='0') P++;
            else if(T[i]=='1' && S[i]=='0') E++;
            else PnE++;
        }
        temp=min(P, E);
        P-=temp;
        E-=temp;
        A+=temp;
        temp=min(PuE, E+P+PnE);
        A+=temp;
        PuE-=temp;
        A+=PuE/2;
        cout << A << endl;
    }
    return 0;
}
