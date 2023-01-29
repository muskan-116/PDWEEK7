#include <iostream>
using namespace std;
int  triangularSeries(int number);
main()
{
int number,result;
cout<<"enter number :";
cin>>number;
result=triangularSeries( number);
cout<<"series is :"<<result;
}
int triangularSeries(int number)
{
    int sum=0;
    for(int count=1;count<=number;count++)
    {

        sum = sum +count;
    }
    return sum;
}









