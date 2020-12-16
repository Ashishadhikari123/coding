#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void bubbleSort(int *p,int n)
{
	for(int i=0;i<n-1;i++)
	{
		bool temp=false;
		for(int j=0;j<n-i-1;j++)
		{
			if(p[j]>p[j+1])
			{
				swap(p[j],p[j+1]);
				temp=true;
			}
		}
		if(temp==false)
		{
			break;
		}
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

	bubbleSort(p,n);

	cout<<"ARRAY ELEMENTS AFTER BUBBLE SORTING IS"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	return 0;
}