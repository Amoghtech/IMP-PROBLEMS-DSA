// C++ implementation of the above approach
#include<bits/stdc++.h>
using namespace std;

bool compareTo(pair<int, int> p1,
			pair<int, int> p2)
{
	return p1.second < p2.second;
}

// Return the maximum water that
// can be stored
int maxWater(int height[], int n)
{
	
	// Make pairs with indices
	pair<int, int> pairs[n];
	for(int i = 0; i < n; i++)
		pairs[i] = make_pair(i, height[i]);
		
	// Sort array based on heights
	sort(pairs, pairs + n, compareTo);	 
	
	// To store the min and max index so far
	// from the right
	int minIndSoFar = pairs[n - 1].first;
	int maxIndSoFar = pairs[n - 1].first;
	int maxi = 0;
	
	for(int i = n - 2; i >= 0; i--)
	{
		
		// Current building paired with 
		// the building greater in height
		// and on the extreme left
		int left = 0;
		if (minIndSoFar < pairs[i].first)
		{
			left = (pairs[i].second *
				(pairs[i].second - 
						minIndSoFar - 1));
		}

		// Current building paired with 
		// the building greater in height
		// and on the extreme right
		int right = 0;
		if (maxIndSoFar > pairs[i].first)
		{
			right = (pairs[i].second *
						(maxIndSoFar - 
					pairs[i].first - 1));
		}

		// Maximum so far
		maxi = max(left, max(right, maxi));

		// Update the maximum and minimum so far
		minIndSoFar = min(minIndSoFar, 
						pairs[i].first);
		maxIndSoFar = max(maxIndSoFar, 
						pairs[i].first);
	}
	return maxi;
}

// Driver code
int main( )
{
	int height[] = { 2, 1, 3, 4, 6, 5 };
	int n = sizeof(height) / sizeof(height[0]);
	
	cout << maxWater(height, n);
}

// This code is contributed by manupathria
