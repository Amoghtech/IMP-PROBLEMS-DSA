// C++ implementation of above approach 
#include <iostream> 
using namespace std; 

// Sum of XOR of all K length 
// sub-array of an array 
int FindXorSum(int arr[], int k, int n) 
{ 
	// If the length of the array is less than k 
	if (n < k) 
		return 0; 

	// Array that will store xor values of 
	// subarray from 1 to i 
	int x[n] = { 0 }; 
	int result = 0; 

	// Traverse through the array 
	for (int i = 0; i < n; i++) { 

		// If i is greater than zero, store 
		// xor of all the elements from 0 to i 
		if (i > 0) 
			x[i] = x[i - 1] ^ arr[i]; 

		// If it is the first element 
		else
			x[i] = arr[i]; 

		// If i is greater than k 
		if (i >= k - 1) { 
			int sum = 0; 

			// Xor of values from 0 to i 
			sum = x[i]; 

			// Now to find subarray of length k 
			// that ends at i, xor sum with x[i-k] 
			if (i - k > -1) 
				sum ^= x[i - k]; 

			// Add the xor of elements from i-k+1 to i 
			result += sum; 
		} 
	} 

	// Return the resultant sum; 
	return result; 
} 

// Driver code 
int main() 
{ 
int n;
cin>>n;
int a[n]={0};
for(int i=0;i<n;i++)
cin>>a[i];

int q;
cin>>q;
while(q--){
    int k;
    cin>>k;
    int c=0;
    for(int i=1;i<=k;i++){
        c+= FindXorSum(a, i, n) ;
    }
    cout<<c<<endl;
}

	return 0; 
} 
