#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int n,small=0;
	cout<<"ENTER SIZE OF ARRAY"<<endl;
	cin>>n;
	int *p=new int[n];
	cout<<"ENTER ARRAY ELEMENTS"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<n-1;i++)
	{
		small=i;
		for(int j=i+1;j<n;j++)
		{
			if(p[j]<p[small])
			{
				small=j;
			}
		}
		if(small!=i)
		{
			swap(p[i],p[small]);
		}
	}
	cout<<"ARRAY ELEMENTS AFTER SELECTION SORTING IS"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	return 0;
}