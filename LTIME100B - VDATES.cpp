#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; 
    cin >> T;
    while(T--)
    {
        int D, L, R;
        cin >> D >> L >> R;
        if(D<L) cout << "Too Early" << endl;
        else if (D>R) cout << "Too Late" << endl;
        else cout << "Take second dose now" << endl;
    }
    return 0;
}