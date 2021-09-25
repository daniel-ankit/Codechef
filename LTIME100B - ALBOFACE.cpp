/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(unsigned long long int n)
{
   if(n==0 || n==1)
   return false;
   return (ceil(log2(n)) == floor(log2(n)));
}

void solve(unsigned long long int N)
{
    bool flag = true; //true = Alice
    while(N!=0)
    {
        if(isPowerOfTwo(N)) N=1;
        else N--;
        flag = !flag;
    }
    if(flag) cout << "Bob" << endl;
    else cout << "Alice" << endl;
    return;
}

int main()
{
    int T;
    cin >>T;
    while(T--)
    {
        unsigned long long int N;
        cin >> N;
        solve(N);
    }
    return 0;
}
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool pow(ll n)
{
    if(n!=0 && (n &(n-1))==0)
    return true;
    return false;
}

void solution()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    if(n==2)
    {
        cout << "Bob" << endl;
        return;
    }
    if(n==1)
    {
        cout << "Alice" << endl;
        return;
    }
    if(n%2!=0)
    {
        if(pow(n+1)==true)
        cout << "Alice" << endl;
        else cout << "Bob" << endl;
        return;
    }
    if(n%2==0)
    {
        if(pow(n+2)==true)
        cout << "Bob" << endl;
        else cout << "Alice" << endl;
        return;
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--)
        solution();
    return 0;
}