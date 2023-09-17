#include <stdio.h>
int main()
{
    int arr[5];
    int *p = arr;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (i + p)); //i[p]=== (i+p) or(arr+i) or arr[i]
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", p[i]);
    }
}