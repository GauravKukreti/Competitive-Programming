class Solution
{
public:
    int reverse(int x)
    {
        int rev = 0, rem, max = INT_MAX / 10, min = INT_MIN / 10;
        while (x != 0)
        {
            rem = x % 10;
            x /= 10;

            if (rev > max || (rev == max && rem > 7))
                return 0;

            if (rev < min || (rev == min && rem < -8))
                return 0;

            rev = rev * 10 + rem;
        }
        return rev;
    }
};