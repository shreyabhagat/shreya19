#include<iostream>
#include<conio.h>

using namespace std;

class Student
{
    int roll_no;
    char name[20];

    public:
       void getstudent()
       {
           cout<<"Enter rollno:";
           cin>>roll_no;

           cout<<"Enter name:";
           cin>>name;
       }
       void showstudent()
       {
           cout<<"\nRollno="<<roll_no;

           cout<<"\nName="<<name;
       }
};

class Mark:public Student
{
    protected:
       int marks1;
       int marks2;

    public:
       void getmark()
       {
           cout<<"Enter marks1:";
           cin>>marks1;

           cout<<"Enter marks2:";
           cin>>marks2;
       }   
       void showmark()
       {
           cout<<"\nMarks1="<<marks1;
           cout<<"\nMarks2="<<marks2;
       }
};

class Result:Mark
{
    int total;
      
    public:
        void getresult()
        {
            getstudent();
            getmark();
        }

        void showresult()
        {
            total=marks1+marks2;

            showstudent();
            showmark();
            cout<<"\nTotal="<<total;
        }
};

int main()
{
    Result r;

    r.getresult();
    cout<<"\nStudent data is";
    r.showresult();

    getch();
    return 0;
}
