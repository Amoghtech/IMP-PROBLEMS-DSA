// C++ program to find the
// position of first rightmost
// set bit in a given number.
#include <bits/stdc++.h>
using namespace std;

// Function to find rightmost
// set bit in given number.
int getFirstSetBitPos(int n)
{
	return ffs(n);
}

// Driver function
int main()
{
	int n = 12;
	cout << getFirstSetBitPos(n) << endl;
	return 0;
}
