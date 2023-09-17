#include <iostream>
#include <string>
using namespace std;
struct student
{
    string name;
    int id;
    string dept;
    float cgpa;
};
void bub_sort(struct student s[], int num)
{

    int current = 0;
    while (current < num)
    {
        int walker = num - 1;
        while (walker > current)
        {
            if (s[walker].cgpa < s[walker - 1].cgpa)
            {
                struct student a = s[walker];
                s[walker] = s[walker - 1];
                s[walker - 1] = a;
            }
            walker--;
        }
        current++;
    }
}

int main()
{
    int n;
    cout << "enter the total number of students" << endl;
    cin >> n;
    student s1[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the " << i + 1 << " student name" << endl;
        cin >> s1[i].name;
        cout << "enter the id " << i + 1 << " student" << endl;
        cin >> s1[i].id;
        cout << "enter the dept " << i + 1 << " student" << endl;
        cin >> s1[i].dept;
        cout << "enter the cgpa of " << i + 1 << " student" << endl;
        cin >> s1[i].cgpa;
    }
    bub_sort(s1, n);
    cout << "the details of the student in sorted manner are as follows" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "name:" << s1[i].name << endl;
        cout << "id:" << s1[i].id << endl;
        cout << "dept:" << s1[i].dept << endl;
        cout << "cgpa:" << s1[i].cgpa << endl;
    }
}