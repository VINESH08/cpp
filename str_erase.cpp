#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s("ks is awesome!!$vs");
    s.erase(s.size() - 2, 1);
    cout << s;
}