#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int M,N,K;
        cin >> M >> N >> K;
        if(N*K<M) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}