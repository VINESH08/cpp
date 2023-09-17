#include <iostream>
using namespace std;
class sample
{
private:
    int a;

public:
    void getin()
    {
        cout << "enter the value: " << endl;
        cin >> a;
    }
    void put()
    {
        cout << "entered value is:" << a << endl;
    }
    void big(sample v2)
    {
        if (a > v2.a)
            cout << a << " is greater than " << v2.a << endl;
        else if (v2.a > a)
            cout << v2.a << " is greater than " << a << endl;
        else
        {
            cout << "both are equal";
        }
    }
};
int main()
{
    sample v1, v2;
    v1.getin();
    v2.getin();
    v1.put();
    v2.put();
    v1.big(v2);
}