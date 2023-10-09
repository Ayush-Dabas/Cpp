#include <bits/stdc++.h>
using namespace std;

void findMinMax(vector<int> a)
{
    int minEl = INT_MAX, maxEl = INT_MIN;
    for (int i = 0; i < a.size(); i++)
    {
        minEl = min(minEl, a[i]);
        maxEl = max(maxEl, a[i]);
    }
    cout << "Maximum element: " << maxEl << "\n";
    cout << "Minimum element: " << minEl << "\n";
}

int main()
{
    vector<int> a = {-12, 23, 6, 2, 7, 2, 7564, 0};
    findMinMax(a);
    return 0;
}