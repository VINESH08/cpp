#include <iostream>
using namespace std;
class simple
{
private:
    int a;
    friend void friendfun(simple argu);

public:
    simple(int a)
    {
        this->a = a;
    }
};
void friendfun(simple argu)
{
    cout << "the value of the variable is: " << argu.a << endl;
}
int main()
{
    simple obj(5);
    friendfun(obj);
    return 0;
}
/* getting input from user...
#include <iostream>
using namespace std;
class simple
{
private:
    int a;
    friend void friendfun(simple argu);

public:
    void getfun(){
        cout<<"enter the value of a: ";
        cin>>a;
    }
};
void friendfun(simple argu)
{
    cout << "the value of the variable is: " << argu.a << endl;
}
int main()
{
    simple obj;
    obj.getfun();
    friendfun(obj);
    return 0;
}*/
