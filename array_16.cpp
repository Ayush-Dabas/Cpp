#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> a, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    int cnt = 0;
    while (left <= mid && right <= high)
    {
        if (a[left] <= a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else
        {
            temp.push_back(a[right]);
            right++;
            cnt += mid - left + 1;
        }
    }

    while (left <= mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(a[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        a[i] = temp[i - low];
    }
    return cnt;
}

int mergeSort(vector<int> a, int l, int h)
{
    int cnt = 0;
    if (l >= h)
    {
        return cnt;
    }
    int mid = l + (h - l) / 2;

    cnt += mergeSort(a, l, mid);
    cnt += mergeSort(a, mid + 1, h);
    cnt += merge(a, l, mid, h);
    return cnt;
}

void cntInv(vector<int> a)
{
    cout << mergeSort(a, 0, a.size() - 1);
}

int main()
{
    vector<int> a = {5, 4, 3, 2, 1};
    cntInv(a);
    return 0;
}