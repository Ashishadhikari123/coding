// C++ program to rotate an array by 
// d elements 
#include <bits/stdc++.h> 
using namespace std; 

/*Fuction to get gcd of a and b*/
int gcd(int a, int b) 
{ 
	if (a == 0) 
		return b; 

	else
		return gcd(b%a, a); 
} 

/*Function to left rotate arr[] of siz n by d*/
void leftRotate(int arr[], int d, int n) 
{ 
	/* To handle if d >= n */
	d = d % n; 
	int g_c_d = gcd(d, n); 
	for (int i = 0; i < g_c_d; i++) { 
		/* move i-th values of blocks */
		int temp = arr[i]; 
		int j = i; 

		while (1) { 
			int k = j + d; 
			if (k >= n) 
				k = k - n; 

			if (k == i) 
				break; 

			arr[j] = arr[k]; 
			j = k; 
		} 
		arr[j] = temp; 
	} 
} 

// Function to print an array 
void printArray(int arr[], int size) 
{ 
	for (int i = 0; i < size; i++) 
		cout << arr[i] << " "; 
} 

/* Driver program to test above functions */
int main() 
{ 
	int n,d;
	cout<<"ENTER ARRAY SIZE"<<endl;
	cin>>n;
	int *arr=new int[n];
	cout<<"ENTER ARRAY ELEMENTS"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"ENTER THE VALUE OF d"<<endl;
	cin>>d;

	// Function calling 
	leftRotate(arr, d, n); 
	printArray(arr, n); 

	return 0; 
} 
