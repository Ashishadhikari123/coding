// C++ implementation to find the index of first 
// '1' in a sorted array of 0's and 1's 
#include <bits/stdc++.h> 
using namespace std; 

// function to find the index of first '1' 
// binary search technique is applied 
int indexOfFirstOne(int arr[], int low, int high) 
{ 
	while (low <= high) { 
		int mid = (low + high) / 2; 

		// if true, then 'mid' is the index of first '1' 
		if (arr[mid] == 1 && (mid == 0 || arr[mid - 1] == 0)) 
			return mid; 

		// first '1' lies to the left of 'mid' 
		else if (arr[mid] == 1) 
			high = mid - 1; 

		// first '1' lies to the right of 'mid' 
		else
			low = mid + 1; 
	} 

	// 1's are not present in the array 
	return -1; 
} 

// Driver program to test above 
int main() 
{ 
	int n;
	cout<<"ENTER ARRAY SIZE"<<endl;
  cin>>n;
  int arr[n];
  cout<<"ENTER ARRAY ELEMENTS"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  } 
	int x=indexOfFirstOne(arr, 0, n - 1);
  if(x>=0)
  {
    cout<<"INDEX OF 1 IS "<<x;
  } 
  else
  {
    cout<<"INDEX NOT FOUND";
  }
	return 0; 
} 
