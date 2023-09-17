#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *ptr;
    float *ptr1;
    printf("enter the number of values:");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("the entered elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", *(ptr + i));
    }
    free(ptr);
    printf("enter the number of values:");
    scanf("%d", &n);
    ptr1 = (float *)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++)
    {
        scanf("%f", (ptr1 + i));
    }
    printf("the entered elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%f", *(ptr1 + i));
    }
    free(ptr1);
}
