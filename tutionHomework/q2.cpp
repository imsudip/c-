#include <iostream>
using namespace std;

class box
{
    float l, b;

public:
    void input()
    {
        cin >> l;
        cin >> b;
    }

    void output()
    {
        cout << "length: " << l << "\nbreath: " << b;
    }

    box operator+(box b1)
    {
        box b2;
        b2.l = l + b1.l;
        b2.b = b + b1.b;
        return b2;
    }
    box operator-(box b1)
    {
        box b2;
        b2.l = l - b1.l;
        b2.b = b - b1.b;
        return b2;
    }
    box operator*(box b1)
    {
        box b2;
        b2.l = l * b1.l;
        b2.b = b * b1.b;
        return b2;
    }
    box operator/(box b1)
    {
        box b2;
        b2.l = l / b1.l;
        b2.b = b / b1.b;
        return b2;
    }
    bool operator==(box b1)
    {
        if (b1.l == l && b1.b == b)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int ch, t = 1;
    box d1, d2, d3;
    cout << "First Object: ";
    d1.input();
    cout << "\nSecond Object: ";
    d2.input();
    while (t == 1)
    {
        cout << "\n\nOperator Overloadig Menu: ";
        cout << "\n1.Additionn 2.Subtractionn 3.Multiplicationn 4.Divisionn 5.Comparisonn 6.Exit";
        cout << "\nEnter your choice(1-6):";
        cin >> ch;
        switch (ch)
        {
        case 1:
            d3 = d1 + d2;
            d3.output();
            break;
        case 2:
            d3 = d1 - d2;
            d3.output();
            break;
        case 3:
            d3 = d1 * d2;
            d3.output();
            break;
        case 4:
            d3 = d1 / d2;
            d3.output();
            break;
        case 5:
            if (d1 == d2)
            {
                cout << "they are equal..";
            }
            else
            {
                cout << "they are not equal";
            }

            break;
        case 6:
            t = 0;
            break;
        default:
            break;
        }
    }
    return 0;
}