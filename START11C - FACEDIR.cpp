#include <iostream>
using namespace std;

int main()
{
    int tes;
    cin >> tes;
    while (tes--)
    {
        int N = 0;
        cin >> N;
        if (N % 4 == 0)
            cout << "North" << endl;
        else if (N % 4 == 3)
            cout << "East" << endl;
        else if (N % 4 == 2)
            cout << "South" << endl;
        else
            cout << "West" << endl;
    }
    return 0;
}