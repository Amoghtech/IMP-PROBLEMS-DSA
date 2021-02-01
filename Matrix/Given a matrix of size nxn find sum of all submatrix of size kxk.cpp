// A simple C++ program to find sum of all subsquares of size k x k
#include <iostream>
using namespace std;

// Size of given matrix
#define n 5

// A simple function to find sum of all sub-squares of size k x k
// in a given square matrix of size n x n
void printSumSimple(int mat[][n], int k)
{
    // k must be smaller than or equal to n
    if (k > n)
        return;

    for (int i = 0; i < n - k + 1; i++)
    { //Starting row
        for (int j = 0; j < n - k + 1; j++)
        { //Starting column
            int sum = 0;
            for (int p = i; p < k + i; p++)
            {
                for (int q = j; q < k + j; q++)
                {
                    sum += mat[p][q];
                }
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}

// Driver program to test above function
int main()
{
    int mat[n][n] = {
        {1, 1, 1, 1, 1},
        {2, 2, 2, 2, 2},
        {3, 3, 3, 3, 3},
        {4, 4, 4, 4, 4},
        {5, 5, 5, 5, 5},
    };
    int k = 3;
    printSumSimple(mat, k);
    return 0;
}
