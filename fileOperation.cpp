#include <iostream>
#include <fstream>
using namespace std;
int TotalStudents = 10;
struct Student
{

    char name[20];
    int rollNo, cls, year, totalMarks;
};
struct Student input()
{
    struct Student s;
    cout << "enter the name : ";
    cin >> s.name;
    cout << "enter the class :";
    cin >> s.cls;
    cout << "enter the roll No. :";
    cin >> s.rollNo;
    cout << "enter year: ";
    cin >> s.year;
    cout << "enter total Marks: ";
    cin >> s.totalMarks;
    return s;
}

int main()
{
    ofstream fout;
    fout.open("students.txt");
    struct Student s;
    for (int i = 0; i < TotalStudents; i++)
    {
        cout << "\nenter the details of " << i + 1 << " : \n";
        s = input();
        fout.write((char *)&s, sizeof(s));
    }
    fout.close();
    return 0;
}