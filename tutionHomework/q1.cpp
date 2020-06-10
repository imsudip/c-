#include <iostream>
using namespace std;
class Swap
{
    int a, b;

public:
    void input();
    void swapBoth();
    void output();
};

void Swap::input()
{
    cout << "enter the two numbers";
    cin >> a >> b;
}

void Swap::swapBoth()
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void Swap::output()
{
    cout << "a =" << a << "\tb =" << b;
}

int main()
{

    Swap s;
    s.input();
    cout << "\nBefore Swap : \n";
    s.output();
    s.swapBoth();
    cout << "\nAfter Swap : \n";
    s.output();

    return 0;
}