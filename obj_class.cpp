#include <iostream>
using namespace std;
//class definetion
class person
{
public:
    string name;
    int age;
    void display()
    {
        cout << " name is " << name << endl;
        cout << " age is " << age << endl;
    }
};
int main()
{
    person vinesh; //defining object under class person
    vinesh.name = "Vinesh";
    vinesh.age = 18;
    vinesh.display();
    return 0;
}