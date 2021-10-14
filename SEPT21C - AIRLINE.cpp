#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >>n;
	while(n--)
	{
	    int A, B, C, D, E;
	    cin >> A >> B >> C >> D >> E;
	    if(((A+B)<=D) && (C<=E) || ((B+C)<=D) && (A<=E) || ((C+A)<=D) && (B<=E))
	    cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}