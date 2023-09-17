#include <iostream>
using namespace std;

// Function Overloading Example
int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

// Function Overriding Example
class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle" << endl;
    }
};

int main()
{
    // Function Overloading Example
    cout << add(1, 2) << endl;
    cout << add(1.5, 2.5) << endl;

    // Function Overriding Example
    Shape *shapePtr;
    Circle c;
    // shapePtr->draw();
    shapePtr = &c;
    shapePtr->draw();

    return 0;
}
