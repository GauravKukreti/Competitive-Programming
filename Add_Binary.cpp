class Solution
{
public:
    string addBinary(string a, string b)
    {
        int i = a.length() - 1, j = b.length() - 1, carry = 0;
        string s;
        char ch;

        while (i >= 0 || j >= 0 || carry)
        {
            if (i >= 0)
            {
                carry += a[i] - '0';
                i -= 1;
            }

            if (j >= 0)
            {
                carry += b[j] - '0';
                j -= 1;
            }

            ch = (carry % 2 + '0');
            s = ch + s;
            carry /= 2;
        }
        return s;
    }
};