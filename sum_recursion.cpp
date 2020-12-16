#include<iostream>
using namespace std;

int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	int prev=sum(n-1);
	return prev +n;
}

int main()
{
	int n;
	cout<<"ENTER THE VALUE OF N"<<endl;
	cin>>n;
	cout<<"SUM "<<sum(n);
	return 0;
}