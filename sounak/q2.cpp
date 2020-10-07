#include <iostream>
using namespace std;
int main()
{
    int arr[100], k, num, r;
    cout << "enter the range:";
    cin >> r;
    cout << "enter the numbers:";
    for (int i = 0; i < r; i++)
        cin >> arr[i];
    cout << "enter the position: ";
    cin >> k;
    for (int i =k-1; i <r; i++)
    {
        arr[i] = arr[i+1];
    }
    --r;
    for (int i = 0; i < r; i++)
        cout << arr[i] << " ";
    return 0;
}