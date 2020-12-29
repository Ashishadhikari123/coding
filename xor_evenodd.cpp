#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"ENTER NUMBER"<<endl;
	cin>>n;
	if(n&1)
	{
		cout<<"NUMBER IS ODD";
	}
	else
	{
		cout<<"NUMBER IS EVEN";
	}
	return 0;
}