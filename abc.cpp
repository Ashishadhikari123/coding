#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v)
{
	cout<<"VECTOR ELEMENTS ARE"<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}

int main()
{
	int n,x;
	cout<<"ENTER SIZE"<<endl;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		cout<<"ENTER ELEMENT "<<i+1<<endl;
		cin>>x;
		v.push_back(x);
	}
//	v.pop_back();
	cout<<"BEFORE INSERT"<<endl;
	display(v);
	vector<int> :: iterator iter=v.begin();
	v.insert(iter+1,10);
	cout<<endl<<"AFTER INSERT"<<endl;
	display(v);
	return 0;
}