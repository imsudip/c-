#include <iostream>
using namespace std;
int n;
void reverseArray(int *p)
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
void print(int *p)
{
    for (int i = 0; i < n; i++)
        cout << *p++ << " ";
}
int main()
{
    int arr[100];
    cout << "enter the length of the array: ";
    cin >> n;
    cout<<"enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Normal Array  : ";
    print(arr);
    reverseArray(arr);
    cout << "\nReversed Array: ";
    print(arr);
    return 0;
}