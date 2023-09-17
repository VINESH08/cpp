#include <iostream>
using namespace std;
class second; // forward declaration of class
class first
{
private:
    int a;

public:
    first(int m)
    {
        a = m;
    }
    int printdata()
    {
        return a;
    }
    friend void swap(first &x, second &y);
};
class second
{
private:
    int b;

public:
    second(int n)
    {
        b = n;
    }
    int printdata()
    {
        return b;
    }
    friend void swap(first &x, second &y);
};
void swap(first &x, second &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}
int main()
{
    first ob1(4);
    second ob2(5);
    cout << "intial values of a is : " << ob1.printdata() << endl;
    cout << "intial values of b is:" << ob2.printdata() << endl;
    swap(ob1, ob2);
    cout << "final values of a is : " << ob1.printdata() << endl;
    cout << "final values of b is:" << ob2.printdata() << endl;
}
/*
#include <iostream>
using namespace std;
class second; // forward declaration of class
class first
{
private:
    int a;

public:
    first(int m)
    {
        a = m;
    }
    int printdata()
    {
        return a;
    }
    friend void swap(first &x, second &y);
};
class second
{
private:
    int b;

public:
    second(int n)
    {
        b = n;
    }
    int printdata()
    {
        return b;
    }
    friend void swap(first &x, second &y);
};
void swap(first &x, second &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}
int main()
{
    int p,q;
    cout<<"enter the 1st value: "<<endl;
    cin>>p;
    cout<<"enter the 2nd value: "<<endl;
    cin>>q;
    first ob1(p);
    second ob2(q);
    cout << "intial values of a is : " << ob1.printdata() << endl;
    cout << "intial values of b is:" << ob2.printdata() << endl;
    swap(ob1, ob2);
    cout << "final values of a is : " << ob1.printdata() << endl;
    cout << "final values of b is:" << ob2.printdata() << endl;
}*/
