#include <bits/stdc++.h>
using namespace std;

void kadaneAlgo(vector<int> a)
{
    int sumTillNow = 0, sumMax = INT_MIN;
    for (int i = 0; i < a.size(); i++)
    {
        sumTillNow = max(0, sumTillNow + a[i]);
        sumMax = max(sumMax, sumTillNow);
    }

    cout << sumMax << "\n";
}

int main()
{
    vector<int> a = {-2, -3, 4, -1, -2, 1, 5, -3};
    kadaneAlgo(a);
    return 0;
}