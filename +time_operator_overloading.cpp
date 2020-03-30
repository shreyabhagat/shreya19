#include<iostream>
#include<conio.h>

using namespace std;

class Time
{
    int hour;
    int minute;

    public:
      Time();
      Time(int h,int m);
      void showdata();
      Time operator+(Time obj);
};
Time::Time()
{
    hour=0;
    minute=0;
}
Time::Time(int h,int m)
{
    hour=h;
    minute=m;
}
void Time::showdata()
{
    cout<<hour<<":"<<minute;
}

Time Time::operator+(Time obj)
{
    Time temp;
    
    temp.minute=(minute+obj.minute)%60;
    temp.hour=(hour+obj.hour)  +(minute+obj.minute)/60;

    return temp;
}

int main()
{
    Time t1(4,50);
    Time t2(5,20);
    Time t3;

    t3=t1+t2;     //t3=t1.operator+(t2);

    cout<<"\nt1=";
    t1.showdata();

    cout<<"\nt2=";
    t2.showdata();

    cout<<"\nt3=";
    t3.showdata();

    getch();
    return 0;
}