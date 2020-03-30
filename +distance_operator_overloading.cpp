#include<iostream>
#include<conio.h>

using namespace std;

class Distance
{
    int m;
    int cm;

    public:
         Distance()
         {
             m=0;
             cm=0;
         }
         Distance(int meter,int centimeter)
         {
             m=meter;
             cm=centimeter;
         }
         void showdata()
         {
             cout<<m<<"m"<<cm<<"cm";
         }

         Distance operator+(Distance obj)
         {
             Distance temp;
             
             int c1=m*100+cm;
             int c2=obj.m*100+obj.cm;

             temp.m=(c1+c2)/100;
             temp.cm=(c1+c2)%100;

             return temp;
         }
};
int main()
{
    Distance d1(40,70);
    Distance d2(50,30);
    Distance d3;

    d3=d1+d2;     //d3=d1.operator+(d2)

    cout<<"\nd1=";
    d1.showdata();

    cout<<"\nd2=";
    d2.showdata();

    cout<<"\nd3=";
    d3.showdata();

    getch();
    return 0;

}