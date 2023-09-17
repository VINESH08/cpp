//calculating 1!+2!+3!...n! using resursion
#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
        return n * fact(n - 1);
}
int sum_fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return fact(n) + sum_fact(n - 1);
    }
}
int main()
{
    int num, sum = 0;
    cout << "enter num" << endl;
    cin >> num;
    int k = sum_fact(num);
    cout << "sum is" << k;
}