#include<iostream>
using namespace std;
class student 
{
  protected: 
  int roll_number;
  public:
  void get_number(int);
  void put_number();
};
class test : public student
{
  protected:
    float sub1,sub2;
    public:
    void get_marks(float ,float );
    void put_marks();
};
class result : public test
{
  private: 
  float total;
  public:
  void display();
};
void student :: get_number(int a)
{
   roll_number=a;
}
void student :: put_number()
{
    cout<<"Roll Number= "<<roll_number<<"\n";
}
void test :: get_marks(float x, float y)
{
    sub1=x;
    sub2=y;
}
void test :: put_marks()
{
    cout<<"SUB 1= "<<sub1<<"\n";
    cout<<"SUB 2= "<<sub2<<"\n";
}
void result :: display()
{
    total=sub1+sub2;
    put_number();
    put_marks();
    cout<<"Total= "<<total<<"\n";
}
int main()
{
    result stu1;
    stu1.get_number(111);
    stu1.get_marks(75.0,59.5);

    stu1.display();
    return 0;   
}