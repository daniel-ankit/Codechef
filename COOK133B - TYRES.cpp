#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        if (N%4 == 0)
            cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
