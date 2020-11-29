#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int search,n;
	cout<<"ENTER ARRAY SIZE"<<endl;
	cin>>n;
	int *p=new int[n];
	cout<<"ENTER ARRAY ELEMENTS"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	cout<<"ENTER ELEMENT YOU WANT TO SEARCH"<<endl;
	cin>>search;

	int value=binary_search(p,p+n,search);
  if(value)
  {
    //LOWER BOUNDS RETURNS THE ADDRESS OF 
    //THAT NUMBER WHICH IS GREATER THAN OR 
    //EQUAL TO SEARCH
    auto it=lower_bound(p,p+n,search);
    cout<<"PRESENT AT INDEX "<<it-p<<endl;
  }
  else
  {
    cout<<"NOT PRESENT"<<endl;
  }
	delete[] p;
	return 0;
}