#include <iostream>
using namespace std;
class alpha
{
private:
    float x, y;

public:
    alpha(float z)
    {
        x = z;
        y = z;
    }
    alpha(float a, float b)
    {
        x = a;
        y = b;
    }
    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
    void operator+=(const alpha &argu)
    {
        x = x + (2 * argu.x);
        y = y + (2 * argu.y);
    }
    void operator*=(const alpha &other)
    {
        x = x * other.y + y * other.x;
        y = x * other.y - y * other.x;
    }
};
int main()
{ //float a,b;
    alpha o1(4);
    alpha o2(1.5, 2.5);
    alpha o3(1.5);
    cout << "the values of x and y for object 1 is:" << o1.getX() << ' ' << o1.getY() << endl;
    cout << "the values of x and y for object 2 is:" << o2.getX() << ' ' << o2.getY() << endl;
    cout << "the values of x and y for object 3 is:" << o3.getX() << ' ' << o3.getY() << endl;
    o1 += o2;
    o2 *= o3;
    cout << "after the operation the values are:" << endl;
    cout << "the values of x and y for object 1 is:" << o1.getX() << ' ' << o1.getY() << endl;
    cout << "the values of x and y for object 2 is:" << o2.getX() << ' ' << o2.getY() << endl;
    cout << "the values of x and y for object 3 is:" << o3.getX() << ' ' << o3.getY() << endl;
}