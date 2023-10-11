#include <bits/stdc++.h>
using namespace std;

void print(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

void minimizeH(vector<int> a, int k)
{
    sort(a.begin(), a.end());
    int ans = a[a.size() - 1] - a[0];
    int tempMin = a[0];
    int tempMax = a[a.size() - 1];

    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] - k < 0)
        {
            continue;
        }
        tempMin = min(a[0] + k, a[i] - k);
        tempMax = max(a[a.size() - 1] - k, a[i - 1] + k);
        ans = min(ans, tempMax - tempMin);
    }
    cout << ans << "\n";
}

int main()
{
    vector<int> a = {1, 5, 15, 10};
    int k = 3;
    minimizeH(a, k);
    return 0;
}