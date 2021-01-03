#include<iostream>
using namespace std;
 template <class T>
 T mymin(T a, T b)
 {
     return (a<b)?a:b;
 }
 int main()
 {
     int i=10,j=20;
     cout<<endl<<mymin(i,j);
     float a=3.14f,b=-6.28f;
     cout<<endl<<mymin(a,b);
     char ch='A',dh='Z';
     cout<<endl<<mymin(ch,dh);
     double d=1.1,e=1.11;
     cout<<endl<<mymin(d,e);
     return 0;
 }