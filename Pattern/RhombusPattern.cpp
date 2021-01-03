/*
    *****
   *****
  *****
 *****
*****
*/

#include<iostream>
using namespace std;

void pattern(int n)
{
	int spaces=n-1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=spaces;j++)
		{
			cout<<" ";
 		}
 		for(int j=1;j<=n;j++)
 		{
 			cout<<"*";
 		}
 		cout<<endl;
 		spaces-=1;
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