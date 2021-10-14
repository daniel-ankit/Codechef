#include<bits/stdc++.h>
using namespace std;

#define LL long long int 
#define TEST LL T; cin >> T; while (T--)
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
        LL N, K;
        cin >> N >> K;
        LL marks[N] = {0};
        LL A[K];
        for(LL i=0; i<K; i++)
            cin >> A[i];
        string score[N];
        for(LL i=0; i<N; i++)
            cin >> score[i];
        for(LL i=0; i<N; i++)
        {
            for(LL j=0; j<K; j++)
            marks[i] += ((LL)score[i][j]-48)*A[j];
        }
        for(LL i=0; i<N; i++)
            cout << marks[i] << endl;
    }
    return 0;
}