class Solution
{
public:
    string longestCommonPrefix(vector<string> &arr)
    {
        int n = arr.size(), trigo = 1, m = INT_MAX;
        string s;

        for (int i = 0; i < n; i++)
        {
            int a = arr[i].length();
            if (a < m)
                m = a;
        }

        for (int i = 0; i < m && trigo; i++)
        {
            char ch = arr[0][i];
            for (int j = 0; j < n && trigo; j++)
            {
                if (arr[j][i] != ch)
                    trigo = 0;
            }
            if (trigo)
                s += ch;
        }
        return s;
    }
};