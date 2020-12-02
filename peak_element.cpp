#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"ENTER ARRAY SIZE"<<endl;
	cin>>n;
	int *p=new int[n];
	cout<<"ENTER ELEMENTS"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(int i=1;i<n-1;i++)
	{
		if((p[i]>p[i-1]) && (p[i]>p[i+1]))
		{
			cout<<p[i]<<" ";
		}
	}
	return 0;
}