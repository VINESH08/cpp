#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    int reg_no;
    string name;

public:
    void setdata(int data1, string data2)
    {
        reg_no = data1;
        name = data2;
    }
    virtual void getdata()
    {
    }
    void showdata()
    {
        cout << "reg_no:" << reg_no << endl;
        cout << "name:" << name << endl;
    }
};
class marks : public student
{
private:
    int marr[5];

public:
    void getdata()
    {
        int k;
        string n;
        cout << "enter your reg_no:" << endl;
        cin >> k;
        cout << "enter your name:" << endl;
        cin >> n;
        setdata(k, n);
        cout << "enter your 5 subject marks" << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> marr[i];
        }
    }
    void display_mar()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << marr[i] << endl;
        }
    }
    void compute()
    {
        int sum = 0;
        float avg = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += marr[i];
        }
        avg = sum / 5;
        cout << "Sum is:" << sum << endl;
        cout << "avg is:" << avg << endl;
    }
};
int main()
{
    student s1;
    marks s2;
    s2.getdata();
    s2.showdata();
    s2.display_mar();
    s2.compute();
    return 0;
}