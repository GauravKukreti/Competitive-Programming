class Solution
{
public:
    int romanToInt(string s)
    {
        int n = s.length();
        int sum = 0;
        int arr[26] = {0};
        arr[8] = 1;
        arr[21] = 5;
        arr[23] = 10;
        arr[11] = 50;
        arr[2] = 100;
        arr[3] = 500;
        arr[12] = 1000;

        int old = s[n - 1] - 'A';
        sum += arr[old];

        for (int i = n - 2; i >= 0; i--)
        {
            int now = s[i] - 'A';
            if (arr[now] < arr[old])
                sum -= arr[now];
            else
                sum += arr[now];
            old = now;
        }
        return sum;
    }
};