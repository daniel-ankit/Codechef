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
        int A, B, C;
        cin >> A >> B >> C;
        cout << A + min(B, C) + ((B+C)-2*min(B, C))/3 << endl;
    }
    return 0;
}