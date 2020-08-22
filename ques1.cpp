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
    int num=0,primeCount=0,comCount=0;
    while(num!=-1){
        cin>>num;
        if(isprime(num))
           { cout<<num;
               primeCount++;}
        else
            comCount++;
        
    }
    return 0;
}