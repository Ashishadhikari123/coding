#include<iostream>
using namespace std;
int main()
{
	int n,index;
	cout<<"enter number"<<endl;
	cin>>n;
	cout<<"enter index"<<endl;
	cin>>index;
	int x=1<<index;
	if(n&x)
		cout<<"1";
	else
		cout<<"0";
	return 0;
}