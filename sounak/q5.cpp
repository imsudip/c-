#include <iostream>
using namespace std;
int main()
{
    int A[10], d,p;
    cout << "enter the degree of the polynomials";
    cin >> d;
    cout << "enter the coeff of 1st polynomial: ";
    for (int i = 0; i < d+1; i++)
        cin >> A[i];
    for (int i = 0; i < d+1; i++)
    {
        p=d-i;
        cout<<A[i];
        if(p!=0)
            cout<<"x^"<<p<<" + ";
        
    }
}
