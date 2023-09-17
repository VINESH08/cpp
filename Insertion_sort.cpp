//used efficiently o(n^2) only for small array size not efficient for larger size of array
#include <iostream>
using namespace std;
void insertion_sort(int arr[], int len);
void insertion_sort(int arr[], int len)
{
    int current = 1;
    while (current < len)
    {
        int key = arr[current];
        int walker = current - 1;
        while (walker >= 0 && arr[walker] > key)
        {
            arr[walker + 1] = arr[walker];
            walker--;
        }
        arr[walker + 1] = key;
        current++;
    }
}
int main()
{
    int n;
    cout << "enter the number of array elements" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
/*           key=8
        suppose arr= 1 2 3 4 8 9 10 
                             
*/
