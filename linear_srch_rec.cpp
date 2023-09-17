#include <iostream>
using namespace std;
bool lin_rec(int arr[], int index, int target, int &locn, int size)
{
    if (index <= size - 2 && target != arr[index])
        return lin_rec(arr, index + 1, target, locn, size);
    if (target == arr[index])
    {
        locn = index;
        return true;
    }
    return false;
}
int main()
{
    int size, locn = 0, target;
    int index = 0;
    cout << "enter the size of the array" << endl;
    cin >> size;
    int arr[size];
    cout << "enter the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the element you are looking for:" << endl;
    cin >> target;
    bool res = lin_rec(arr, index, target, locn, size);
    if (res == true)
    {
        cout << "the element is found at location: " << locn + 1 << endl;
    }
    else if (res == false)
    {
        cout << "the element is not found!" << endl;
    }
}