#include <iostream>
#include <math.h>
using namespace std;
bool isprime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int start,end;
    cout<<"start range from: ";
    cin>>start;
    cout<<"end range upto: ";
    cin>>end;
    for(int i=start;i<=end;i++)
    if(isprime(i))
        cout<<i<<",";
    return 0;
}