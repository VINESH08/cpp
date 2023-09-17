#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class anagram
{
    //this is a private block which contains data members secerued..
private:
    string str1;
    string str2;
    //this is a public
public:
    void get()
    {
        cout << "enter the strings:" << endl;
        cout << "enter the first string:" << endl;
        getline(cin, str1);
        cout << "enter the second string:" << endl;
        getline(cin, str2);
    }

    bool anagram_check()
    {
        int l1 = str1.length();
        int l2 = str2.length();
        if (l1 != l2)
            return false;
        int arr[256] = {0};
        for (int i = 0; i < l1; i++)
        {
            arr[(int)str1[i]]++;
            arr[(int)str2[i]]--;
        }
        for (int i = 0; i < 256; i++)
        {
            if (arr[i] != 0)
                return false;
        }
        return true;
    }
};
int main()
{
    anagram input;
    input.get();
    if (input.anagram_check())
    {
        cout << "the strings are anagram" << endl;
    }
    else
    {
        cout << "the strings are not anagram" << endl;
    }
}