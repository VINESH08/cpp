#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class stu
{
private:
    int id, s[60];
    string name;

public:
    void getdata(int n)
    {
        cout << "enter the id" << endl;
        cin >> id;
        cout << "enter name: " << endl;
        cin.ignore();
        getline(cin, name);
        cout << "enter the " << n << " subject marks of the student: " << endl;
        for (int i = 0; i < n; i++) 
        {
            cin >> s[i];
        }
    }
    void printdata(int n)
    {
        cout << "id:" << setw(10) << id << right << setw(10) << "name:" << setw(20)<< name;
        for (int i = 0; i < n; i++)
        {
            cout << setw(5) << s[i];
        }
        cout << "\n";
    }
};
int main()
{
    stu data[60];
    int t, n;
    cout << "enter the number of student: ";
    cin >> t;
    cout << "enter the number of subjects: ";
    cin >> n;
    for (int i = 0; i < t; i++)
    {
        data[i].getdata(n);
    }
    for (int i = 0; i < t; i++)
    {
        data[i].printdata(n);
    }
}
