#include <bits/stdc++.h>
using namespace std;

void findDuplicate(vector<int> a)
{
    int slow = a[0], fast = a[0];
    do
    {
        slow = a[slow];
        fast = a[a[fast]];
    } while (slow != fast);
    fast = a[0];
    while (slow != fast)
    {
        slow = a[slow];
        fast = a[fast];
    }
    cout << slow << "\n";
}

int main()
{
    vector<int> a = {1, 3, 4, 2, 2};
    findDuplicate(a);
    return 0;
}