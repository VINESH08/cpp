#include <iostream>
using namespace std;
class ph
{
public:
    ph()
    {
        cout << "in constructor" << endl;
    }
    ~ph()
    {
        cout << "in destructor" << endl;
    }
};
int main()
{
    int x = 0;
    if (x == 0)
    {
        ph p;
    }
    cout << "this is an end" << endl;
}