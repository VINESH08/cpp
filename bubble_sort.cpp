#include <iostream>
using namespace std;
void bubblesort(int arrnumb[], int n);
void swapfun(int *p1, int *p2);
void swapfun(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void bubblesort(int arrnumb[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arrnumb[j] > arrnumb[j + 1])
            {
                swapfun(&arrnumb[j], &arrnumb[j + 1]);
            }
        }
    }
}
int main()
{
    int n;
    cout << "enter the size of the array:" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements of the array one by one:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "array before sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
    bubblesort(arr, n);
    cout << "array after sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}