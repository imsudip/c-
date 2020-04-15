#include <iostream>
using namespace std;

class Box
{
    float length, width, height, vol, area;

public:
    void input()
    {
        cout << "enter the dimension of the box: ";
        cin >> length >> width >> height;
        calVolume();
        calSurfaceArea();
    }
    float calVolume()
    {
        vol = length * width * height;
        return vol;
    }
    float calSurfaceArea()
    {
        area = 2 * ((length * width) + (width * height) + (height * length));
        return area;
    }
    void output()
    {
        cout << "\nlength: " << length;
        cout << "\nwidth: " << width;
        cout << "\nheight: " << height;
        cout << "\nvolume: " << vol;
        cout << "\nsurface area: " << area << "\n";
    }
    void operator++()
    {
        ++vol;
    }
    void operator--()
    {
        --area;
    }
    friend bool operator==(Box &, Box &);

    bool isCube()
    {
        if (length == width && width == height)
            return true;
        else
            return false;
    }
};
bool operator==(Box &a, Box &b)
{
    return (a.length == b.length && a.width == b.width && a.height == b.height);
}

int main()
{
    Box b;
    int ch = 1, n = 1;
    b.input();
    cout << "the registered cube is";
    b.output();
    while (n)
    {
        cout << "\n\n1-increment\n2-decrement\n3-equality\n4-check if its cube\n45-exit\nenter choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            ++b;
            cout << "\nvolume incremented";
            b.output();
            break;
        case 2:
            --b;
            cout << "\narea decremented";
            b.output();
            break;
        case 3:
            Box a;
            a.input();
            if (a == b)
                cout << "\nthey are equal";
            else
                cout << "\nthey are not equal";
            break;
        case 4:
            if (b.isCube())
                cout << "\nit is a cube";
            else
                cout << "it is a cuboid";
            break;
        case 5:
            n = 0;
            break;
        default:
            break;
        }
    }
    return 0;
}
