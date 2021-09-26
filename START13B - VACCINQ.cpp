#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, P, X, Y, adult=0, child=0;
        cin >> N >> P >>  X >> Y;
        int num[N];
        for(int i=0; i<N; i++)
            cin >> num[i];
        for (int i = 0; i <P; i++)
        {
            if (num[i] == 1)
                adult++;
            else child++;
        }
        cout << adult*Y + child*X << endl;
    }
    return 0;
}