#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int L, R, count=0;
        cin >> L >> R;
        if(L%3==0)
        cout << R/3 - L/3 + 1 << endl;
        else cout <<  R/3 - L/3 << endl;
    }
    return 0;
}