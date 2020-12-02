#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,choice=0;
	cout<<"ENTER ARRAY SIZE"<<endl;
	cin>>n;
	int *p=new int[n];
	cout<<"ENTER ARRAY ELEMENTS"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	cout<<"ENTER 1 FOR SORTING IN ASCENDING ORDER"<<endl;
	cout<<"ENTER 2 FOR SORTING IN DESCENDING ORDER"<<endl;
	cin>>choice;
	if(choice==1)
	{
		sort(p,p+n);
	}
	else
		if(choice==2)
		{
			sort(p,p+n,greater<int>());
		}
		else
		{
			cout<<"Wrong choice";
			delete[] p;
			return 0;
		}
	cout<<"ARRAY ELEMENTS AFTER SORTING"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	return 0;
}