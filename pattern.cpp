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
    
}
int main(){
  
    cout<<"enter dimension: ";
    cin>>n;
    initializeMatrix();
    maze();
    printMatrix();

    return 0;
}