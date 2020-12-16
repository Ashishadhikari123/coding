#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if(a==0)
		return b;
	gcd(b%a,a);
}

int main()
{
	int a,b;
	cout<<"ENTER TWO NUMBERS"<<endl;
	cin>>a>>b;
	cout<<"GCD OF "<<a<<" AND "<<b<<" IS "<<gcd(a,b);
	return 0;
}