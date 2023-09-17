#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, w;
        scanf("%d%d", &n, &w);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int j = 0; j < n - 1; j++)
        {
            for (int i = 0; i < n - j - 1; i++)
            {
                int temp;
                if (arr[i] > arr[i + 1])
                {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
        }

        int count = 0, sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            sum += arr[i];
            count++;
            if (sum >= w)
            {
                break;
            }
        }
        printf("%d\n", n - count);
    }
    return 0;
}
