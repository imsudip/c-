#include<iostream>
 using namespace std;


int main(){
    int x,y,t;
    int a[100];
    cin>>t;
    for(int i=0;i<t;i++){
        int currentPrime =2;
        a[i]=0;
        cin>>x>>y;
        int dif= x-y;
        while(1){
            if(dif<currentPrime)
                break;
            if(dif%currentPrime==0){
                a[i]=1;
                break;
            }
        currentPrime= nextPrime(currentPrime);
        }
    }
    for(int i=0; i< t ;i++){
        if(a[i])
            cout<<"YES";
        else
            cout<<"NO";
        cout<<"\n";
    }
}
bool isPrime(int n)  
{  
    if (n <= 1)  return false;  
    if (n <= 3)  return true;  
    if (n%2 == 0 || n%3 == 0) return false;  
    for (int i=5; i*i<=n; i=i+6)  
        if (n%i == 0 || n%(i+2) == 0)  
           return false;  
    return true;  
} 
int nextPrime(int N) 
{ 
    if (N <= 1) 
        return 2; 
    int prime = N; 
    bool found = false; 
    while (!found) { 
        prime++; 
  
        if (isPrime(prime)) 
            found = true; 
    } 
    return prime; 
}  

