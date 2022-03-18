class Solution
{
public:
    double myPow(double x, int n)
    {
        if (!n)
            return 1;
        if (n == 1)
            return x;
        if (n == 2)
            return x * x;

        if (x == 1)
            return 1;

        if (x == -1)
        {
            if (n % 2 == 0)
                return 1;
            else
                return -1;
        }

        if (n == INT_MIN || n == INT_MAX)
            return 0;

        double ans = 1;
        int trigo = 0;
        if (n < 0)
        {
            n = -n;
            trigo = 1;
        }

        for (int i = 0; i < n; i++)
        {
            ans *= x;
        }

        if (trigo)
        {
            return 1 / ans;
        }

        return ans;
    }
};