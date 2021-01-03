#include<iostream>
using namespace std;
class complex 
{
    private:
  float x,y;
  public:
  void input()
  {
      cout<<"Enter the numbers to be added :";
      cin>>x>>y;
  }
  complex(){}
  complex(float a,float b)
  {
      x=a;
      y=b;
  }
  complex operator+(complex c)
  {
      complex temp;
      temp.x = x+c.x;
      temp.y = y+c.y;
      return (temp);
  }
  void display (void)
  {
      cout<<x<<"+"<<y<<"i"<<"\n";
  }
};
int main()
{
    float x,y;
    cout<<"Enter the real and imaginary part of the first number:";
    cin>>x>>y;
    complex C1(x,y);
    cout<<"Enter the real and imaginary part of the second number:";
    cin>>x>>y;
    complex C2(x,y);
    complex C3;
    C3=C1+C2;
    cout<<"C1=";C1.display();
    cout<<"C2=";C2.display();
    cout<<"C3=";C3.display();
    return 0;
}