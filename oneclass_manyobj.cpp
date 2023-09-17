#include <iostream>
using namespace std;

class Car
{
public:
    string make;
    string model;
    int year;
    string color;

public:
    Car(string m, string mo, int y)
    {
        make = m;
        model = mo;
        year = y;
    }

    void displayInfo()
    {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << " color " << color << endl;
    }
};

int main()
{
    // Create two objects of the Car class
    Car car1("Honda", "Civic", 2015);
    car1.color = "blue";
    Car car2("Toyota", "Corolla", 2016);
    car2.color = "red";

    // Call the displayInfo() method on each object
    car1.displayInfo();
    car2.displayInfo();

    return 0;
}
