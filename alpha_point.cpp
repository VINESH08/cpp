#include <iostream>
using namespace std;
int main()
{
    char *ptr = new char[100];
    cout << "enter the string:" << endl;
    cin >> ptr;
    int count = 0;
    for (int i = 0; ptr[i] != '\0'; i++)
    {
        if (ptr[i] == 'a' || ptr[i] == 'e' || ptr[i] == 'i' || ptr[i] == 'o' || ptr[i] == 'u')
        {
            count++;
        }
    }
    cout << "count:" << count << endl;
    delete[] ptr;
}