#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name1;
    cout << "enter string" << endl;
    // cin.ignore();
    getline(cin, name1);
    //f cin.ignore();
    // getline(cin, name2);
    int words = 0;
    for (int i = 0; name1[i] != '\0'; i++)
    {
        if (name1[i] == ' ')
        {
            words++;
        }
    }
    cout << "number of words:" << words + 1 << endl;
    return 0;
}