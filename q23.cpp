#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

class Triangle
{
    float area;
public:

   Triangle()
    {
        area=0;
    }

    float Area(float a, float b, float c)
    {
        float s;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
    }
    float Area(float a)
    {
        area=Area(a,a,a);
        return area;
    }
    float Area(float h, float b)
    {
        area=(h*b)/2;
    	return area;
    }

    void display()
    {
        cout<< "\nArea = "<<area<<endl;
    }
       int operator==(Triangle T) // Overload == for triangle
         {
             cout<<"\nComparing two triangles...\n----------------------------- \n";
             return (this->area==T.area);

         }
         void operator=(Triangle X)
         {
             cout<<"\n\nAssigning values ...\n------------------------------ \n";

             area=X.area;
         }

};
int main()
{
    Triangle T1;
    float s1,s2,s3;
    int n,loop=1;
    while(loop)
    {


    cout<<"\n\nMethod for Calculating area of a Triangle\n";
    cout<<"1) For Scalene triangle\n";
    cout<<"2)For Equilateral triangle\n";
    cout<<"3) For Right angled triangle\n";
    cout<<"4) Using Assignment (=) operator\n";
    cout<<"5) Using comparison (==) operator\n";
    cout<<"\nEnter choice to continue or any other key to exit = ";
    cin>>n;
    switch(n)
    {
    case 1:
        	{
                cout<<"\nEnter 3 side = ";
                cin>>s1>>s2>>s3;
                T1.Area(s1,s2,s3);
                cout<<"\n\n\tArea of Scalene Triangle.\n-----------------------------------------------------\n";
                T1.display();
                break;
        	}

    case 2:
        	{
                cout<<"\nEnter side = ";
                cin>>s1;
                T1.Area(s1);
                cout<<"\n\n\tArea of Equilateral Triangle.\n-----------------------------------------------------\n";
                T1.display();
                break;
        	}

     case 3:
         	{
                cout<<"\nEnter base & height = ";
                cin>>s1>>s2;
                T1.Area(s1,s2);
                cout<<"\n\n\tArea of Right angle Triangle.\n-----------------------------------------------------\n";
                T1.display();
                break;
        	}

     case 4:
            {
                cout<<"\nEnter the three sides= ";
                cin>>s1>>s2>>s3;
                Triangle T3;
                T1.Area(s1,s2,s3);
                T3=T1;
                T3.display();
                break;
            }
     case 5:
         	{
                float n1,n2,n3;
                cout<<"\nEnter the 3 sides of the first triangle=  ";
                cin>>s1>>s2>>s3;
                T1.Area(s1,s2,s3);
                T1.display();
                cout<<"\nEnter the 3 sides of the second triangle= ";
                cin>>n1>>n2>>n3;
                Triangle T2;
                T2.Area((n1,n2,n3));
                T2.display();
                if(T1==T2)
                    {
                        cout<<"\n\t\tEqual...\n";
                    }
                else
                    {
                        cout<<"\n\t\tNot Equal...\n";
                    }
                break;
         	}
     default:
         	{
             	cout<<"\n\nIncorrect Choice";
             	exit(0);
         	}

    }
    }
    return 0;
}