#include<iostream>
using namespace std;
int a[50][50];
int n;
void initializeMatrix(){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j]=0;
}
void printMatrix(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==1)
                cout<<" *";
                else
                {
                    cout<<"  ";
                }
                
        }
        cout<<"\n";
    }
}
void maze(){
   
    for(int k=0;k<=n/2+1;k+=2){
        for(int j=k;j<n-k;j++){
            a[k][j]=1;
            a[j][k]=1;
        }
    }
    // for(int k=n-2;k>=n/2;k-=2){
    //     for(int j=k;j>0;j--){
    //         a[k][j]=1;
    //         a[j][k]=1;
    //     }
    // }
    int t=n;
    for(int i=2;n-i!=0;i+=2){
        for(int j=i;j<=t;j++){
            a[j][n-i]=1;

        }
        t-=2;
    }
    for(int i=2;n-i!=0;i+=2){
        for(int j=i;j<=t;j++){
            a[n-i][j]=1;

        }
        t-=2;
    }
    
}

int main(){
  
    cout<<"enter dimension: ";
    cin>>n;
    initializeMatrix();
    maze();
    printMatrix();

    return 0;
}