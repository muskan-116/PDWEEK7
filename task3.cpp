#include <iostream>
using namespace std;
void upper(int rows);
void lower(int rows);
main()
{
    int rows;
    cout<<"enter rows :";
    cin>>rows;
    upper(rows);
    lower(rows);
    
}
void upper(int rows)
{
	for (int j = 1; j <= rows; j++)
	{
		for (int s = rows; s >= j; s--)
		{
			cout << " ";
		}
		for (int i = 1; i <= j; i++)
		{
			cout << "*";
	}
		cout << endl;
	}
}
void lower(int rows)
   {
	for (int j = 1; j <= rows; j++)
	{
		for (int s = 1; s <= j; s++)
		{
			cout << " ";

		}
		for (int i = rows; i >= j; i--)
		{
			cout << "*";
		}
		cout << endl;
	}
}