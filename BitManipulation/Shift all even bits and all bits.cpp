// If we take a closer look at the example, we can observe that we basically need to right shift (>>) all even bits (In the above example, even bits of 23 are highlighted) by 1 so that they become odd bits (highlighted in 43), and left shift (<<) all odd bits by 1 so that they become even bits. The following solution is based on this observation. The solution assumes that input number is stored using 32 bits.

// Let the input number be x
// 1) Get all even bits of x by doing bitwise and of x with 0xAAAAAAAA. The number 0xAAAAAAAA is a 32 bit number with all even bits set as 1 and all odd bits as 0.
// 2) Get all odd bits of x by doing bitwise and of x with 0x55555555. The number 0x55555555 is a 32 bit number with all odd bits set as 1 and all even bits as 0.
// 3) Right shift all even bits.
// 4) Left shift all odd bits.
// 5) Combine new even and odd bits and return.


// C++ program to swap even and 
// odd bits of a given number 
#include <bits/stdc++.h> 
using namespace std; 

// Function to swap even 
// and odd bits 
unsigned int swapBits(unsigned int x) 
{ 
	// Get all even bits of x 
	unsigned int even_bits = x & 0xAAAAAAAA; 

	// Get all odd bits of x 
	unsigned int odd_bits = x & 0x55555555; 

	even_bits >>= 1; // Right shift even bits 
	odd_bits <<= 1; // Left shift odd bits 

	return (even_bits | odd_bits); // Combine even and odd bits 
} 

// Driver code 
int main() 
{ 
	unsigned int x = 23; // 00010111 

	// Output is 43 (00101011) 
	cout<<swapBits(x); 

	return 0; 
} 

// This code is contributed by rathbhupendra 
