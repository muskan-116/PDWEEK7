#include <iostream>
using namespace std;
void nestedfor(int rows);
main()
{
int rows;
cout<<"enter number of rows :";
cin>>rows;
nestedfor(rows);
}
void nestedfor(int  rows)
{
for(int i=1;i<=rows;i++)
{
for(int j=1;j<=i;j++)
{
    cout<<"*";
}
cout<<endl;
}
}