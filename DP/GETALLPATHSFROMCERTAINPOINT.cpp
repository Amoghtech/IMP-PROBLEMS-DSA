// C++ Program to find n-th stair using step size
// 1 or 2 or 3.
#include <bits/stdc++.h>
using namespace std;

vector<string> findstep(int n)
{
    if (n == 0)
    {
        vector<string> v;
        v.push_back("");
        return v;
    }

    else if (n < 0)
    {
        vector<string> v;
        return v;
    }

    else
    {
        vector<string> p1 = findstep(n - 1);
        vector<string> p2 = findstep(n - 2);
        vector<string> p3 = findstep(n - 3);
        vector<string> v;
        for (string x : p1)
        {
            v.push_back("1" + x);
        }
        for (string x : p2)
        {
            v.push_back("2" + x);
        }
        for (string x : p3)
        {
            v.push_back("3" + x);
        }
        return v;
    }
}

// Driver code
int main()
{

    int n = 4;
    vector<string> x = findstep(n);
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << endl;
    }
    return 0;
}
