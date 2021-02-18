// C++ program for getting minimum character to be 
// added at front to make string palindrome 
#include <bits/stdc++.h> 
using namespace std; 

// returns vector lps for given string str 
vector<int> computeLPSArray(string str) 
{ 
	int M = str.length(); 
	vector<int> lps(M); 

	int len = 0; 
	lps[0] = 0; // lps[0] is always 0 

	// the loop calculates lps[i] for i = 1 to M-1 
	int i = 1; 
	while (i < M) 
	{ 
		if (str[i] == str[len]) 
		{ 
			
			lps[i] = ++len; 
			i++; 
		} 
		else // (str[i] != str[len]) 
		{ 
			// This is tricky. Consider the example. 
			// AAACAAAA and i = 7. The idea is similar 
			// to search step. 
			if (len != 0) 
			{ 
				len = lps[len-1]; 

				// Also, note that we do not increment 
				// i here 
			} 
			else // if (len == 0) 
			{ 
				lps[i] = 0; 
				i++; 
			} 
		} 
	} 
	return lps; 
} 

// Method returns minimum character to be added at 
// front to make string palindrome 
int getMinCharToAddedToMakeStringPalin(string str) 
{ 
string rev=str;
reverse(rev.begin(),rev.end());

vector<int> lps=computeLPSArray(str+"&"+rev);

return str.length()-lps.back();
} 

// Driver program to test above functions 
int main() 
{ 
	string str = "ABAA"; 
	cout << getMinCharToAddedToMakeStringPalin(str); 
	return 0; 
} 
