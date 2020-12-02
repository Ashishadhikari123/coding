#include<iostream>
using namespace std;

int main()
{
  int n,x;
  cout<<"ENTER ARRAY SIZE"<<endl;
  cin>>n;
  cout<<"ENTER ARRAY ELEMENTS"<<endl;
  int *p=new int[n]{0};
  for(int i=0;i<n;i++)
  {
    cin>>p[i];
  }
  cout<<"ENTER ELEMENT"<<endl;
  cin>>x;
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(p[i]==x)
    {
      count++;
    }
  }
  cout<<count;
  return 0;
}