#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s("ks is awesome!!$vs");
    cout << "the size is:" << s.size() << endl;
    s.erase(2, 2); /*the earase function has two parameters p1:starting index
    and the p2:length upto which it must be earsed...*/
    cout << "the earsed string is:" << s << endl;
    s.clear();     //clears the content of string
    if (s.empty()) //empty function checks whether the string is empty or not..
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    //now the string s is clear so to explain other functions let us create one more..
    string k("hi iam a string in cpp");

    cout << "lenght of string 2 is:" << k.length() << endl;

    cout << "the substring is :" << k.substr(5, 21) << endl; /*prints the substirng of the given
    string with start index and the end index*/

    //for using find function let us declare one more
    string m("nuclear fission is also called as nuclear fision but it is known as nuclaer fision");
    cout << m.find("fision") << endl; //prints the first occurance of index value of that string;;
}