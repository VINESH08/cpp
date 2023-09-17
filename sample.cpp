#include <iostream>
using namespace std;

// Class definition
class Shape
{
public:
    virtual float getArea() = 0;
    virtual float getPerimeter() = 0;
};

// Derived classes
class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    float getArea()
    {
        return 3.14 * radius * radius;
    }

    float getPerimeter()
    {
        return 2 * 3.14 * radius;
    }
};

class Rectangle : public Shape
{
private:
    float length;
    float width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    float getArea()
    {
        return length * width;
    }

    float getPerimeter()
    {
        return 2 * (length + width);
    }
};

// Main function
int main()
{
    // Create objects of the Circle and Rectangle classes
    Circle c(5);
    Rectangle r(3, 4);

    // Call the objects' methods to calculate their properties
    cout << "Circle: Area = " << c.getArea() << ", Perimeter = " << c.getPerimeter() << endl;
    cout << "Rectangle: Area = " << r.getArea() << ", Perimeter = " << r.getPerimeter() << endl;

    return 0;
}
