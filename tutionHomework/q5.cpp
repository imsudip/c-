#include <iostream>
using namespace std;
int i = 0;
class prt
{
public:
    prt()
    {
        cout << ++i << " ";
    }
};
int main()
{
    int n;
    cout << "enter the limit";
    cin >> n;
    prt arr[n];
}