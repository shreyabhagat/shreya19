#include<iostream>
#include<conio.h>

using namespace std;

class Student
{
    int rollno;
    char name[20];

    public:
        void getstudent()
        {
            cout<<"Enter rollno:";
            cin>>rollno;

            cout<<"Enter name:";
            cin>>name;
        }
        void showstudent()
        {
            cout<<"\nRollno="<<rollno;

            cout<<"\nName="<<name;
        }
};
class Test:public Student
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
class Sport
{
    protected:
      int sport_mark;

    public:
       void getsport()
       {
           cout<<"Enter sport mark:";
           cin>>sport_mark;
       }
       void showsport()
       {
           cout<<"\nSport mark="<<sport_mark;
       }
};

class Result:public Test, public Sport
{
    int total;

    public:
       void getresult()
       {
           getstudent();
           gettest();
           getsport();
       }
       void showresult()
       {
           total=mark1+mark2+sport_mark;

           showstudent();
           showtest();
           showsport();
           cout<<"\nTotal="<<total;
       }
};

int main()
{
    Result obj;

    obj.getresult();
    cout<<"\nStudent data and mark is";

    obj.showresult();

    getch();
    return 0;
}
