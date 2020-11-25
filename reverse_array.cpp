#include<iostream>
using namespace std;

int main()
{
	int size,k,temp=0;
	cout<<"ENTER ARRAY SIZE"<<endl;
	cin>>size;
	k=size-1;
	int arr[size];
	cout<<"ENTER ARRAY ELEMENTS"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[k];
		arr[k]=temp;
		k--;
	}
	cout<<"ARRAY AFTER REVERSING"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}