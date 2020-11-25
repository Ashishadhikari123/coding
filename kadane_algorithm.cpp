#include<iostream>
using namespace std;

int kadane(int arr[],int size)
{
	int max_so_far=0,max_ending_here=0;
	for(int i=0;i<size;i++)
	{
		max_so_far+=arr[i];
		if(max_so_far<0)
		{
			max_so_far=0;
		}
		else
			if(max_so_far>max_ending_here)
			{
				max_ending_here=max_so_far;
			}
	}
	return max_ending_here;
}

int main()
{
	int size;
	cout<<"ENTER ARRAY SIZE"<<endl;
	cin>>size;
	int arr[size];
	cout<<"ENTER ARRAY ELEMENTS"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int x=kadane(arr,size);
	cout<<"MAXIMUM SUBARRAY SUM "<<x;
	return 0;
}