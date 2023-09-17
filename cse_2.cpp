#include <iostream>
using namespace std;
//pass by value
void increment(int *ptr)
{
    (*ptr)++;
}
void passbyref(int *&ptr1)
{
    int *newptr = new int(10);
    delete ptr1;
    ptr1 = newptr;
}
int main()
{
    int num;
    cin >> num;
    // for pass by value
    increment(&num);
    cout << "pass by value is:" << num << endl;
    //for pass by reference
    int *ptr = new int(8);
    passbyref(ptr);
    cout << "pass by reference is:" << *ptr << endl;
    delete ptr;
}