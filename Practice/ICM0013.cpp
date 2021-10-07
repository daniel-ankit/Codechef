#include<bits/stdc++.h>
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
        int N, count=0;
        cin >> N;
        for(int i=1; i<=N; i++)
        {
            if(N%i<=N/2)
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
