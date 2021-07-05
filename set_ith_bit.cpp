#include<iostream>
using namespace std;
int main()
{
	int n,index;
	cout<<"enter number"<<endl;
	cin>>n;
	cout<<"enter index"<<endl;
	cin>>index;
	int x=(1<<index);
	n=n|x;
	cout<<"after setting ith bit number becomes "<<n;
	return 0;
}