#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        int N, S;
        cin >> N >> S;
        int sec, max=INT_MIN, diff;
        for (int i = 0; i <= min(N, S); i++)
        {
            sec = S - i;
            if (sec + i == S)
            {
            if(sec<=N)
                diff = abs(sec - i);
            else
                continue;
            }
            if (diff > max)
                max = diff;
        }
        cout << max << endl;
    }
    return 0;
}