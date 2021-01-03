/*
****
****
****
****
****
*/
#include<iostream>
using namespace std;

void pattern(int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"*";
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