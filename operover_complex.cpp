#include <iostream>
using namespace std;
class complex
{
private:
    int real, imaginary;

public:
    void getcomplx()
    {
        cout << "enter the real part of complex number:" << endl;
        cin >> real;
        cout << "enter the imaginary part of complex number:" << endl;
        cin >> imaginary;
    }
    void dispcomplex()
    {
        cout << "entered complex number is:" << real << "+" << imaginary << "i" << endl;
    }
    void addres()
    {
        cout << "added complex number is:" << real << "+" << imaginary << "i" << endl;
    }
    complex operator+(const complex &argu)
    {
        complex c4;
        c4.real = real + argu.real;
        c4.imaginary = imaginary + argu.imaginary;
        return c4;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.getcomplx();
    c1.dispcomplex();
    c2.getcomplx();
    c2.dispcomplex();
    c3 = c1 + c2;
    c3.addres();
}