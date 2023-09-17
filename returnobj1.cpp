#include <iostream>
using namespace std;
class test
{
private:
    int a;

public:
    void getdata()
    {
        cout << "enter the value: ";
        cin >> a;
    }
    void putdata()
    {
        cout << "the entered value is:" << a << endl;
    }
    void put3()
    {
        cout << "added value is: " << a << endl;
    }
    void comp(test t2)
    {
        if (a > t2.a)
            cout << a << "is bigger" << endl;
        else
            cout << t2.a << "is bigger" << endl;
    }
    test add(test t2)
    {
        test t3;
        t3.a = a + t2.a;
        return t3;
    }
};
int main()
{
    test t1, t2, t4;
    t1.getdata();
    t1.putdata();
    t2.getdata();
    t2.putdata();
    t1.comp(t2);
    t4 = t1.add(t2);
    t4.put3();
}