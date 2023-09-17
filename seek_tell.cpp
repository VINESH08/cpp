#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("example.txt");
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
    fin.open("example.txt");
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
    fin.open("example.txt");
    if (fin)
    {
        streampos intial_posi = fin.tellg();
        cout << "Intial postion is:" << intial_posi << endl;
        fin.seekg(5, ios::beg);
        char ch;
        while (fin.get(ch))
        {
            cout << ch;
        }
        streampos current_pos = fin.tellg();
        cout << "the current positon after moving is:" << current_pos << endl;
        fin.seekg(0, ios::beg);
        fin.clear();
        streampos nowpos = fin.tellg();
        cout << "now it is in:" << nowpos << endl;
        while (fin.get(ch))
        {
            cout << ch;
        }
        fin.close();
    }
    else
    {
        cout << "file cant be opened!" << endl;
    }
}