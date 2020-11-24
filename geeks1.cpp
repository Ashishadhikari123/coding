#include<iostream>
using namespace std;

int main()
{
	int n,j=0;
	cout<<"ENTER ARRAY SIZE"<<endl;
	cin>>n;
	int arr[n];
	cout<<"ENTER ARRAY ELEMENTS"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<arr[0]<<" ";
	if(n==1)
		{return 0;}
	else
	{
		for(int i=1;i<n;i++)
		{
			if(arr[i]!=arr[j])
			{
				arr[++j]=arr[i];
			}
		}
//		cout<<"NEW ARRAY SIZE IS "<<j<<endl;
		for(int i=1;i<=j;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	cout<<"NEW ARRAY SIZE IS "<<++j<<endl;
	return 0;
}