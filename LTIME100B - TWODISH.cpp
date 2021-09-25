#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, A, B, C;
        cin >> N >> A >> B >> C;
        if((A+C)>=N && B>=N)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}