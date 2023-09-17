#include <iostream>
#include <string>
using namespace std;
class stu
{
private:
    int id;
    string name;

public:
    void getdata()
    {
        cout << "enter the id" << endl;
        cin >> id;
        cout << "enter name: " << endl;
        cin >> name;
    }
    void putdata()
    {
        cout << "id:"
             << "\t" << id << "\t"
             << "name:"
             << "\t" << name << endl;
    }
};
int main()
{
    stu data[60];
    int n;
    cout << "enter the number of student: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        data[i].getdata();
    }
    for (int i = 0; i < n; i++)
    {
        data[i].putdata();
    }
}
