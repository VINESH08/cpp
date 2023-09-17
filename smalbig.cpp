#include <iostream>
using namespace std;
void maxMin(int arr[], int size)
{
    // Write your code here
    int ind1 = 0, ind2 = 1, k = size - 1;
    int m = size / 2;
    int *newarr = new int[size];
    for (int i = k; i >= m; i--)
    {
        newarr[ind1] = arr[i];
        ind1 = ind1 + 2;
    }
    for (int i = 0; i < (size / 2); i++)
    {
        newarr[ind2] = arr[i];
        ind2 = ind2 + 2;
    }
    for (int i = 0; i < size; i++)
        arr[i] = newarr[i];
    delete[] newarr;
}
int main()
{
    int size = 6;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    cout << "Array before min/max: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    maxMin(arr, size);

    cout << "Array after min/max: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}