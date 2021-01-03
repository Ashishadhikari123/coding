/*
1
23
456
78910
1112131415
*/

#include<iostream>
using namespace std;

void pattern(int n)
{
	int x=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<x;
			x++;
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