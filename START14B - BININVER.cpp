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
        int N;
        cin >> N;
        int Array[N];
        for(int i=0; i<N;i++)
            cin >> Array[i];
        int k = 1e9;
        for (int i = 0; i < N; i++) 
        {
            int x = Array[i];
            int count = 0;
            while (x % 2 == 0)
            {
                x= x/2;
                count++;
            }
            k = min(k, count);
        }
        cout <<k <<endl;
    }
    return 0;
}