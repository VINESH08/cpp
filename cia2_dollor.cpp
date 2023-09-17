#include <iostream>
using namespace std;
class dollar
{
private:
    float doll, rup;

public:
    float rupees(float rupee)
    {
        doll = 0.0123 * rupee;
        return doll;
    }
    float dollor(float dol)
    {
        rup = 81 * dol;
        return rup;
    }
};
int main()
{
    dollar obj1;
    int k;
    float rup, dol;
    cout << "enter your choice(1 or 2):" << endl;
    cin >> k;
    if (k == 1)
    {
        cout << "enter the rupees:" << endl;
        cin >> rup;
        cout << "converted dollor is:" << obj1.rupees(rup) << endl;
    }
    else if (k == 2)
    {
        cout << "enter the dollor:" << endl;
        cin >> dol;
        obj1.dollor(dol);
        cout << "converted rupee is:" << obj1.dollor(dol) << endl;
    }
    return 0;
}
