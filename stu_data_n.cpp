#include <iostream>
#include <string>
using namespace std;
class student
{
protected:
    int reg_number;
    string name;
    string degree;

public:
    void getdata()
    {
        cout << "enter the register number:" << endl;
        cin >> reg_number;
        cout << "enter your name:" << endl;
        cin >> name;
        cout << "enter your degree:" << endl;
        cin >> degree;
    }
    void putdata()
    {
        cout << "register number:" << reg_number << endl;
        cout << "name:" << name << endl;
        cout << "degree:" << degree << endl;
    }
};
class exam : public student
{
protected:
    int marks[6];

public:
    void mark_data()
    {
        cout << "enter your 6 subjects mark" << endl;
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
    }
    void mark_show()
    {
        cout << "your 6 subjects mark are" << endl;
        for (int i = 0; i < 6; i++)
        {
            cout << marks[i] << endl;
        }
    }
};
class result : public exam
{
    int sum = 0;

public:
    void res()
    {
        for (int i = 0; i < 6; i++)
        {
            sum += marks[i];
        }
        // cout << "Result is:" << sum << endl;
    }
    void res_disp()
    {
        cout << "Result is:" << sum << endl;
    }
};
int main()
{
    int n;
    cout << "enter the total number of students" << endl;
    cin >> n;
    result resu[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i + 1 << " student data:" << endl;
        resu[i].getdata();
        resu[i].mark_data();
        resu[i].res();
    }
    cout << "the student details are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "information" << endl;
        resu[i].putdata();
        cout << "marks" << endl;
        resu[i].mark_show();
        cout << "result" << endl;
        resu[i].res_disp();
    }
}