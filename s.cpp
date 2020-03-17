#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int length = 0;
//int MAX=1000;
using namespace std;

class employee
{
    char name[100];
    int id;
    char designation[50];
    int age;
    int exp;

public:
    void input();
    void display();
    int getId()
    {
        return id;
    }
};
void employee::input()
{
    cout << "enter name: \n";
    getchar();
    fgets(name, 100, stdin);
    cout << "enter employee id: ";
    cin >> id;
    cout << "enter designation: ";
    fgets(designation, 50, stdin);
    cout << "enter age: ";
    cin >> age;
    cout << "enter years of experience: ";
    cin >> exp;
}
void employee::display()
{
    cout << "NAME: " << name;
    cout << "\tID: " << id;
    cout << "\tDESIGNATION: " << designation;
    cout << "\tAGE: " << age;
    cout << "\texperience: " << exp;
}
void edit(employee e[], int index)
{
    char c;
    e[index].display();
    cout << "you want to edit? (y/n) ";
    cin >> c;
    if (c == 'y')
    {
        e[index].input();
    }
}
void del(employee e[], int index)
{
    char c;
    e[index].display();
    cout << "are you sure to delete it? (y/n) ";
    cin >> c;
    for (int i = index; i < length - 1; i++)
    {
        e[i] = e[i + 1];
    }
}
void showList(employee e[])
{
    for (int i = 0; i < length; i++)
    {
        e[i].display();
        cout << endl;
    }
}
void buildList(employee e[])
{
    for (int i = 0; i < length; i++)
    {
        cout << "enter details of employee " << i + 1 << endl;
        e[i].input();
    }
}
void sortList(employee e[])
{
    int i, j;
    for (i = 0; i < length - 1; i++)
        for (j = 0; j < length - i - 1; j++)
            if (e[j].getId() > e[j + 1].getId())
            {
                employee temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
    cout << "array sorted...";
}
int searchList(employee e[])
{
    int tempId;
    cout << "enter the employee id: ";
    cin >> tempId;
    for (int i = 0; i < length; i++)
    {
        if (e[i].getId() == tempId)
        {
            return i;
        }
    }
    cout << "id not found...";
    return -1;
}
int main()
{
    employee empList[1000];
    int c;
    int index;
menu:
    system("CLS");
    cout << "\t\t\tMAIN MENU\n";
    cout << "1--> BUILD MASTER TABLE\n";
    cout << "2--> LIST TABLE\n";
    cout << "3--> INSERT NEW ENTRY\n";
    cout << "4--> DELETE OLD ENTRY\n";
    cout << "5--> EDIT AN ENTRY\n";
    cout << "6--> SEARCH ENTRY\n";
    cout << "7--> SORT ENTRIES\n";
    cout << "8--> EXIT\n";
    cout << "choose from 1-8: \n";
    cin >> c;
    system("CLS");
    switch (c)
    {
    case 1:
        cout << "enter the size of the list: ";
        cin >> length;
        buildList(empList);
        break;
    case 2:
        showList(empList);
        break;
    case 3:
        empList[length + 1].input();
        ++length;
        break;
    case 4:
        index = searchList(empList);
        if (index != -1)
            del(empList, index);
        break;
    case 5:
        index = searchList(empList);
        if (index != -1)
            edit(empList, index);
        break;
    case 6:
        index = searchList(empList);
        if (index != -1)
            empList[index].display();
        break;
    case 7:
        sortList(empList);
        showList(empList);
        break;
    case 8:
        exit(0);
    }
    cout << "press any key to go to main menu...";
    // getch();
    goto menu;
    return 0;
}
