#include <iostream>
using namespace std;
int main()
{
    float *ptr;
    float b;
    cin >> b;
    ptr = &b;
    ++ptr;
    cout << "preincrement:" << *ptr << endl;
    ptr++;
    cout << "postincrement:" << *ptr << endl;
    --ptr;
    cout << "predecrement:" << *ptr << endl;
    ptr--;
    cout << "postdecrement:" << *ptr << endl;
}