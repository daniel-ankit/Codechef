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
        int L, C, num=0;
        cin >> L >> C;
        vector <int> V, diff;
        for(int i=0; i<L; i++)
        {
            cin >> num;
            V.PB(num);
        }
        sort(V.begin(), V.end());
        for(int i=0; i<L-C-1; i++)
            diff.PB(V[C+i-1]-V[i]);
        cout << *min_element(diff.begin(), diff.end()) << endl;
    }
    return 0;
}