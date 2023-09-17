#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    string name;
    string dept;
    int regno;
    int s;

public:
    void getdata()
    {
        cout << "enter your name:";
        cin >> name;
        // getline(cin, name);
        cout << "enter your dept:";
        //getline(cin, dept);
        cin >> dept;
        cout << "enter your regno:";
        cin >> regno;
        cout << "enter the number of subjects";
        cin >> s;
    }
    void display_data()
    {
        cout << "your name:" << name << endl;
        cout << "your department:" << dept << endl;
        cout << "your regno:" << regno << endl;
        cout << "total number of subjects:" << s << endl;
    }
    int *arr = new int[s];
    void mark_data()
    {
        //int *arr = new int[s];
        for (int i = 0; i < s; i++)
        {
            cout << "enter the marks of " << i + 1 << " subject:";
            cin >> arr[i];
        }
    }
    int sum = 0;
    void mark_sum()
    {
        //int sum = 0;
        for (int i = 0; i < s; i++)
        {
            sum += arr[i];
        }
        cout << "sum is :" << sum;
        delete[] arr;
    }
};
int main()
{
    int n;
    cout << "enter the number of students:";
    cin >> n;
    student stuarr[n];
    for (int i = 0; i < n; i++)
    {
        stuarr[i].getdata();
        stuarr[i].display_data();
        stuarr[i].mark_data();
        stuarr[i].mark_sum();
    }
}