// C++ implementation of the approach
#include<bits/stdc++.h>
using namespace std;

// Return the maximum water that can be stored
int maxWater(int height[], int n)
{

	// To store the maximum water so far
	int maximum = 0;

	// Both the pointers are pointing at the first
	// and the last buildings respectively
	int i = 0, j = n - 1;

	// While the water can be stored between
	// the currently chosen buildings
	while (i < j)
	{

		// Update maximum water so far and increment i
		if (height[i] < height[j])
		{
			maximum = max(maximum, (j - i - 1) * height[i]);
			i++;
		}

		// Update maximum water so far and decrement j
		else if (height[j] < height[i]) 
		{
			maximum = max(maximum, (j - i - 1) * height[j]);
			j--;
		}

		// Any of the pointers can be updated (or both)
		else
		{
			maximum = max(maximum, (j - i - 1) * height[i]);
			i++;
			j--;
		}
	}

	return maximum;
}


// Driver code
int main()
{

	int height[] = { 2, 1, 3, 4, 6, 5 };

	int n = sizeof(height)/sizeof(height[0]);

	cout<<(maxWater(height, n));
}

// This code is contributed by CrazyPro
