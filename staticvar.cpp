#include <iostream>
using namespace std;
class test
{

public:
    static int a;
    void get()
    {
        cout << "a: " << a << endl;
    }
};
int test::a = 10;
int main()
{
    test t1;
    t1.get();
    test::a = 150;
    cout << "a=" << test::a << endl;
    // test t1;
    //t1.get();
}