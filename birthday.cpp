#include <stdio.h>

int main(void)
{
    // your code goes here
    int t, n, d;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int arr[n];
        int ar[100] = {0};
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            int k = arr[i];
            ar[k - 1]++;
        }
        //above this ok..
        static int count = 0;
        for (int i = 0; i < 100; i++)
        {
            if (ar[i] > 1)
            {
                count = count + ar[i] - 1;
            }
        }
        printf("%d\n", n - count);
    }
    return 0;
}
