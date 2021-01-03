/*
     *
    **
   ***
  ****
 *****
******
*/

#include<iostream>
using namespace std;

void pattern(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=1;j--)
		{
			if(j<=i)
				cout<<"*";
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