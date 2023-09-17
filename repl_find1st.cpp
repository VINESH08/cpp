#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "hello, world";
    str.replace(7, 5, "there"); /*the 1st parameter represents the starting index and the
    2nd parameter represents the len to be replaced including the starting index
    unlike the earse function where it earses from the next character..*/
    cout << str << endl;
    return 0;
}
