/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
*/

#include<iostream>
using namespace std;

void pattern(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i+j%2==0)
				cout<<"1";
			else
				cout<<"0";
 		}
		cout<<endl;
	}
}

int main()
{
	int n;
	cout<<"ENTER The Value of n"<<endl;
	cin>>n;
	pattern(n);
	return 0;
}