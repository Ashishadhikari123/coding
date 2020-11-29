#include<iostream>
using namespace std;

int brute_force_approach(int arr[],int n)
{
	int left_sum=0,right_sum=0;
	for(int i=0;i<n;i++)
	{
		left_sum=0;
		for(int j=0;j<i;j++)
		{
			left_sum+=arr[j];
		}
		right_sum=0;
		for(int j=i+1;j<n;j++)
		{
			right_sum+=arr[j];
		}
		if(left_sum==right_sum)
		{
			return i;
		}
	}
	return -1;
}

int efficient(int arr[],int n,int sum)
{
	int left_sum=0;
	for(int i=0;i<n;i++)
	{
		sum-=arr[i];
		if(left_sum==sum)
		{
			return i;
		}
		left_sum+=arr[i];
	}
	return -1;
}

int main()
{
	int n,sum=0;
	cout<<"ENTER ARRAY SIZE"<<endl;
	cin>>n;
	int arr[n];

	cout<<"ENTER ARRAY ELEMENTS"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	char choice;
	cout<<"ENTER (a or A) for brute force approach(T.C. O(n*2) )";
	cout<<endl<<"ENTER (b or B) for efficient approach(T.C. O(n) )"<<endl;
	cin>>choice;
	if(choice=='a' || choice=='A')
	{
		cout<<brute_force_approach(arr,n);
	}
	else
		if(choice=='b' || choice=='B')
		{
			cout<<efficient(arr,n,sum);
		}
		else
		{
			cout<<"WRONG INPUT";
		}
	return 0;
}