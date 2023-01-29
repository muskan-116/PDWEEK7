#include <iostream>
using namespace std;
void pattern(int rows);
main()
{
    int rows;
    cout<<"enter rows :";
    cin>>rows;
    pattern(rows);
}
void pattern(int rows)
{
    for(int j=1;j<=rows;j++)
    {
       for(int i=1;i<=j;i++) 
       {
        cout<<"*";
       }
       for(int s=rows;s>=j;s--)
       {
        cout<<" ";
       }
       for(int s=rows;s>=j;s--)
       {
        cout<<" ";
       }
     for(int i=1;i<=j;i++) 
        {
        cout<<"*";
         }
        cout<<endl;



    }
}