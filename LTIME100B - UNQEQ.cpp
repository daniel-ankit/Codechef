#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        if (N % 4 == 0)
        {
            int Array[N];
            vector <int> vec;
            cout << "YES" << endl;
            for (int i = 0; i < N; i++)
                Array[i] = i + 1;
            for (int i = 0; i < N / 4; i++)
            {
                vec.push_back(Array[i]);
                vec.push_back(Array[N - i - 1]);
            }
            sort(vec.begin(), vec.end());
            for(auto x:vec)
                cout << x << " ";
            cout << endl;
            vec.clear();
            for (int i = N / 4; i < N / 2; i++)
            {
                vec.push_back(Array[i]);
                vec.push_back(Array[N - i - 1]);
            }
            sort(vec.begin(), vec.end());
            for(auto x:vec)
                cout << x << " ";
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
