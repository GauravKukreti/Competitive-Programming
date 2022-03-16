class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = s.length(), count = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == ' ' && count == 0)
                continue;
            if (s[i] == ' ')
                return count;
            else
                count++;
        }
        return count;
    }
};