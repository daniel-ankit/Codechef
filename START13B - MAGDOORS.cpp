#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >>T;
    while(T--)
    {
    string S;
    int count=0;
    cin >> S;
    if(S[0]=='0')
    {
        count++;
        for(int i=0; i<S.length(); i++)
        {
            if(S[i]=='1')
            S[i] = '0';
            else S[i] = '1';
        }
    }
    for(int i=0; i<S.length()-1; i++)
    {
        if(S[i]!=S[i+1])
        count++;
    }
    cout << count << endl;
    }
    return 0;
}