#include<iostream>
using namespace std;
int main()
{
    int T,n,c1=1,c2=0;
    string s[50];
    cin>>T;
    while(T--)
    {
        cin>>n;
        for (int i=0;i<n;i++)
        {   cin>>s[i];
            if(i>0 && s[i]==s[0]) 
				c1++;        
            else if(i>0 && s[i]!=s[0])    
                c2++;         
        }   
        if(n==0 || c1==c2)
            cout<<"draw"<<endl;
        else if(c1>c2)
            cout<<"Team 1"<<endl;
        else
            cout<<"Team 2"<<endl;                
    }
}