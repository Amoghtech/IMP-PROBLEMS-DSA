class Solution
{
public:
    void remove(string s, int index, int ocount, int ccount, string &expression, int removecount, vector<string> &v, int mine)
    {
        if (index == s.length())
        {
            if (ocount == ccount)
            {
                if (removecount <= mine)
                {
                    if (removecount < mine)
                    {
                        // v.clear();

                        mine = removecount;
                    }

                    v.push_back(expression);
                }
            }
            return;
        }
        else
        {
            char x = s[index];
            if (x != '(' && x != ')')
            {
                expression.push_back(x);
                remove(s, index + 1, ocount, ccount, expression, removecount, v, mine);
                expression.pop_back();
            }
            else
            {
                remove(s, index + 1, ocount, ccount, expression, removecount + 1, v, mine);
                expression.push_back(x);
                if (x == '(')
                {
                    remove(s, index + 1, ocount + 1, ccount, expression, removecount, v, mine);
                }
                else if (ccount < ocount)
                {
                    remove(s, index + 1, ocount, ccount + 1, expression, removecount, v, mine);
                }
                expression.pop_back();
            }
        }
    }

    vector<string> removeInvalidParentheses(string s)
    {
        string path;
        vector<string> removed, r;

        remove(s, 0, 0, 0, path, 0, removed, 32768);
        if (removed.size() == 0)
            r.push_back("");
        else
        {
            for (int i = 0; i < removed.size(); i++)
            {
                if (removed[i].size() == s.size() - 1 && find(r.begin(), r.end(), removed[i]) == r.end())
                    r.push_back(removed[i]);
            }
        }
        return r;
    }
};