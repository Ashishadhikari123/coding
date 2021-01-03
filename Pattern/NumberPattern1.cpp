/*
    1
   212
  32123
 4321234
543212345
*/

#include<iostream>
using namespace std;

void pattern(int n)
{
	for(int i=1;i<=n;i++)
	{
		int k=2;
		for(int j=n;j>=1;j--)
		{
			if(j<=i)
			{
				cout<<j;
			}
			else
				cout<<" ";
 		}
 		if(i>1)
 		{
 			for(int j=2;j<=i;j++)
 			{
 				cout<<k;
 				k++;
 			}
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