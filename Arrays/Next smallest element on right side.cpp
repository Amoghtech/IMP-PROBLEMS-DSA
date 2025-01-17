// A Stack based C++ program to find next 
// smaller element for all array elements 
// in same order as input. 
#include <bits/stdc++.h> 
using namespace std; 

/* prints element and NSE pair for all 
elements of arr[] of size n */
void printNSE(int arr[], int n) 
{ 
	stack<int> s; 
	unordered_map<int, int> mp; 

	/* push the first element to stack */
	s.push(arr[0]); 
	

	// iterate for rest of the elements 
	for (int i = 1; i < n; i++) { 

		if (s.empty()) { 
			s.push(arr[i]); 
			continue; 
		} 

		/* if stack is not empty, then 
	pop an element from stack. 
	If the popped element is smaller 
	than next, then 
	a) print the pair 
	b) keep popping while elements are 
	smaller and stack is not empty */
		while (s.empty() == false && s.top() > arr[i]) { 
			mp[s.top()] = arr[i]; 
			s.pop(); 
		} 

		/* push next to stack so that we can find 
	next smaller for it */
		s.push(arr[i]); 
	} 

	/* After iterating over the loop, the remaining 
elements in stack do not have the next smaller 
element, so print -1 for them */
	while (s.empty() == false) { 
		mp[s.top()] = -1; 
		s.pop(); 
	} 

	for (int i=0; i<n; i++) 
	cout << arr[i] << " ---> " << mp[arr[i]] << endl; 
} 

/* Driver program to test above functions */
int main() 
{ 
	int arr[] = { 11, 13, 21, 3 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	printNSE(arr, n); 
	return 0; 
}
