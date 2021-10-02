#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    TEST
    {
        int N, D;
        cin >> N >> D;
        string S=to_string(N);
        int L = S.length();
        if(D==0)
        {
            int I=L;
            for(int i=0; i<L; i++)
            {
                if(S[i]=='0')
                {
                    S[i]='1';
                    I = i;
                    break;
                }
            }
            for(int j=I+1; j<L; j++)
            S[j]='1';
        }
        else if(D==9)
        {
            if(S[0]=='9')
            {
                for(int i=0; i<L; i++)
                    S[i]='0';
                S="1"+S;
            }
            else
            {
                int I = L;
                for(int i=0; i<L; i++)
                {
                    if(S[i]=='9')
                    {
                        for(int k=i-1; k>=0; k--)
                        {
                            if(S[k] < '8')
                            {
                                S[k]++;
                                I = k;
                                goto CVV;
                            }
                        }
                        for(int i=0; i<L; i++)
                            S[i]='0';
                        S = "1"+S;
                        goto FVV;
                    }
                }
                CVV:;
                for(int j=I+1; j<L; j++)
                    S[j]='0';
                FVV:;
            }
        }
        else
        {
            int i=0;
            for(i=0; i<L; i++)
            {
                if((S[i]-48)==D)
                {
                    S[i]=S[i]+1;
                    break;
                }
            }
            for(int j=i+1; j<L; j++)
                S[j]='0';
        }
        cout << stoll(S)-N<< endl;
    }
    return 0;
}