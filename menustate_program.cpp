#include<iostream>
#include<conio.h>

using namespace std;

class Distance
{
    int m;
    int cm;

    public:
       void getdata()
       {
           cin>>m>>cm;
       }
       void displaydata()
       {
           cout<<m<<"m"<<cm<<"cm";
       }
       Distance addm(Distance obj2)
       {  
            Distance obj3;
        
            int c1=m*100+cm;
            int c2=obj2.m*100+obj2.cm;

            obj3.m=(c1+c2)/100;
            obj3.cm=(c1+c2)%100;
            return obj3;
       }

      Distance subm(Distance obj2)
       {  
            Distance obj3;

            int c1=m*100+cm;
            int c2=obj2.m*100+obj2.cm;

            obj2.m=(c1-c2)/100;
            obj2.cm=(c1-c2)%100;

            return obj3;
       }
       friend Distance addf(Distance,Distance);
       friend Distance subf(Distance,Distance);
};

Distance addf(Distance obj1,Distance obj2)
{
    Distance obj3;

    int c1=obj1.m*100+obj1.cm;
    int c2=obj2.m*100+obj2.cm;
     
    obj3.m=(c1+c2)/100;
    obj3.cm=(c1+c2)%100;

    return obj3;
}
Distance subf(Distance obj1,Distance obj2)
{
    Distance obj3;

    int c1=obj1.m*100+obj1.cm;
    int c2=obj2.m*100+obj2.cm;
     
    obj3.m=(c1+c2)/100;
    obj3.cm=(c1+c2)%100;
    
    return obj3;
}
int main()
{
    Distance d1,d2,d3;
    int meter ,centimeter;
    int choice;
    cout<<"Distance using member and friend function";
    cout<<"\n1.addition using member function";
    cout<<"\n2.substraction using memeber function";
    cout<<"\n3.addition using friend fucntion";
    cout<<"\n 4.substraction using friend function";
    cout<<"\n5 Exit";
    cout<<"\n enter choice";
    cin>>choice;

    cout<<"Enter Distance";
    d1.getdata();

    cout<<"enter Distance";
    d2.getdata();

    switch(choice)
    {
        case 1:
               d3=d1.addm(d2);
               d3.displaydata();
               break;

        case 2:
              d3=d1.subm(d2);
              d3.displaydata();
              break;

        case 3:
              d3=addf(d1,d2);
              d3.displaydata();
              break;
        case 4:
              d3=subf(d1,d2);
              d3.displaydata();
              break;

         case 5:
               exit(0);
    }
       getch();
       return 0;                                
            
    
}