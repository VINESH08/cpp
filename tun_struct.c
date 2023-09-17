#include <stdio.h>
struct tunnel
{
    int length;
    int width;
    int height;
};
void volume(struct tunnel my_tunn[], int n)
{
    int vol;
    for (int i = 0; i < n; i++)
    {
        if (my_tunn[i].height < 41)
        {
            vol = my_tunn[i].length * my_tunn[i].height * my_tunn[i].width;
            printf("%d\n", vol);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    struct tunnel my_tunnel[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &my_tunnel[i].length, &my_tunnel[i].width, &my_tunnel[i].height);
    }

    volume(my_tunnel, n);
}