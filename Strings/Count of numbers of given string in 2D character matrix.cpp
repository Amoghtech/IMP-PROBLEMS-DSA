// C++ code for finding count
// of string in a given 2D
// character array.
#include <bits/stdc++.h>
using namespace std;

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(*a))

// utility function to search
// complete string from any
// given index of 2d char array
int solve(int i,
          int j, string input[], string needle,
          int size, int indx)
{
    int found = 0;

    if (i >= 0 && i <= 6 && j >= 0 &&
        j <= j && needle[indx] == input[i][j])
    {
        char match = needle[indx];
        indx += 1;

        input[i][j] = 0;

        if (indx == size)
        {
            found = 1;
        }
        else
        {

            // through Backtrack searching
            // in every directions
            found += solve(i,
                           j + 1, input, needle,
                           size, indx);
            found += solve(i,
                           j - 1, input, needle,
                           size, indx);
            found += solve(i + 1,
                           j, input, needle,
                           size, indx);
            found += solve(i - 1,
                           j, input, needle,
                           size, indx);
        }
        input[i][j] = match;
    }
    return found;
}

// Driver code
int main()
{
    string needle = "MAGIC";
    string input[] = {"BBABBM",
                      "CBMBBA",
                      "IBABBG",
                      "GOZBBI",
                      "ABBBBC",
                      "MCIGAM"};
    int count = 0;
    int size = needle.length();
    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < 6; j++)
        {
            count +=solve(i, j, input, needle, size, 0);
        }
    }

    cout << "count: " << count << endl;
    return 0;
}
