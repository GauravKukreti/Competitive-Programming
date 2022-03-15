class Solution
{
public:
    bool isValid(string s)
    {
        int n = s.length();
        stack<char> arr;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(')
                arr.push(s[i]);
            else if (s[i] == '}' && !arr.empty() && arr.top() == '{')
                arr.pop();
            else if (s[i] == ']' && !arr.empty() && arr.top() == '[')
                arr.pop();
            else if (s[i] == ')' && !arr.empty() && arr.top() == '(')
                arr.pop();
            else
                return false;
        }
        if (arr.empty())
            return true;
        else
            return false;
    }
};