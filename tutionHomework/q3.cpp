#include <iostream>
#include <string.h>
using namespace std;
class String
{

public:
    char str[100];
    void input()
    {
        cin >> str;
    }
    void output()
    {
        cout << str;
    }
    bool operator==(String s)
    {
        if (strcmp(s.str, str) == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    String s1, s2;
    cout << "enter string 1: ";
    s1.input();
    cout << "enter the string 2: ";
    s2.input();
    if (s1 == s2)
    {
        cout << "they are equal";
    }
    else
    {
        cout << "they are not equal";
    }
    return 0;
}
