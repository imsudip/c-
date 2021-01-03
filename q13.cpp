#include<iostream>
#include<cstring>
#define MAX 100
using namespace std;

  class addstring 
  {
   private:
   char s[MAX];
   public:
   void input()
   {
     cout<<"Enter the string to be added:";
     cin>>s;
   } 
   addstring operator+(addstring b)
   {
     addstring c;
     strcat(s,b.s);
     strcpy(c.s,s);
     return c;
   }
   void display()
   {
     cout<<"\n"<<"String is: "<<s;
   }
  };
   int main()
   {
     addstring x,y,z;
     x.input();
     y.input();
     z=x+y;
     z.display();
     return 0;
   }