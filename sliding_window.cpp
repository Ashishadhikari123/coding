#include<iostream>
using namespace std;

int sliding_windows(int arr[],int size,int k)
{
	int max_sum=0;
	for(int i=0;i<k;i++)
	{
		max_sum+=arr[i];
	}
	int window_sum=max_sum;
	for(int i=k;i<size;i++)
	{
		window_sum+=arr[i]-arr[i-k];
		max_sum=max(max_sum,window_sum);
	}
	return max_sum;
}

int main()
{
	int size,k;
	cout<<"ENTER ARRAY SIZE"<<endl;
	cin>>size;
	int arr[size];

	cout<<"ENTER ARRAY ELEMENTS"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"ENTER THE VALUE OF k"<<endl;
  cin>>k;

	int x=sliding_windows(arr,size,k);
	cout<<"REQUIRED SUM "<<x;
	return 0;
}