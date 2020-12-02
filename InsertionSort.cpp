#include<iostream>
using namespace std;

void insertion_sort(int *p,int n)
{
	int j,temp;
	for(int i=1;i<n;i++)
	{
		temp=p[i];
		j=i-1;
		while(j>=0 && p[j]>temp)
		{
			p[j+1]=p[j];
			j--;
		}
		p[j+1]=temp;
	}
}

void display(int *p,int n)
{
	cout<<"ARRAY ELEMENTS AFTER INSERTION SORT ARE"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
}

int main()
{
	int n;
	cout<<"ENTER ARRAY SIZE"<<endl;
	cin>>n;
	int *p=new int[n];
	cout<<"ENTER ARRAY ELEMENTS"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	insertion_sort(p,n);
	display(p,n);
	return 0;
}