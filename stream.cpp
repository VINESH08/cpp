#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char ch;
    ofstream fout;
    fout.open("sample.txt");
    string line;
    while (fout)
    {
        getline(cin, line);
        if (line == "-1")
            break;
        fout << line << endl;
    }
    fout.close();
    ifstream fin;
    fin.open("sample.txt");
    while (getline(fin, line)) //executes untill the end of the file;
    {
        cout << line << endl;
    }
    fin.close();
    fin.open("sample.txt");
    // char ch;
    ofstream dest;
    dest.open("destination.txt");
    while (fin.get(ch))
    {
        dest.put(ch);
    }
    dest.close();
    ifstream resul;
    resul.open("destination.txt");
    while (resul.get(ch))
    {
        cout << ch;
    }
    resul.close();
}