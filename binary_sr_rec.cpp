//Time complexity of binary search is O(log n)
#include <iostream>
using namespace std;
bool bin_recur(int arr[], int begin, int last, int target, int &locn)
{

    if (begin <= last)
    {
        int mid = (begin + last) / 2;
        if (target == arr[mid])
        {
            locn = mid;
            return true;
        }
        if (arr[mid] > target)
        {
            return bin_recur(arr, begin, mid - 1, target, locn); //T(n/2);T(n/4)....
        }
        return bin_recur(arr, mid + 1, last, target, locn); //T(n/2)
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
    int begin = 0;
    int last = size - 1;
    cout << "enter the element you are looking for:" << endl;
    cin >> target;
    bool res = bin_recur(arr, begin, last, target, locn);
    if (res == true)
    {
        cout << "the element is found at location: " << locn + 1 << endl;
    }
    else if (res == false)
    {
        cout << "the element is not found!" << endl;
    }
}