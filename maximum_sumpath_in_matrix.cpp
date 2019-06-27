// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Input matrix 
int n = 4, m = 4; 
int arr[4][4] = { { 1, 0, 3, -1 }, 
				{ 3, 5, 1, -2 }, 
				{ -2, 0, 1, 1 }, 
				{ 2, 1, -1, 1 } }; 

// DP matrix 
int cache[5][5][5]; 

// Function to return the sum of the cells 
// arr[i1][j1] and arr[i2][j2] 
int sum(int i1, int j1, int i2, int j2) 
{ 
	if (i1 == i2 && j1 == j2) { 
		return arr[i1][j1]; 
	} 
	return arr[i1][j1] + arr[i2][j2]; 
} 

// Recursive function to return the 
// required maximum cost path 
int maxSumPath(int i1, int j1, int i2) 
{ 

	// Column number of second path 
	int j2 = i1 + j1 - i2; 

	// Base Case 
	if (i1 >= n || i2 >= n || j1 >= m || j2 >= m) { 
		return 0; 
	} 

	// If already calculated, return from DP matrix 
	if (cache[i1][j1][i2] != -1) { 
		return cache[i1][j1][i2]; 
	} 
	int ans = INT_MIN; 

	// Recurring for neighbouring cells of both paths together 
	ans = max(ans, maxSumPath(i1 + 1, j1, i2 + 1) + sum(i1, j1, i2, j2)); 
	ans = max(ans, maxSumPath(i1, j1 + 1, i2) + sum(i1, j1, i2, j2)); 
	ans = max(ans, maxSumPath(i1, j1 + 1, i2 + 1) + sum(i1, j1, i2, j2)); 
	ans = max(ans, maxSumPath(i1 + 1, j1, i2) + sum(i1, j1, i2, j2)); 

	// Saving result to the DP matrix for current state 
	cache[i1][j1][i2] = ans; 

	return ans; 
} 

// Driver code 
int main() 
{ 
	memset(cache, -1, sizeof(cache)); 
	cout << maxSumPath(0, 0, 0); 

	return 0; 
} 
