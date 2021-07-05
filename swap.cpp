#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"enter 2 numbers\n";
	cin>>a>>b;
	cout<<"before swapping value of a = "<<a<<" value of b = "<<b<<endl;
	a=a+b-(b=a);
	cout<<"after swapping value of a = "<<a<<" value of b = "<<b;
	return 0;
}