#include <stdio.h>

int main(void)
{
    // your code goes here
    int t, r;
    // int k = 0;
    scanf("%d", &t);
    while (t--)
    {
        int n, temp;
        scanf("%d", &n);
        temp = n;
        int k = 0;
        while (n != 0)
        {
            r = n % 10;
            k = k * 10 + r;
            n = n / 10;
        }
        // printf("%d\n", temp);
        // printf("%d", k);
        if (k == temp)
        {
            printf("wins\n");
        }
        else
        {
            printf("loses\n");
        }
    }
    return 0;
}
