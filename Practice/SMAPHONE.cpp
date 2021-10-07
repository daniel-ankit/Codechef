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
    LL N, num=0;
    cin >> N;
    vector <LL> B, R;
    for(int i=0; i<N; i++)
    {
        cin >> num;
        B.PB(num);
    }
    sort(B.begin(), B.end());
    for(int i=N-1; i>=0; i--)
        R.PB(B[i]*(N-i));
    cout << *max_element(R.begin(), R.end());
    return 0;
}

// 14  20  30  53