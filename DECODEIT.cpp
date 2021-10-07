#include<bits/stdc++.h>
#include<math.h>
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
        int num=0;
        int N;
        cin >> N;
        if(N!=0)
        {
            string S, O="abcdefghijklmnop";
            cin >> S;
            for(int i=0; i<N; i=i+4)
            {
                if(S[i]=='1') num+=pow(2,3);
                if(S[i+1]=='1') num+=pow(2,2);
                if(S[i+2]=='1') num+=pow(2,1);
                if(S[i+3]=='1') num+=1;
                cout << O[num];
                num=0;
            }
        }
        cout << endl;
    }
    return 0;
}