#include <iostream>
using namespace std;
int main()
{
    int A[10],B[10],sum[10], k, num, d;
    cout << "enter the degree of the polynomials";
    cin >> d;
    cout << "enter the coeff of 1st polynomial: (c + bx + ax^2)";
    for (int i = 0; i < d+1; i++)
        cin >> A[i];
    for(int i=d;i>=0;i--){
        cout<<A[i]<<"x^"<<i<<" + ";
    }
    cout << "\nenter the coeff of 2nd polynomial:";
    for (int i = 0; i < d+1; i++)
        cin >> B[i];
    for(int i=d;i>=0;i--){
        cout<<B[i]<<"x^"<<i<<" + ";
    }
    cout<<"\n the sum is: \n";
    for (int i = 0; i < d+1; i++){
        sum[i]=A[i]+B[i];
    }
    for(int i=d;i>=0;i--){
        cout<<sum[i]<<"x^"<<i<<" + ";
    }
}
