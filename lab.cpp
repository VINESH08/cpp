//without private only with public
#include <iostream>
#include <string>
using namespace std;
class student
{

public:
    string name;
    int regno;
    string dept;

    void getdata1()
    {
        cout << "enter student name:" << endl;
        cin >> name;
        cout << "enter student regno:" << endl;
        cin >> regno;
        cout << "enter student department:" << endl;
        cin >> dept;
    }
};
class staff
{

public:
    string name;
    int id;
    string dept;
    void getdata2()
    {
        cout << "enter staff name:" << endl;
        cin >> name;
        cout << "enter staff id:" << endl;
        cin >> id;
        cout << "enter staff department:" << endl;
        cin >> dept;
    }
};
class sastra
{
public:
    void display(student s1, staff t1)
    {
        cout << "name of student:" << s1.name << endl;
        cout << "regno of student:" << s1.regno << endl;
        cout << "dept of student" << s1.dept << endl;
        cout << "name of  staff:" << t1.name << endl;
        cout << "id of staff:" << t1.id << endl;
        cout << "dept of staff:" << t1.dept << endl;
    }
};
int main()
{
    student s1;
    staff t1;
    s1.getdata1();
    t1.getdata2();
    sastra sa;
    sa.display(s1, t1);
}
