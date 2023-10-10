#include <bits/stdc++.h>
using namespace std;

void print(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

void sort(vector<int> &a)
{
    int n = a.size();
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[low++], a[mid++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(a[mid], a[high--]);
            break;

        default:
            break;
        }
    }
}

int main()
{
    vector<int> a = {0, 1, 2, 2, 2, 1, 1, 1, 0};
    sort(a);
    print(a);
    return 0;
}