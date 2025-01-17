#include <bits/stdc++.h> 
#define R 5 
#define C 4 
using namespace std; 

void diagonalOrder(int arr[][C], 
				int n, int m) 
{ 
	// we will use a 2D vector to 
	// store the diagonals of our array 
	// the 2D vector will have (n+m-1) 
	// rows that is equal to the number of 
	// diagnols 
	vector<vector<int> > ans(n + m - 1); 

	for (int i = 0; i < m; i++) 
	{ 
		for (int j = 0; j < n; j++) 
		{ 
			ans[i + j].push_back(arr[j][i]); 
		} 
	} 

	for (int i = 0; i < ans.size(); i++) 
	{ 
		for (int j = 0; j < ans[i].size(); j++) 
			cout << ans[i][j] << " "; 

		cout << endl; 
	} 
} 

// Driver Code 
int main() 
{ 
	// we have a matrix of n rows 
	// and m columns 
	int n = 5, m = 4; 
	int arr[][C] = { 
		{ 1, 2, 3, 4 }, 
		{ 5, 6, 7, 8 }, 
		{ 9, 10, 11, 12 }, 
		{ 13, 14, 15, 16 }, 
		{ 17, 18, 19, 20 }, 
	}; 
	
	// Function call 
	diagonalOrder(arr, n, m); 
	return 0; 
}
