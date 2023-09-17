#include <iostream>
using namespace std;
class objpara
{
private:
    int a;

public:
    void getin()
    {
        cout << "enter the value " << endl;
        cin >> a;
    }
    void putin()
    {
        cout << "entered value is " << a << endl;
    }
    void big(objpara v2, objpara v3)
    {
        if ((a > v2.a) && (a > v3.a))
            cout << a << " is greater number " << endl;
        else if ((v2.a > a) && (v2.a > v3.a))
            cout << v2.a << " is greater number " << endl;
        else if ((v3.a > a) && (v3.a > v2.a))
            cout << v3.a << " is greater number " << endl;
        else
            cout << "all are equal ";
    }
};
int main()
{
    objpara v1, v2, v3;
    v1.getin();
    v2.getin();
    v3.getin();
    v1.putin();
    v2.putin();
    v3.putin();
    v1.big(v2, v3);
}