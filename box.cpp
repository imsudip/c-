#include <iostream>
using namespace std;
class box
{
private:
    float l, b, h, v, s,k,j;

public:
    void input()
    {
        cout << "Enter the Length=";
        cin >> l;
        cout << "Enter the breadth=";
        cin >> b;
        cout << "Enter the height=";
        cin >> h;
    }
    void volume()
    {
        v = l * b * h;
        cout << "Volume=" << v << endl;
    }
    void surfacearea()
    {
        s = 2 * (l * b + b * h + h * l);
        cout << "Surface Area=" << s << endl;
    }
    void operator++()
    {
        k=v;
        k++;
        cout << "Volume=" << k << endl;
    }
    void operator--()
    {
        j=s;
        j--;
        cout << "Surface Area=" << j << endl;
    }
    bool operator==(box a)
    {
        bool b=false;
        if (l==a.l && b==a.b && h==a.h)
        {
            b = true;
        }
        return b;
    }
    void check()
    {
        if (l == b && b == h)
        {
            cout << "It is a cube";
        }
        else
        {
            cout << "It is a cuboid";
        }
    }
};
int main()
{
    box c1, c2;
    int x = 0;
    int ch;
    c1.input();

    while (x == 0)
    {
        cout << "\n"<<"Press 1 for volume"
             << "\n Press 2 for surface area"
             << "\n Press 3 for increment of volume "
             << "\n Press 4 for decrement of surface area"
             << "\n Press 5 for checking equality "
             << "\n Press 6 for checking it is a cube or cuboid"
             << "\n Press 7 to exit : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            c1.volume();
            break;
        case 2:
            c1.surfacearea();
            break;
        case 3:
            c1.volume();
            // c2.volume();
            ++c1;
            // ++c2;
            break;
        case 4:
            c1.surfacearea();
            // c2.surfacearea();
            --c1;
            // --c2;
            break;
        case 5:
            cout << "enter the dimension of the new cube: ";
            c2.input();
            if (c1 == c2)
            {
                cout << "Equal";
            }
            else
            {
                cout << "Not equal";
            }
            break;
        case 6:
            c1.check();
            // c2.check();
            break;
        case 7:
            x = 1;
            break;
        default:
            break;
        }
    }
    return 0;
}