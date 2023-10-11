#include <bits/stdc++.h>
using namespace std;

void kadane(vector<int> a)
{
    int temp = 0;
    int sum = INT_MIN;
    for (int i = 0; i < a.size(); i++)
    {
        temp = max(0, temp + a[i]);
        sum = max(sum, temp);
    }
    cout << sum << "\n";
}

int main()
{
    vector<int> a = {-2, -2, 4, -1, -2, 1, 5, -3};
    kadane(a);
    return 0;
}