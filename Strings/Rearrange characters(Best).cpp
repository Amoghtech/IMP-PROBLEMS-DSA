// C++ program to rearrange characters in a string
// so that no two adjacent characters are same.
#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;

struct Key
{
    int freq; // store frequency of character
    char ch;

    // function for priority_queue to store Key
    // according to freq
    bool operator<(const Key &k) const
    {
        return freq < k.freq;
    }
};

// Function to rearrange character of a string
// so that no char repeat twice
void rearrangeString(string str)
{
    int n = str.length();
    int count[MAX_CHAR] = {0};
    for (int i = 0; i < n; i++)
    {
        count[str[i] - 'a']++;
    }
    priority_queue<Key> pq;
    for (char c = 'a'; c <= 'z'; c++)
    {
        if(count[c-'a'])
        pq.push({count[c - 'a'], c});
    }

    Key prev{-1, '#'};
    string x = "";
    while (pq.size() > 0)
    {
        Key t = pq.top();
        pq.pop();
        x += t.ch;
        if (prev.freq > 0)
        {
            pq.push(prev);
        }

        t.freq--;
        prev = t;
    }
    if (n != x.length())
    {
        cout << "Not possible to form the string" << endl;
    }
    else
    {
        cout << x << endl;
    }
}

// Driver program to test above function
int main()
{
    string str = "bbbaa";
    rearrangeString(str);
    return 0;
}
