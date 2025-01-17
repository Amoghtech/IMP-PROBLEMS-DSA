#include <bits/stdc++.h> 
#define R 5 
#define C 4 
using namespace std; 

bool isValid(int i, int j) 
{ 
	if (i < 0 || i >= R 
		|| j >= C || j < 0) 
		return false; 
	return true; 
} 

void diagonalOrder(int arr[][C]) 
{ 
	/* through this for loop we choose 
	each element of first column as 
	starting point and print diagonal 
	starting at it. 
	arr[0][0], arr[1][0]....arr[R-1][0] 
	are all starting points */
	for (int k = 0; k < R; k++) 
	{ 
		cout << arr[k][0] << " "; 
		
		// set row index for next point in 
		// diagonal 
		int i = k - 1; 
		
		// set column index for next point in 
		// diagonal 
		int j = 1; 

		/* Print Diagonally upward */
		while (isValid(i, j)) { 
			cout << arr[i][j] << " "; 
			i--; 
			
			// move in upright direction 
			j++; 
		} 
		cout << endl; 
	} 

	/* through this for loop we choose 
	each element of last row as starting 
	point (except the [0][c-1] it has 
	already been processed in previous 
	for loop) and print diagonal starting 
	at it. arr[R-1][0], arr[R-1][1]....arr[R-1][c-1] 
	are all starting points 
	*/

	// Note : we start from k = 1 to C-1; 
	for (int k = 1; k < C; k++) 
	{ 
		cout << arr[R - 1][k] << " "; 
		
		// set row index for next point in 
		// diagonal 
		int i = R - 2; 
		
		// set column index for next point in 
		// diagonal 
		int j = k + 1; 

		/* Print Diagonally upward */
		while (isValid(i, j)) 
		{ 
			cout << arr[i][j] << " "; 
			i--; 
			
			// move in upright direction 
			j++; 
		} 
		cout << endl; 
	} 
} 

// Driver Code 
int main() 
{ 

	int arr[][C] = { 
		{ 1, 2, 3, 4 },	 
		{ 5, 6, 7, 8 }, 
		{ 9, 10, 11, 12 }, 
		{ 13, 14, 15, 16 }, 
		{ 17, 18, 19, 20 }, 
	}; 
	diagonalOrder(arr); 
	return 0; 
}
