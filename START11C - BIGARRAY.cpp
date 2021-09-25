/*

01.

#include <iostream>
using namespace std;

int main()
{
    int tes;
    cin >> tes;
    while (tes--)
    {
        int N = 0;
        cin >> N;
        if (N % 4 == 0)
            cout << "North" << endl;
        else if (N % 4 == 3)
            cout << "East" << endl;
        else if (N % 4 == 2)
            cout << "South" << endl;
        else
            cout << "West" << endl;
    }
    return 0;
}

02.

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, S;
        cin >> N >> S;
        int sec, max, diff;
        for (int i = 0; i <= min(N, S); i++)
        {
            sec = S - i;
            if (sec + i == S)
                diff = abs(sec - i);
            else
                continue;
            if (diff > max)
                max = diff;
        }
        cout << max << endl;
    }
    return 0;
}

03.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long 

int32_t main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, S;
        cin >> N>> S;
        int ans = N *(N+1)/2;
        ans = ans-S;
        if(ans>=1 && ans<=N) cout <<ans << endl;
        else cout << "-1" <<endl;
    }
    return 0;
}

04.

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int Array[N][N];
        if(N>2)
        {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                Array[i][j] = 1;
        }
        for (int i = 0, j = 0; i < N, j < N; i++, j++)
            Array[i][j] = -1;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                cout << Array[i][j] << " ";
            cout << endl;
        }
        }
        else cout << "-1 -1" <<endl << "-1 -1" <<endl;
    }
    return 0;
}

05

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        int Array[N], New[N];
        for (int i = 0; i < N; i++)
        {
            cin >> Array[i];
            cin >> New[i];
        }
        for(int m=0; m< K; m++)
        {
            for (int i = 1; i < N; i++)
            {
                if (Array[0] > 0)
                {
                    New[1]++;
                    New[N]++;
                }
                if (Array[i] > 0)
                {
                    New[i - 1]++;
                    New[i + 1]++;
                }
            }
            for (int i = 1; i < N; i++)
                New[i] = Array[i];
        }
        cout << accumulate(New, New + N, 0) << endl;
    }
    return 0;
}

*/