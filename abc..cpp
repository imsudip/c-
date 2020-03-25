#include<iostream>
using namespace std;
int main(){
    int a[10000],b[10000],n,f=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++){
        if(a[i]==b[n-i-1])
            f=1;
        else
            f=0;
    }
    if(f)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}