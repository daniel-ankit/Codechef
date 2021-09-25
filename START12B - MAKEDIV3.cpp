#include<iostream>
using namespace std;

int main()
{
    int Test;
    cin >> Test;
    while(Test--)
    {
        int N;
        cin >> N;
        if(N==1) cout <<"3";
        else
        {
            cout <<"1";
            for(int i=1; i< N-1; i++)
            cout <<"0";
            cout <<"5";
        }
        cout << endl;
    }
    return 0;
}