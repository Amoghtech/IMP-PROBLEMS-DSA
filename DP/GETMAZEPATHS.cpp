// C++ Program to find n-th stair using step size
// 1 or 2 or 3.
#include <bits/stdc++.h>
using namespace std;

vector<string> findmazepaths(int sr, int sc, int dr, int dc)
{
    if (sr == dr && sc == dc)
    {
        vector<string> v;
        v.push_back("");
        return v;
    }

    else
    {
        vector<string> hpaths;
        vector<string> vpaths;
        if (sc < dc)
        {
            hpaths = findmazepaths(sr, sc + 1, dr, dc);
        }

        if (sr < dr)
        {
            vpaths = findmazepaths(sr + 1, sc, dr, dc);
        }
        vector<string> v;
        for (string x : hpaths)
        {
            v.push_back("h" + x);
        }
        for (string x : vpaths)
        {
            v.push_back("v" + x);
        }
        return v;
    }
}

// Driver code
int main()
{

    vector<string> x = findmazepaths(1, 1, 3, 3);
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << endl;
    }
    return 0;
}
