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
        int n, k;
        cin >> n >> k;
        if (n - k == 1)
            cout << -1 << endl;
        else
        {
        int Array[n];
        for(int i=0; i<n; i++)
            Array[i]=i+1;
        for(int i=0; i<n-1;i++)
        {
            if(i<k)
                continue;
            else swap(Array[i], Array[i+1]);
        }
        for(int i=0; i<n; i++)
            cout << Array[i] << " ";
        cout << endl;
        }
    }
    return 0;
}