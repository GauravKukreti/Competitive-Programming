class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length(), smax = 0;

        if (!n || n == 1)
            return n;

        for (int i = 0; i < n; i++)
        {
            if (i != n - 1 && s[i] == s[i + 1])
                continue;

            int count = 0;

            int arr[95] = {0};

            for (int j = i; j < n; j++)
            {
                int ch = s[j] - ' ';
                if (arr[ch] == 1)
                    break;

                count += 1;
                arr[ch] = 1;
            }
            smax = (count > smax) ? (count) : (smax);
        }
        return smax;
    }
};