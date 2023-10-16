#include <bits/stdc++.h>
using namespace std;

void maximumProductSubarray(vector<int> arr)
{
    int maximumProduct = 0;
    for (int index = 0; index < arr.size(); index++)
    {
        int temporaryProduct = arr[index];
        for (int secondaryIndex = index + 1; secondaryIndex < arr.size(); secondaryIndex++)
        {
            maximumProduct = max(maximumProduct, temporaryProduct);
            temporaryProduct *= arr[secondaryIndex];
        }
        maximumProduct = max(maximumProduct, temporaryProduct);
    }

    cout << maximumProduct << endl;
}

int main()
{
    vector<int> arr = {-1, -3, -10, 0, 60};
    maximumProductSubarray(arr);
    return 0;
}