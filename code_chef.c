#include <stdio.h>

int main(void)
{
    int t, n, k;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &k);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int max = 0;
        for (int i = 0; i < k; i++)
        {
            max += arr[i];
        }
        int sum = max;
        for (int i = 1; i <= n - k; i++)
        {
            sum = sum - arr[i - 1] + arr[i + k - 1];
            if (sum > max)
            {
                max = sum;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
//ids........i need to think a lot, i need to be improved i am still in beginer lvl
