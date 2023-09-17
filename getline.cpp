#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name1, name2;
    cout << "enter name of two persons" << endl;
    // cin.ignore();
    getline(cin, name1);
    //f cin.ignore();
    getline(cin, name2);
    cout << "Name1: " << name1 << endl;
    cout << "Name2: " << name2 << endl;
    return 0;
}