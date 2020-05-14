#include <iostream>
using namespace std;
void reverseArray(int *p, int n)
{
    int *frst = p;
    int *last = p + n - 1;
    for (int i = 0; i < n / 2; i++)
    {
        int temp = *frst;
        *frst = *last;
        *last = temp;
        frst++;
        last--;
    }
}
void print(int *p, int n)
{
    for (int i = 0; i < n; i++)
        cout << *p++ << " ";
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Normal Array  : ";
    print(arr, n);
    reverseArray(arr, n);
    cout << "\nReversed Array: ";
    print(arr, n);
    return 0;
}