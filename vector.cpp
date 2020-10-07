#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class student{
    int marks;
    string name;
    public:
        student(){}
        void input(){
            cout<<"enter name";
            getline(cin,name);
            cout<<"enter marks: ";
            cin>>marks;
        }
        void display(){
            cout<<"name: "<<name;
            cout<<"\nmarks: "<<marks;
        }
        bool operator>(student s){
            return marks>s.marks;
        }
};

int main(){
    student s1,s2;
    s1.input();
    s2.input();
    if(s1>s2){
    s1.display();
    cout<<"is greater than";
    s2.display();
    }
        
}