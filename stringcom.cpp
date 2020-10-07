#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
class s 
{
  private: 
  char *a;
  public:
  void input()
  {
      cout<<"Enter the string";
    cin>>a;
  }  
  bool operator== (s obj)
  {
    if (strcmp (a,obj.a)==0)
    return true;
    else
    {
        return false;
    }
  }

};

int main()
{
    s obj1,obj2;
    obj1.input();
    obj2.input();
   if (obj1==obj2)
   {
       cout<<"The strings are equal";
   }
   else{
       cout<<"The strings are not equal";
   }
   return 0;
}