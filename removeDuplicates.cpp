#include<iostream>
using namespace std;

int main()
{
    int n,j=0;
    cout<<"Enter array size"<<endl;
    cin>>n;
    if(n==0)
        return 0;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            arr[j]=arr[i];
            j++;
        }
    }
    arr[j++]=arr[n-1];
    cout<<"Array elements after removing duplicates elements"<<endl;
    for(int i=0;i<j;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
