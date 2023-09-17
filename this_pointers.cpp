#include <iostream>
using namespace std;
class test1
{
private:
    int a, b;

public:
    void show(int a, int b)
    {
        a = a;
        b = b;
    }
    void display()
    {
        cout << a << endl; /*prints garbage value for both a and b since the complier
        understands that the a on lhs is local variable and gives more preference to local 
        variable than the data member so it is being intialized to itself which is not possible
        so it gives garbage value....*/
        cout << b << endl;
    }
};
int main()
{
    test1 test;
    test.show(10, 40);
    test.display();
}
/* To fix this garbage value issue we can go with the this pointer as follows:
    void show(int a,int b){
        this->a=a;
        this->b=b;
    }
    here this indicates that the variable a belongs to the class member and assigns
    the value to it likewise also for b..*/