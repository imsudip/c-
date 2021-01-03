#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    struct student 
    {
        char name [50];
        int roll,year,cls;
        float sub1,sub2,sub3,total_marks;
    };
    struct student s[10];
    int n,i;
    cout<<"Enter No.of students: ";
    cin>>n;
    fstream fout;
    fout.open("g:\\student.xls",ios::app);

    fout<<"NAME\tROLL\tCLASS\tYEAR\tSUBJECT1\tSUBJECT2\tSUBJECT3\tTOTAL";
    for(i=0;i<n;++i)
    {
        cout<<"\n\nFor Student"<<i+1;
        cout<<"\n\nEnter name:";
        cin>>s[i].name;
        cout<<"\nEnter Roll Number:";
        cin>>s[i].roll;
        cout<<"\nEnter Class:";
        cin>>s[i].cls;
        cout<<"\nEnter Year:";
        cin>>s[i].year;
        cout<<"\nEnter marks of Subject 1:";
        cin>>s[i].sub1;
        cout<<"\nEnter marks of Subject 2:";
        cin>>s[i].sub2;
        cout<<"\nEnter marks of subject 3:";
        cin>>s[i].sub3;
        
        s[i].total_marks=s[i].sub1+s[i].sub2+s[i].sub3;

        cout<<"\tStudent details\n--------------------------------------";
        cout<<"\nName: "<<s[i].name<<"\n\nRoll = "<<s[i].roll<<"\n\nClass = "<<s[i].cls<<"\n\nYear = "<<s[i].year<<"\n\nSubject 1 = "<<s[i].sub1<<"\n\nSubject 2 = "<<s[i].sub2<<"\n\nSubject 3 = "<<s[i].sub3<<"\n\nTotal Marks = "<<s[i].total_marks;
        fout<<"\n"<<s[i].name<<"\t"<<s[i].roll<<"\t"<<s[i].cls<<"\t"<<s[i].year<<"\t"<<s[i].sub1<<"\t"<<s[i].sub2<<"\t"<<s[i].sub2<<"\t"<<s[i].sub3<<"\t"<<s[i].total_marks;
    }
    fout.close();
    return 0;
}