#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("one.txt");
    fout.open("two.txt");
    char c;
    fin >> c;
    while (!fin.eof())
    {
        if (c != ' ')
            fout << c;
        fin >> c;
    }
    fin.close();
    fout.close();
    return 0;
}