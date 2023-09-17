#include <stdio.h>
#include <string.h>
int main()
{
    int numcount[256] = {0}; //intialize all index values to zero//thats the meaning
    char name[1000];
    gets(name);
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        int k;
        k = (int)name[i];
        if (k >= 48 && k <= 57)
        {
            numcount[k]++;
        }
    }
    for (int i = 48; i <= 57; i++)
    {
        printf(" %d ", numcount[i]);
    }
    return 0;
}