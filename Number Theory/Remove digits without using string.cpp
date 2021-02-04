// C++ implementation of above approach 
#include <bits/stdc++.h>
using namespace std; 

// Function to delete nth digit 
// from starting 
int deleteFromStart(int num, int n) 
{ 

	// Get the number of digits 
	int d = log10(num) + 1; 

	// Declare a variable 
	// to form the reverse resultant number 
	int rev_new_num = 0; 

	// Loop with the number 
	for (int i = 0; num != 0; i++) { 

		int digit = num % 10; 
		num = num / 10; 

		if (i == (d - n)) { 
			continue; 
		} 
		else { 

			rev_new_num = (rev_new_num * 10) + digit; 
		} 
	} 

	// Declare a variable 
	// to form the resultant number 
	int new_num = 0; 

	// Loop with the number 
	for (int i = 0; rev_new_num != 0; i++) { 

		new_num = (new_num * 10) 
				+ (rev_new_num % 10); 
		rev_new_num = rev_new_num / 10; 
	} 

	// Return the resultant number 
	return new_num; 
} 

// Function to delete nth digit 
// from ending 
int deleteFromEnd(int num, int n) 
{ 

	// Declare a variable 
	// to form the reverse resultant number 
	int rev_new_num = 0; 

	// Loop with the number 
	for (int i = 1; num != 0; i++) { 

		int digit = num % 10; 
		num = num / 10; 

		if (i == n) { 
			continue; 
		} 
		else { 

			rev_new_num = (rev_new_num * 10) + digit; 
		} 
	} 

	// Declare a variable 
	// to form the resultant number 
	int new_num = 0; 

	// Loop with the number 
	for (int i = 0; rev_new_num != 0; i++) { 

		new_num = (new_num * 10) 
				+ (rev_new_num % 10); 
		rev_new_num = rev_new_num / 10; 
	} 

	// Return the resultant number 
	return new_num; 
} 

// Driver code 
int main() 
{ 

	// Get the number 
	int num = 1234; 
	cout << "Number: " << num << endl; 

	// Get the digit number to be deleted 
	int n = 3; 
	cout << "Digit to be deleted: " << n << endl; 

	// Remove the nth digit from starting 
	cout << "Number after " << n 
		<< " digit deleted from starting: "
		<< deleteFromStart(num, n) << endl; 

	// Remove the nth digit from ending 
	cout << "Number after " << n 
		<< " digit deleted from ending: "
		<< deleteFromEnd(num, n) << endl; 

	return 0; 
} 
