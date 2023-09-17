#include <iostream>
using namespace std;
void exchange(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void selection_sort(int arr[], int last)
{
    int current = 0;
    while (current < last - 1)
    {

        int walker = current + 1;
        int small = current;
        while (walker <= last)
        {
            if (arr[walker] < arr[small])
            {
                small = walker;
            }
            walker++;
        }
        exchange(arr[current], arr[small]);
        current++;
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
    selection_sort(arr, n);
    cout << "array after sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}