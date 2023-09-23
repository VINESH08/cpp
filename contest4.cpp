#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << (n * n) / 2 << endl;
    else
        cout << ((n * n) / 2) + 1 << endl;
    // int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                    cout << 'c' << ' ';
                else
                    cout << '.' << ' ';
            }
            else
            {
                if (j % 2 == 0)
                    cout << '.' << ' ';
                else
                    cout << 'c' << ' ';
            }
        }
        cout << endl;
    }
}