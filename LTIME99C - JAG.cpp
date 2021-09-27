#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >>n;
	    int A[n];
	    map<int, int> mp;
	    int ans = 0;
	    
	    for(int i=0; i<n; i++)
	    {
	        cin >> A[i];
	        mp[A[i]-i-1]++;
	        if(mp[A[i]-i-1] == 1)
	        ans++;
    	}
	if(mp[A[0] - 1] == n)
	    cout << n<< endl;
	else cout << 1<< endl;
    }
    return 0;
}