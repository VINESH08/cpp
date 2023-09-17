#include <iostream>
using namespace std;
int main()
{
    int t, x, y;
    cin >> t;
    for (int i = t; i >= 1; i--)
    {
        cin >> x >> y;
        if (x - y == 0)
        {
            cout << (y / x) - 1 << endl;
        }
        else
        {
            cout << y / x << endl;
        }
    }
    return 0;
}