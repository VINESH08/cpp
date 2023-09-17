#include <iostream>
using namespace std;
int *mergeArrays(int arr1[], int arr2[], int arr1Size, int arr2Size)
{
    int *arr3; // creating new array
               // Write your code here
    int arrsize = arr1Size + arr2Size;
    arr3 = new int[arrsize];
    int i = 0, j = 0, k = 0;
    while (i < arr1Size && j < arr2Size)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < arr1Size)
        arr3[k++] = arr1[i++];

    // Store remaining elements of second array
    while (j < arr2Size)
        arr3[k++] = arr2[j++];

    return arr3; // returning array
}
int main()
{
    int arr1[5] = {1, 3, 5, 7};
    int arr2[4] = {2, 4, 6, 8};

    int *arr4 = mergeArrays(arr1, arr2, 4, 4);

    for (int i = 0; i < 8; i++)
    {
        std::cout << arr4[i] << std::endl;
    }

    delete[] arr4;

    return 0;
}