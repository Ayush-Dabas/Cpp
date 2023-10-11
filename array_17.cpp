#include <bits/stdc++.h>
using namespace std;

void stock(vector<int> a)
{
    int maximumProfit = 0;
    int minimumPrice = INT_MAX;

    for (int i = 0; i < a.size(); i++)
    {
        minimumPrice = min(minimumPrice, a[i]);
        maximumProfit = max(maximumProfit, a[i] - minimumPrice);
    }

    cout << maximumProfit << "\n";
}

int main()
{
    vector<int> a = {7, 1, 5, 3, 6, 4};
    stock(a);
    return 0;
}