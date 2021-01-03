/*
    1
   2 3
  4 5 6
 7 8 9 10
11 12 13 14 15
*/

#include<iostream>
using namespace std;

void pattern(int n)
{
	int count=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=1;j--)
		{
			if(j<=i)
			{
				cout<<count<<" ";
				count++;
			}
			else
				cout<<" ";
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