#include <iostream>
using namespace std;
class addsum
{
public:
    static int add(int a, int b)
    {
        return a + b;
    }
};
int main()
{
    int n1 = 2, n2 = 3;
    int result;
    result = addsum::add(n1, n2);
    cout << "sum=" << result << endl;
}
