#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	int prev=factorial(n-1);
	return prev*n;
}

int main()
{
	int n;
	cout<<"ENTER THE VALUE OF N"<<endl;
	cin>>n;
	cout<<"Factorial "<<factorial(n)<<endl;
	return 0;
}