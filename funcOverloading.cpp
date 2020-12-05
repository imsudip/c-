#include <iostream>
#include <math.h>
using namespace std;
float p = 3.14;
class shape
{
public:
    float r, a = 0;
    void area(float r)
    {

        a = p * ((pow(r, 2)));
    }
    void area(float b, float h)
    {

        a = 0.5 * b * h;
    }
    void area(double l, double f)
    {

        a = l * f;
    }
    void display()
    {
        cout << "Area=" << a;
    }
};

int main()
{
    int ch;
    float r, b, h;
    double l, f;
    shape a1;
    cout << "1.Circle 2.Triangle 3.Rectangle:";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Enter the Radius:";
        cin >> r;
        a1.area(r);
        a1.display();
        break;
    case 2:
        cout << "Enter the Base and Height:";
        cin >> b >> h;
        a1.area(b, h);
        a1.display();
        break;
    case 3:
        cout << "Enter the Length and Breadth :";
        cin >> l >> f;
        a1.area(l, f);
        a1.display();
        break;
    default:
        break;
    }

    return 0;
}