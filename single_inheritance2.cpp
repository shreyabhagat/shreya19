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
    Employee e;

    e.gete();

    cout<<"\nEmployee data is";

    e.showe();

    getch();
    return 0;
}