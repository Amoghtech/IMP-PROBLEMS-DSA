// str given roman number string
// Returns decimal value of roman numaral
int romanToDecimal(string &str)
{
    // code here
    map<char, int> m;
    m.insert(make_pair('I', 1));
    m.insert(make_pair('V', 5));
    m.insert(make_pair('X', 10));
    m.insert(make_pair('L', 50));
    m.insert(make_pair('C', 100));
    m.insert(make_pair('D', 500));
    m.insert(make_pair('M', 1000));
    int res = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (m[str[i]] < m[str[i + 1]] && i + 1 < str.length())
        {
            res += m[str[i + 1]] - m[str[i]];
            i++;
        }
        else
        {
            res += m[str[i]];
        }
    }
    return res;
}