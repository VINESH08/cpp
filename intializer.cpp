#include <iostream>
using namespace std;

class MyClass
{
private:
    const int x;
    const int y;

public:
    // Constructor with initialization list
    MyClass(int a, int b) : x(a), y(b)
    {
        // Constructor body
        // Additional initialization or code
    }

    // Other member functions
    void display()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main()
{
    MyClass obj(10, 20);
    obj.display();

    return 0;
}
