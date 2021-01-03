#include<iostream>
using namespace std;
int n;
void reverse(int *p)
{
    int l,i=0;
    l=n-1;
    while(i<l)
    {
        int t=p[i];
        p[i]=p[l];
        p[l]=t;
        i++;
        l--;
    }
    cout<<"\n The reversed array:\n ";
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
}

int main()
{
    int ar[100];
    cout<<"Enter the size of array = ";
    cin>>n;
    cout<<"\n Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    reverse(ar);
    return 0;
}