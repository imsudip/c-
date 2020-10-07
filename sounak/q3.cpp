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
    int max1, max2;
    max1 = max2 = INT16_MIN;
    for (int i = 0; i < r; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    cout << "2nd largest: " << max2;
     return 0;
}