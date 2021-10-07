#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int
#define PB push_back
#define PP pop_back
#define MP make_pair
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);
#define SORT(SEQUENCE) sort(SEQUENCE.begin(), SEQUENCE.end());

int intomintues(string S1, string S2)
{
    if(((int)S1[0]-48)==1 && ((int)S1[1]-48)==2 && S2[0]=='A')
        return ((int)S1[3]-48)*10 + ((int)S1[4]-48);
    if(((int)S1[0]-48)==1 && ((int)S1[1]-48)==2 && S2[0]=='P')
        return 720+((int)S1[3]-48)*10+((int)S1[4]-48);
    if(S2[0]=='A')
        return (((int)S1[0]-48)*10+((int)S1[1]-48))*60 + ((int)S1[3]-48)*10+((int)S1[4]-48);
    return (((int)S1[0]-48)*10+((int)S1[1]-48))*60 + ((int)S1[3]-48)*10+((int)S1[4]-48)+720;
}

int main()
{
    Radhe Krishna
    TEST
    {
        string NT, NI;
        cin >> NT >> NI;
        int N;
        cin >> N;
        int B = intomintues(NT, NI);
        while(N--)
        {
            string IT, II, FT, FI;
            cin >>  IT >> II >> FT >> FI;
            int A = intomintues(IT, II);
            int C = intomintues(FT, FI);
            if(B>=A && B<=C) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
    return 0;
}