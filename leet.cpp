#include <iostream>

int lastStoneWeight(int *stones, int stonesSize);

int lastStoneWeight(int *stones, int stonesSize)
{
    int i, n = stonesSize, k1 = 0, k2 = 1;
    int max1 = stones[0];
    int max2 = stones[1];
    while (n != 1)
    {
        for (i = 1; i < n; i++)
        {
            if (stones[i] > max1)
            {
                max2 = max1;
                k2 = k1;
                max1 = stones[i];
                k1 = i;
            }
            else if (stones[i] > max2)
            {
                max2 = stones[i];
                k2 = i;
            }
        }
        if (max1 == max2)
        {
            int j;
            for (j = k1; j < n - 1; j++)
            {
                stones[j] = stones[j + 1];
            }
            for (j = k2; j < n - 1; j++)
            {
                stones[j] = stones[j + 1];
            }
            n = n - 2;
        }
        else if (max1 != max2)
        {
            int l;
            for (l = k2; l < n - 1; l++)
            {
                stones[l] = stones[l + 1];
            }
            if (k1 > k2)
            {
                k1--;
                stones[k1] = max1 - max2;
                n--;
            }
            else
                stones[k1] = max1 - max2;
            n--;
        }
    }
    if (n == 1)
    {
        return stones[0];
    }
    else
        return 0;
}

int main()
{
    int stones[] = {2, 7, 4, 1, 8, 1};
    int stonesSize = sizeof(stones) / sizeof(stones[0]);

    int lastWeight = lastStoneWeight(stones, stonesSize);

    std::cout << "The weight of the last remaining stone is: " << lastWeight << std::endl;

    return 0;
}
