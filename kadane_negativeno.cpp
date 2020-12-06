#include<iostream>
using namespace std;

void function1(int *p,int n)
{
	int largest=p[0];
	for(int i=1;i<n;i++)
	{
		if(p[i]>largest)
		{
			largest=p[i];
		}
	}
	cout<<"MAXIMUM CONTIGUOUS SUBARRAY SUM IS "<<largest;
}

void function2(int *p,int n)
{
	int sum_so_far=0,sum_ending_here=0;
	for(int i=0;i<n;i++)
	{
		sum_ending_here+=p[i];
		if(sum_ending_here<0)
		{
			sum_ending_here=0;
		}
		else
			if(sum_ending_here>sum_so_far)
			{
				sum_so_far=sum_ending_here;
			}
	}
	cout<<"MAXIMUM CONTIGUOUS SUBARRAY SUM IS "<<sum_so_far;
}

int main()
{
	int n,flag=0;
	cout<<"ENTER ARRAY SIZE"<<endl;
	cin>>n;
	int *p=new int[n];
	cout<<"ENTER ARRAY ELEMENTS"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		if(p[i]>=0)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		function1(p,n);
	}
	else
	{
		function2(p,n);
	}
	return 0;
}