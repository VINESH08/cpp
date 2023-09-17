#include <iostream>
using namespace std;
class distace
{
private:
    int feet;
    float inches;

public:
    void setdist(int ft, float in)
    {
        feet = ft;
        inches = in;
    }
    void getdist()
    {
        cout << "\n enter feet";
        cin >> feet;
        cout << "\n enter inches";
        cin >> inches;
    }
    void showdist()
    {
        cout << feet << " - " << inches << endl;
    }
};
int main()
{
    distace d1, d2;
    d1.setdist(11, 6.25);
    d2.getdist();
    cout << " dist is";
    d1.showdist();
    cout << "dist is";
    d2.showdist();
    return 0;
}