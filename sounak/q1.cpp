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
    cout << "enter the num: ";
    cin >> num;
    for (int i = r - 1; i >= k - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    //++r;
    arr[k - 1] = num;
    for (int i = 0; i < r; i++)
        cout << arr[i] << " ";
    return 0;
}