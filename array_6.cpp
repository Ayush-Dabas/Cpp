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

void nextDistinct(const vector<int> &a, int &k)
{
    do
    {
        ++k;
    } while (k < a.size() && a[k - 1] == a[k]);
}

void unionS(vector<int> a, vector<int> b)
{
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            nextDistinct(a, i);
        }
        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            nextDistinct(b, j);
        }
        else
        {
            cout << a[i] << " ";
            nextDistinct(a, i);
            nextDistinct(b, j);
        }
    }

    while (i < a.size())
    {
        cout << a[i] << " ";
        nextDistinct(a, i);
    }
    while (j < b.size())
    {
        cout << b[j] << " ";
        nextDistinct(b, j);
    }
}

void inters(vector<int> a, vector<int> b)
{
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 2, 3};
    vector<int> arr2 = {2, 3, 3, 4, 5, 5};
    unionS(arr1, arr2);
    cout << "\n";
    inters(arr1, arr2);
    return 0;
}