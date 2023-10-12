#include <bits/stdc++.h>
using namespace std;

bool sumSubarray(vector<int> arr)
{
    for (int index = 0; index < arr.size() - 1; index++)
    {
        int sum = arr[index];
        if (sum == 0)
        {
            return true;
        }
        for (int secondary = index + 1; secondary < arr.size(); secondary++)
        {
            sum += arr[secondary];
            if (sum == 0)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<int> a = {4, 2, -3, 1, 6};
    cout << sumSubarray(a);
    return 0;
}