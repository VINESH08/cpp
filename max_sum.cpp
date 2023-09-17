#include <iostream>
using namespace std;
int main()
{
    int n, t, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        t = arr[i];
        int sum = 0;
        while (t > 0)
        {
            k = t % 10;
            sum += k;
            t = t / 10;
        }
        ar[i] = sum;
    }
    int max = ar[0];
    for (int i = 1; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    cout << "the maximum value is:" << max << endl;
}
