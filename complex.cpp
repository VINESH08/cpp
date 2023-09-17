#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    void getdata()
    {
        cout << "enter the real part of complex number: " << endl;
        cin >> real;
        cout << "enter the imaginary part of complex number: " << endl;
        cin >> img;
    }
    void printdata()
    {
        if (img >= 0)
            cout << "the entered complex number is: " << real << "+" << img << "i" << endl;
        else
        {
            cout << "the entered complex number is: " << real << "" << img << "i" << endl;
        }
    }
    void adddata()
    {
        if (img >= 0)
            cout << "the added complex number is: " << real << "+" << img << "i" << endl;
        else
        {
            cout << "the added complex number is: " << real << "" << img << "i" << endl;
        }
    }
    complex addcm(complex obj)
    {
        complex o4;
        o4.real = real + obj.real;
        o4.img = img + obj.img;
        return o4;
    }
};
int main()
{
    complex o1, o2, o3;
    o1.getdata();
    o2.getdata();
    o1.printdata();
    o2.printdata();
    o3 = o1.addcm(o2);
    o3.adddata();
}