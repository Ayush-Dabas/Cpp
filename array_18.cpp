#include <bits/stdc++.h>
using namespace std;

void twoSum(vector<int> arr, int target)
{
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            cout << "YES !\n";
            cout << arr[left] << " + " << arr[right] << " = " << target << "\n";
            return;
        }
        else if (sum < target)
            left++;
        else
            right--;
    }
    cout << "NO !\n";
}

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    twoSum(arr, target);
    return 0;
}