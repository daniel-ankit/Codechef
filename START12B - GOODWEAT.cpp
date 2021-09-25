#include<iostream>
using namespace std;

int main()
{
    int Test;
    cin >> Test;
    while(Test--)
    {
        int A[7];
        short int n1=0, n2=0;
        for(int i=0; i<7; i++)
        {
            cin >> A[i];
            if(A[i]==1)
            n1++;
            else n2++;
        }
        if(n1>n2) cout << "YES" << endl;
        else cout <<"NO" << endl;
    }
    return 0;
}   