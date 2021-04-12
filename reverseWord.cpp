#include<iostream>
using namespace std;

int main()
{
  string s;
  char temp;
  cin>>s;
  int j=s.length()-1;
  for(int i=0;i<s.length()/2;i++)
  {
    temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    j--;
  }
  cout<<s;
  return 0;
}
