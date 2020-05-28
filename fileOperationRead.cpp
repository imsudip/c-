#include <iostream>
#include <fstream>
using namespace std;

struct Student
{

    char name[20];
    int rollNo, cls, year, totalMarks;
};
void output(struct Student s)
{
    cout << "\n"
         << s.rollNo << "\t" << s.name << "\t" << s.totalMarks;
}
// void output(struct Student s)
// {
//     cout << "\nname : ";
//     cout << s.name;
//     cout << "\nclass :";
//     cout << s.cls;
//     cout << "\nroll No. :";
//     cout << s.rollNo;
//     cout << "\nyear: ";
//     cout << s.year;
//     cout << "\ntotal Marks: ";
//     cout << s.totalMarks;
// }

int main()
{
    ifstream fin;
    fin.open("students.txt");
    struct Student s;

    cout << "ROLL\tNAME\tMARKS";
    do
    {
        fin.read((char *)&s, sizeof(s));
        output(s);
    } while (!fin.eof());

    fin.close();
    return 0;
}