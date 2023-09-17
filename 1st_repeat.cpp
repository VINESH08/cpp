#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int count = 0;
    int ar[256] = {0};
    for (int i = 0; i < n; i++)
    {
        k = arr[i];
        //  cout << k << endl;
        ar[k + 48]++;
    }
    for (int i = 48; i <= 57; i++)
    {
        //cout << ar[i] << endl;
        if (ar[i] > 1)
        {
            cout << "repeated vlalue:" << i - 48 << endl;
        }
    }
    return 0;
}
