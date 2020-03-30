#include<iostream>
#include<conio.h>

using namespace std;

class Time
{
    int hour;
    int minute;

    public:
       Time(int h,int m);

       int operator==(Time obj);
};

Time::Time(int h,int m)
{
    hour=h;
    minute=m;
}
int Time :: operator==(Time obj)
{
    if(hour==obj.hour && minute==obj.minute)
       return 1;
    else    
       return 0;
}
int main()
{
    Time  t1(4,70);
    Time t2(4,70);

    if(t1==t2)       //t1.operator==(t2)
      cout<<"Time object are equal";
    else
      cout<<"time object are not equal";

     getch();
     return 0; 
      
}
