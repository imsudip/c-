#include <iostream>
#include <fstream>
using namespace std;
int TotalStudents = 10;
class Student
{
public:
    char name[20];
    int rollNo, cls, year, totalMarks;

    void input()
    {
        cout << "enter the name : ";
        cin >> name;
        cout << "enter the class :";
        cin >> cls;
        cout << "enter the roll No. :";
        cin >> rollNo;
        cout << "enter year: ";
        cin >> year;
        cout << "enter total Marks: ";
        cin >> totalMarks;
    }
};
int main()
{
    ofstream fout;
    fout.open("students.txt");
    Student s;
    for (int i = 0; i < TotalStudents; i++)
    {
        cout << "\nenter the details of " << i + 1 << " : \n";
        s.input();
        fout.write((char *)&s, sizeof(s));
    }
    fout.close();
    return 0;
}