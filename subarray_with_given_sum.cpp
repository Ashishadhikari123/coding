#include<iostream>
using namespace std;

void subarray(int *p,int n,int sum)
{
	int current_sum=p[0];
	int i,start=0;
	for(int i=1;i<n;i++)
	{
		current_sum+=p[i];
		while(current_sum>sum && start<i)
		{
			current_sum-=p[start];
			start++;
		}
		if(current_sum==sum)
		{
			cout<<start<<" "<<i;
      return ;
		}
	}
	cout<<"-1";
}
int main()
{
	int n,sum;
	cout<<"ENTER ARRAY SIZE"<<endl;
	cin>>n;
	int *p=new int[n];
	cout<<"ENTER ARRAY ELEMENTS"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	cout<<"ENTER REQUIRED SUM"<<endl;
	cin>>sum;
	subarray(p,n,sum);
	delete[] p;
	return 0;
}