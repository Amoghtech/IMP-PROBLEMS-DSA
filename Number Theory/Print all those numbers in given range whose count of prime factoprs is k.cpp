// CPP program to count all those numbers in 
// given range whose count of prime factors 
// is k 
#include <bits/stdc++.h> 
using namespace std; 

int printKPFNums(int A, int B, int K) 
{ 
	// Count prime factors of all numbers 
	// till B. 
	bool prime[B+1] = { true }; 
	int p_factors[B+1] = { 0 }; 
	p_factors[1]=1;
	for (int p = 2; p <= B; p++) 
		if (p_factors[p] == 0) 
			for (int i = p; i <= B; i += p) 
				p_factors[i]++; 


int max=-32767;
	// Print all numbers with k prime factors 
	for (int i = A; i <= B; i++) 
		if (p_factors[i] == K) 
			{
			   if(max<i){
			       max=i;
			   } 
			}

    return max;
} 

// Driver code 
int main() 
{ 
	int A = 1, B = 1, K = 1; 
	cout<<printKPFNums(A, B, K); 
	return 0; 
} 
