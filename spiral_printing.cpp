#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"ENTER SIZE"<<endl;
	cin>>n;
	int arr[n][n];
	cout<<"ENTER MATRIX ELEMENTS"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"SPIRAL PRINTING"<<endl;
	int start,end,i;
	for(start=0,end=n-1;start<=end;start++,end--)
	{
		for(i=start;i<=end;i++)
		{
			cout<<arr[start][i]<<" ";
		}
		for(i=start+1;i<=end;i++)
		{
			cout<<arr[i][end]<<" ";
		}
		for(i=end-1;i>=start;i--)
		{
			cout<<arr[end][i]<<" ";
		}
		for(i=end-1;i>=start+1;i--)
		{
			cout<<arr[i][start]<<" ";
		}
	}
	return 0;
}