#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int Array[N][N];
        if(N>2)
        {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                Array[i][j] = 1;
        }
        for (int i = 0, j = 0; i < N, j < N; i++, j++)
            Array[i][j] = -1;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                cout << Array[i][j] << " ";
            cout << endl;
        }
        }
        else cout << "-1 -1" <<endl << "-1 -1" <<endl;
    }
    return 0;
}