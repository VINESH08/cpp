#include <iostream>
using namespace std;
class animal
{
public:
    animal()
    {
        cout << "this is from animal class" << endl;
    }
    void animals()
    {
        cout << "animals generally makes sound" << endl;
    }
    class lion
    {
    public:
        lion()
        {
            cout << "this is from lion class" << endl;
        }
        void lions()
        {
            cout << "lion generally roars!!" << endl;
        }
        class dog
        {
        public:
            dog()
            {
                cout << "this is from dog class" << endl;
            }
            void dogs()
            {
                cout << "dog generally barks" << endl;
            }
        };
    };
};

int main()
{
    animal ani;
    ani.animals();
    animal::lion king;
    king.lions();
    animal::lion::dog gaurd;
    gaurd.dogs();
    return 0;
}