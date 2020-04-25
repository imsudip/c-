#include <iostream>
using namespace std;

class Person
{
public:
    char name[50];
    char mobile[10];

    virtual void input()
    {
        cout << "enter name: ";
        cin >> name;
        cout << "\n enter mobile no: ";
        cin >> mobile;
    }
    virtual void output()
    {
        cout << "name: ";
        cout << name;
        cout << "\nmobile no: ";
        cout << mobile;
    }
};

class Student : public Person
{
    int rollNo, cls;

public:
    void input()
    {
        cout << "enter name: ";
        cin >> name;
        cout << "enter mobile no: ";
        cin >> mobile;
        cout << "enter roll no: ";
        cin >> rollNo;
        cout << "enter class: ";
        cin >> cls;
    }
    void output()
    {
        cout << "\n--------------------\n";
        cout << "name: ";
        cout << name;
        cout << "\nmobile no: ";
        cout << mobile;
        cout << "\nRoll no: ";
        cout << rollNo;
        cout << "\nClass : ";
        cout << cls << endl;
    }
};
class Teacher : public Person
{
    int salary;
    char subject[100];

public:
    void input()
    {
        cout << "enter name: ";
        cin >> name;
        cout << "enter mobile no: ";
        cin >> mobile;
        cout << "enter salary: ";
        cin >> salary;
        cout << "enter subject: ";
        cin >> subject;
    }
    void output()
    {
        cout << "\n--------------------\n";
        cout << "name: ";
        cout << name;
        cout << "\nmobile no: ";
        cout << mobile;
        cout << "\nSalary: ";
        cout << salary;
        cout << "\nSubject : ";
        cout << subject << endl;
    }
};
int main()
{
    Person *a1;
    int ch;
    cout << "choose 1.student  2.teacher";
    cin >> ch;
    if (ch == 1)
        a1 = new Student;
    else if (ch == 2)
        a1 = new Teacher;
    a1->input();
    a1->output();
    delete a1;
    cout << "object deleted...";
    return 0;
}