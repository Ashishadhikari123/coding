#include<iostream>
using namespace std;

int main()
{
	int n,m,i=0,j=0,k=0;
	cout<<"ENTER SIZE OF ARRAY 1"<<endl;
	cin>>m;
	int arr1[m];

	cout<<"ARRAY 1 ELEMENTS"<<endl;
	for(int i=0;i<m;i++)
	{
		cin>>arr1[i];
	}

	cout<<"ENTER SIZE OF ARRAY 2"<<endl;
	cin>>n;
	int arr2[n];

	cout<<"ENTER ARRAY 2 ELEMENTS"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
	}

	i=0,j=0,k=0;
	int arr3[m+n];

	while(i<m && j<n)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k++]=arr1[i++];
		}
		else
		{
			if(arr1[i]>arr2[j])
			{
				arr3[k++]=arr2[j++];
			}
		}
	}
	while(i<m)
	{
		arr3[k++]=arr1[i++];
	}
	while(j<n)
	{
		arr3[k++]=arr2[j++];
	}
	cout<<"ELEMENTS OF ARRAY 3 ARE"<<endl;
	for(int i=0;i<n+m;i++)
	{
		cout<<arr3[i]<<" ";
	}
	return 0;
}