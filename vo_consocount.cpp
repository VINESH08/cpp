#include <iostream>
using namespace std;
class vowelcount
{
public:
    string *text;
    vowelcount()
    {
        text = new string;
    }
    void getstr()
    {
        getline(cin, *text);
    }
    void vowcnt()
    {
        int vow = 0, conso = 0;
        for (int i = 0; (*text)[i] != '\0'; i++)
        {
            if ((*text)[i] == 'a' || (*text)[i] == 'e' || (*text)[i] == 'i' || (*text)[i] == 'o' || (*text)[i] == 'u')
            {
                vow++;
            }
            else if ((*text)[i] >= 'a' && (*text)[i] <= 'z')
            {
                conso++;
            }
        }
        cout << "vowel count is:" << vow << "consonanat count is:" << conso << endl;
    }
};
int main()
{
    vowelcount obj;
    obj.getstr();
    obj.vowcnt();
    return 0;
}