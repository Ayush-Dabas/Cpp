#include <bits/stdc++.h>
using namespace std;

int jump(vector<int> a, int idx, int end, vector<int> &dp)
{
    if (idx == end)
        return 0;

    if (dp[idx] != -1)
        return dp[idx];

    int minJ = INT_MAX - 1;

    for (int i = a[idx]; i >= 1; i--)
    {
        if (idx + i <= end)
        {
            minJ = min(minJ, 1 + jump(a, idx + i, end, dp));
        }
    }
    return dp[idx] = minJ;
}

int minJumps(vector<int> a)
{
    vector<int> dp(a.size(), -1);
    return jump(a, 0, a.size() - 1, dp);
}

int main()
{
    vector<int> a = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << minJumps(a);
    return 0;
}