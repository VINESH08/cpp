//cia 2 question paper 15m qs
#include <iostream>
using namespace std;
class job
{
private:
    int hour;

public:
    job(int x = 0) : hour(x) {}
    void getdt()
    {
        cout << "enter the hour for person 2:";
        cin >> hour;
    }
    bool operator>(const job &arg)
    {
        return hour > arg.hour;
    }
    int diff(job e)
    {
        return hour - e.hour;
    }
};
int main()
{
    int k;
    cout << "enter the hour for person 1:";
    cin >> k;
    job e1(k), e2;
    e2.getdt();
    if (e1 > e2)
    {
        cout << "person 2 completed the job 1st" << endl;
        cout << "hour difference is:" << e1.diff(e2) << endl;
    }
    else
    {
        cout << "person 1 completed the job 1st" << endl;
        cout << "hour difference is :" << e2.diff(e1) << endl;
    }
    return 0;
}