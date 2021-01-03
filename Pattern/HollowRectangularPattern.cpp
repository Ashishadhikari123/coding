/*
****
*  *
*  *
*  *
****
*/
#include<iostream>
using namespace std;

void pattern(int r,int c)
{
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(i==1 || i==r)
				cout<<"*";
			else
				if(j==1 || j==c)
					cout<<"*";
				else
					cout<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int row,col;
	cout<<"ENTER NUMBER OF ROWS AND COLUMNS"<<endl;
	cin>>row>>col;
	pattern(row,col);
	return 0;
}