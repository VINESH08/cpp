#include <iostream>
using namespace std;
int main()
{
    long int n;
    int ar[10] = {0};
    cin >> n;
    long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long int k;
    for (int i = 0; i < n; i++)
    {
        k = arr[i];
        ar[k]++;
    }
    int max = ar[0];
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (ar[i + 1] > max)
        {
            max = ar[i + 1];
        }
        else if (ar[i + 1] == max)
        {
            count = count + 2;
        }
    }
}