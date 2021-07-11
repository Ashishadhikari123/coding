#include<iostream>
using namespace std;

int binary(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=low+((high-low)/2);
		if(arr[mid]==x)
		{
			return mid;
		}
		else
		{
			if(arr[mid]>x)
				high=mid-1;
			else
				if(arr[mid]<x)
					low=mid+1;
		}
	}
	return -1;
}

int main()
{
	int n,x;
	cout<<"enter array size\n";
	cin>>n;
	int arr[n];
	cout<<"enter array elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter element you want to search\n";
	cin>>x;
	int res=binary(arr,n,x);
	if(res!=-1)
		cout<<"Element found at index "<<binary(arr,n,x);
	else
		cout<<"element not found";
	return 0;
	
}