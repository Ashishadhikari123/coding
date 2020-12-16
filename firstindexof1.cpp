#include<iostream>
using namespace std;

int main()
{
	int n,x;
	cout<<"ENTER ARRAY SIZE"<<endl;
	cin>>n;
	int *p=new int[n];
	cout<<"ENTER ELEMENTS"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		if(p[i]==1)
		{
			x=i;
		}
	}
	cout<<"FIRST OCCURANCE OF 1 Is "<<x;
	return 0;
}