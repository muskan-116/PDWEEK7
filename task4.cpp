#include <iostream>
using namespace std;
void amplify(int number);
main()
{
int number;
cout<<"enter number  of series :";
cin>>number;
amplify( number);
}
void amplify(int number)
{
    int count=0 ;
while(count<number)
{
    count++;
if(count%4==0)
{
    cout<<count*10<<",";
    continue;
}
cout<<count<<",";

}



}