#include<iostream>
#include<conio.h>

using namespace std;

class Person
{
    char name[20];
    int age;

    public:
       void getp();
       void showp();
};
void Person::getp()
{
    cout<<"Enter name:";
    cin>>name;

    cout<<"Enter age:";
    cin>>age;
}
void Person::showp()
{
    cout<<"\nName="<<name;

    cout<<"\nAge="<<age;
}
class Student:Person
{
    int rollno;
    float percentage;

    public:
       void gets();
       void shows();
};
void Student::gets()
{
    cout<<"\nEnter student data is\n";
    getp();
    cout<<"Enter rollno:";
    cin>>rollno;

    cout<<"Enter percentage:";
    cin>>percentage;
}

void Student ::shows()
{
    showp();
    cout<<"\nRollno="<<rollno;
    cout<<"\nPercentage="<<percentage;
}


class Employee:Person
{
    int salary;
    char post[20];

    public:
       void gete();
       void showe();
};

void Employee::gete()
{
    cout<<"\nEnter employee data\n";
    getp();

    cout<<"Enter salary:";
    cin>>salary;

    cout<<"Enter post:";
    cin>>post;
}
void Employee::showe()
{
    showp();

    cout<<"\nsalary="<<salary;
    cout<<"\nPost="<<post;
}

int main()
{
    Student s;
    Employee e;

    s.gets();
    e.gete();

    cout<<"\nStudent data is";
    s.shows();

    cout<<"\nEmployee data is";
    e.showe();

    getch();
    return 0;
}