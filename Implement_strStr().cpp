class Solution
{
public:
    int strStr(string arr, string brr)
    {
        int m = arr.length(), n = brr.length();

        if (m < n)
            return -1;
        if (!m || !n)
            return 0;

        for (int i = 0; i <= m - n; i++)
        {
            if (arr[i] == brr[0] && arr[i + n - 1] == brr[n - 1])
            {
                int j;
                for (j = 0; j < n; j++)
                {
                    if (arr[i + j] != brr[j])
                        break;
                }
                if (j == n)
                    return i;
            }
        }
        return -1;
    }
};