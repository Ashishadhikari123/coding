/*

using linear search

#include<iostream>
using namespace std;

int main()
{
	int n,element;
	int first=-1,last=-1;
	cout<<"ENTER ARRAY SIZE"<<endl;
	cin>>n;
	int *p=new int [n];
	cout<<"ENTER ARRAY ELEMENTS"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	cout<<"ENTER ELEMENT"<<endl;
	cin>>element;
	for(int i=0;i<n;i++)
	{
		if(p[i]==element)
		{
			if(first==-1)
			{
				first=i;
			}
			else
			{
				last=i;
			}
		}
	}
	cout<<"FIRST OCCURANCE "<<first;
	cout<<endl<<"LAST OCCURANCE "<<last;
	return 0;
}

*/

#include<iostream>
using namespace std;

void first_occurance(int *p,int n,int element)
{
	int low=0,high=n-1;
	int res=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(p[mid]>element)
		{
			high=mid-1;	
		}
		else
			if(p[mid]<element)
			{
				low=mid+1;
			}
			else
			{
				res=mid;
				high=mid-1;
			}
	}
	if(res==-1)
	{
		cout<<"NOT FOUND"<<endl;
	}
	else
	{
		cout<<" FIRST OCCURANCE AT INDEX "<<res;
	}
}

void last_occurance(int *p,int n,int element)
{
	int res=-1,low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(p[mid]>element)
		{
			high=mid-1;
		}
		else
			if(p[mid]<element)
			{
				low=mid+1;
			}
			else
			{
				res=mid;
				low=mid+1;
			}
	}
	if(res==-1)
	{
		cout<<"NOT FOUND"<<endl;
	}
	else
	{
		cout<<" LAST OCCURANCE AT INDEX "<<res<<endl;
	}
}

int main()
{
	int n,element;
	int first=-1,last=-1;
	cout<<"ENTER ARRAY SIZE"<<endl;
	cin>>n;
	int *p=new int [n];
	cout<<"ENTER ARRAY ELEMENTS"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	cout<<"ENTER ELEMENT"<<endl;
	cin>>element;
	first_occurance(p,n,element);
	last_occurance(p,n,element);
	return 0;
}