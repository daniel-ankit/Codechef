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
        int N, K;
        cin >> N >> K;
        vector <int> V;
        for(int i=1; i<=K; i++)
            V.PB(N%i);
        cout << *max_element(V.begin(), V.end()) << endl;
    }
    return 0;
}