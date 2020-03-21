#include<iostream>
#include<conio.h>

using namespace std;

class Student
{
    char name[20];
    int rollno;

    public:
        void getstudent()
        { 
           cout<<"Enter name:";
           cin>>name;

           cout<<"Enter rollno:";
           cin>>rollno;
        }
        void showstudent()
        {
            cout<<"\nName="<<name;
            cout<<"\nRollno="<<rollno;
        }
};
class Test
{
    protected:
       int mark1;
       int mark2;

     public:
        void gettest()
        {
            cout<<"Enter mark1:";
            cin>>mark1;

            cout<<"Enter mark2:";
            cin>>mark2;
        }  
        void showtest()
        {
            cout<<"\nMark1="<<mark1;
            cout<<"\nMark2="<<mark2;
        }
};

class Result:public Student,public Test
{
    int total;

    public:
       void getresult()
       {
           getstudent();
           gettest();
       }
       void showresult()
       {
           total=mark1+mark2;

           showstudent();
           showtest();
           cout<<"\nTotal="<<total;
       }
};

int main()
{
    Result obj;

    obj.getresult();
    cout<<"\nstudent data is";
    obj.showresult();

    getch();
    return 0;
}

