#include <stdio.h>
#include <string.h>
int main(void)
{
    // your code goes here
    int t, n, k;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        char s[n];
        char a[n], b[n];
        scanf("%s", s);
        for (int i = 0; i < n / 2; i++)
        {
            a[i] = s[i];
        }
        for (int i = 0; i < n / 2; i++)
        {
            b[i] = s[(n / 2) + i];
        }
        b[n / 2] = '\0';
        for (int i = 0; i < n / 2; i++)
        {
            b[(n / 2) + i] = a[i];
        }
        b[n] = '\0';
        printf("%s\n", b);
        printf("%s\n", s);
        k = strcmp(b, s);

        if (k == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
