/*
Given an unsorted array of size n. Array elements are in the range from 1 to n. One number from set {1, 2, …n} is missing and one number occurs twice in the array. Our task is to find these two numbers.
*/

#include<iostream>
using namespace std;

int main()
{
  int n,x;
  cout<<"ENTER ARRAY SIZE"<<endl;
  cin>>n;
  cout<<"ENTER ARRAY ELEMENTS"<<endl;
  int *p=new int[n]{0};
  for(int i=1;i<=n;i++)
  {
    cin>>x;
    p[x]++;
  }
  for(int i=1;i<=n;i++)
  {
    if(p[i]==0)
    {
      cout<<endl<<"ELEMENT NOT PRESENT IS "<<i;
    }
    if(p[i]==2)
    {
      cout<<endl<<"ELEMENT WITH FREQUENCY 2 IS "<<i;
    }
  }
  return 0;
}