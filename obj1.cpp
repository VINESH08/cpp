#include <iostream>

class Rectangle
{
private:
    int width;
    int height;

public:
    void put(int w, int h)
    {
        width = w;
        height = h;
    }

    void area()
    {
        std::cout << "Area of rectangle: " << width * height << std::endl;
    }
};

int main()
{
    Rectangle rect;
    rect.put(5, 4);
    rect.area();
    return 0;
}
