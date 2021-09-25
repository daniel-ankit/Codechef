#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int num;
        cin >> num;
        for (int i = 1; i <= num; i++)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
