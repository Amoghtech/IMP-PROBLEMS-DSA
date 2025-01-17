// C++ program to print all possible sentences from a list of word list
#include <iostream>
#include <string>

#define R 3
#define C 3
using namespace std;

// A recursive function to print all possible sentences that can be formed
// from a list of word list
void printUtil(string arr[R][C], int m, int n, string output[R])
{
    output[m] = arr[m][n];

    if (m == R-1)
    {
        for (int i = 0; i < R; i++)
        {
            cout << output[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < C; i++)
    {
        if(arr[m+1][i]!="")
        printUtil(arr, m + 1, i, output);
    }
}

// Driver program to test above functions
int main()
{
    string arr[R][C] = {{"you", "we"},
                        {"have", "are"},
                        {"sleep", "eat", "drink"}};

    string output[R];
    for (int i = 0; i < C; i++)
        if (arr[0][i] != "")
            printUtil(arr, 0, i, output);

    return 0;
}
