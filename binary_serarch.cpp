#include <iostream>
using namespace std;
bool binar_srch(int arr[], int size, int target, int &locn)
{
    int begin = 0;
    int last = size - 1;
    int mid;
    while (begin <= last)
    {
        mid = (begin + last) / 2;
        if (arr[mid] == target)
        {
            locn = mid;
            return true;
        }
        if (arr[mid] > target)
        {
            last = mid - 1;
        }
        else if (arr[mid] < target)
        {
            begin = mid + 1;
        }
    }
    return false;
}
int main()
{
    int size, locn = 0, target;
    cout << "enter the size of the array" << endl;
    cin >> size;
    int arr[size];
    cout << "enter the sorted array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the element you are looking for:" << endl;
    cin >> target;
    bool result = binar_srch(arr, size, target, locn);
    if (result == true)
    {
        cout << "the element is found at location: " << locn + 1 << endl;
    }
    else
    {
        cout << "the element is not found!" << endl;
    }
}