/*

Q. Find the smallest positive integer value that cannot be represented as the sum of any subset of a given array.

3
6
1 3 6 10 11 15
4
1 1 1 1
4
1 1 3 4

*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= sum)
            sum += arr[i];
    }
    cout << sum << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}