#include <bits/stdc++.h>
using namespace std;

void kthElement(vector<int> a, int k)
{
    sort(a.begin(), a.end());
    cout << "Minimum " << k << " th element: " << a[k - 1] << "\n";
    cout << "Maximum " << k << " th element: " << a[a.size() - k];
}

int main()
{
    vector<int> a = {-12, 23, 6, 2, 7, 2, 7564, 0};
    int k = 4;
    kthElement(a, k);
    return 0;
}