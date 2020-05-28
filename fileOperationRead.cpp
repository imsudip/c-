#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    char name[20];
    int rollNo, cls, year, totalMarks;
    void output()
    {
        cout << "\nname : ";
        cout << name;
        cout << "\nclass :";
        cout << cls;
        cout << "\nroll No. :";
        cout << rollNo;
        cout << "\nyear: ";
        cout << year;
        cout << "\ntotal Marks: ";
        cout << totalMarks;
    }
};
int main()
{
    ifstream fin;
    fin.open("students.txt");
    Student s;
    int i = 0;
    fin.read((char *)&s, sizeof(s));
    while (!fin.eof())
    {
        cout << "\nDetails of " << i + 1 << " : \n";
        s.output();
        fin.read((char *)&s, sizeof(s));
        i++;
    }
    fin.close();
    return 0;
}