#include <iostream>
using namespace std;
main()
{
int number,num;
float p1=0,p2=0,p3=0,sum1=0,sum2=0,sum3=0;
cout<<"enter number : ";
cin>>number;
for(int count=1;count<=number;count++)
{
cout<<"enter number : ";
cin>>num;


if(num%2==0)
{
sum1++;

}
if(num%3==0)
{
    sum2=sum2+1;
    
}
 if (num%4==0)
{
    sum3++;
    
}
}
p1=(sum1*100)/number;
p2=(sum2*100)/number;
p3=(sum3*100)/number;
cout<<"percentage 1 :"<<p1<<"%"<<endl;
cout<<"percentage  2:"<<p2<<"%"<<endl;
cout<<"percentage  3:"<<p3<<"%"<<endl;
}