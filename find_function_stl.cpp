//THIS IS THE IMPLEMENTATION OF FIND FUNCTION.

#include<iostream>
#include<algorithm>//HEADER FILE FOR FIND FUNCTION
using namespace std;

int main()
{
  int n;
  cout<<"ENTER SIZE"<<endl;
  cin>>n;
  int arr[n];
  cout<<"ENTER ELEMENTS"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int index,key;
  cout<<"ENTER ELEMENT YOU WANT TO SEARCH"<<endl;
  cin>>key;
  auto p=find(arr,arr+n,key);
  index=p-arr;
  if(index==n)
  {
    cout<<"ELEMENT NOT FOUND"<<endl;
    cout<<index<<endl;
  }
  else
  {
    cout<<"ELEMENT FOUND AT INDEX "<<index;
  }
  return 0;
}