#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char txt[1000];
    for (int i = 0; i < n; i++)
    {
        int inarr[26];
        int countarr[256] = {0};
        for (int j = 0; j < 26; j++)
        {
            scanf("%d", &inarr[j]);
        }
        getchar();
        fgets(txt, 1000, stdin);
        for (int i = 0; txt[i] != '\0'; i++)
        {
            countarr[(int)txt[i]]++;
        }
        int price = 0;
        for (int i = 97; i <= 122; i++)
        {
            if (countarr[i] == 0)
            {
                price = price + (i - 96);
            }
        }
        printf("%d\n", price);
    }
    return 0;
}
