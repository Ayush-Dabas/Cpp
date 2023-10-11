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

void merge(vector<int> &a, vector<int> &b)
{
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] > b[j])
        {
            swap(a[i], b[j]);
            j++;
        }
        else
        {
            i++;
        }
    }

    print(a);
    print(b);
}

int main()
{
    vector<int> a = {1, 5, 9, 10, 15, 20};
    vector<int> b = {2, 3, 4, 6, 7, 8};
    merge(a, b);
    return 0;
}