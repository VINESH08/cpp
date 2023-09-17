#include <stdio.h>
struct abc
{
    int x;
    int y;
};
int main()
{
    struct abc a; // or struct abc a={9,10} also is fine
    a.x = 9;
    a.y = 10;
    printf("%d\n%d", a.x, a.y);
}